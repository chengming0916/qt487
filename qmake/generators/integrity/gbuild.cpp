/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "gbuild.h"
#include "option.h"
#include "meta.h"
#include <qdir.h>
#include <qregexp.h>
#include <qcryptographichash.h>
#include <qdebug.h>
#include <stdlib.h>
#include <time.h>
#ifdef Q_OS_UNIX
#  include <sys/types.h>
#  include <sys/stat.h>
#endif

QT_BEGIN_NAMESPACE

unsigned int dllbase = 0x01000000;
#define DLLOFFSET 0x600000

GBuildMakefileGenerator::GBuildMakefileGenerator() : MakefileGenerator()
{
    nativebins << "moc" << "rcc" << "uic" << "bootstrap";
}

bool
GBuildMakefileGenerator::writeMakefile(QTextStream &text)
{
    QStringList tmp;
    QString filename(Option::output.fileName());
    QString pathtoremove(qmake_getpwd());
    QString relpath(pathtoremove);
    QString strtarget(project->first("TARGET"));
    bool isnativebin = nativebins.contains(strtarget);
    relpath.replace(Option::output_dir, "");

    /* correct output for non-prl, non-recursive case */
    QString outname(qmake_getpwd());
    outname += QDir::separator();
    outname += strtarget;
    outname += projectSuffix();
    Option::output.close();
    Option::output.setFileName(outname);
    MakefileGenerator::openOutput(Option::output, QString());

    if (strtarget != fileInfo(project->projectFile()).baseName().section('.', -2, -2)) {
        QString gpjname(strtarget);
        QString outputName(qmake_getpwd());
        outputName += QDir::separator();
        outputName += fileInfo(project->projectFile()).baseName();
        outputName += projectSuffix();
        QFile f(outputName);
        f.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
        QTextStream t(&f);
        t << "#!gbuild\n";
        t << "[Project]\n";
        t << gpjname << projectSuffix() << "\n";
        if ((project->first("TEMPLATE") == "lib")
                && project->isActiveConfig("shared"))
            t << gpjname << "_shared" << projectSuffix() << "\n";
        t.flush();
        gpjname += projectSuffix();
        Option::output.close();
        Option::output.setFileName(gpjname);
        MakefileGenerator::openOutput(Option::output, QString());
    }

    if ((project->first("TEMPLATE") == "app")
            && (!isnativebin)) {
        QTextStream t(&Option::output);
        QString intname(strtarget);
        intname += ".int";
        /* this is for bulding an INTEGRITY application.
         * generate the .int integrate file and the .gpj INTEGRITY Application
         * project file, then go on with regular files */
        t << "#!gbuild" << "\n";
        t << "[INTEGRITY Application]" << "\n";
        t << "\t:binDirRelative=.\n";
        t << "\t-o " << strtarget << "\n";
        t << intname << "\n";
        t << strtarget << "_app" << projectSuffix() << "\n";
        t.flush();

        /* generate integrate file */
        QFile f(intname);
        f.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
        QTextStream ti(&f);
        ti << "# This is a file automatically generated by qmake" << "\n";
        ti << "# Modifications will be lost next time you run qmake" << "\n";
        ti << "Kernel" << "\n";
        ti << "\tFilename\tDynamicDownload" << "\n";
        ti << "EndKernel" << "\n" << "\n";
        ti << "AddressSpace" << "\n";
        ti << "\tName\t" << strtarget << "\n";
        ti << "\tFilename\t" << strtarget << "_app" << "\n";
        ti << "\tMemoryPoolSize\t0x100000" << "\n";
        ti << "\tLanguage\tC++" << "\n";
        /* FIXME : heap size is huge to be big enough for every example
         * it should probably be tailored for each example, btu there is no
         * good way to guess that */
        ti << "\tHeapSize\t0x00D00000" << "\n";
        ti << "\tTask\tInitial" << "\n";
        ti << "\t\tStackSize\t0x30000" << "\n";
        ti << "\t\tStartIt\tTrue" << "\n";
        ti << "\tEndTask" << "\n";
        ti << "EndAddressSpace" << "\n";
        ti.flush();

        /* change current project file to <projectname>_app.gpj and continue
         * generation */
        outname.insert(outname.lastIndexOf("."), "_app");
        Option::output.close();
        Option::output.setFileName(outname);
        MakefileGenerator::openOutput(Option::output, QString());
    } else if ((project->first("TEMPLATE") == "lib")
            && project->isActiveConfig("dll")) {
        QString gpjname(strtarget);
        gpjname += "_shared";
        gpjname += projectSuffix();
        QFile f(gpjname);
        f.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
        QTextStream t(&f);
        t << "#!gbuild\n"
            "[Program]\n"
            "\t-A libINTEGRITY.so\n"
            "\t-A libc.so\n"
            "\t-A libscxx.so\n"
            "\t-A libQtCore.so\n"
            "\t-e __ghsbegin_text\n"
            "\t-startfile=-\n"
            "\t:syslibraries=-\n"
            "\t-Onolink\n";
        t << "\t-o lib" << strtarget << ".so\n";
        t << "\t-l" << strtarget << "\n";
        t << "\t-extractall=-l" << strtarget << "\n";
        t << "\t:outputDir=work/" << filename.section(QDir::separator(), 0, -1).remove(".gpj") << "\n";
        t << strtarget << "_shared.ld\n";
        t << "$(__OS_DIR)/intlib/sharedobjbssinit.c\n";
        t.flush();

        QFile fl(strtarget + "_shared.ld");
        fl.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
        QTextStream tl(&fl);
        tl << "CONSTANTS {\n"
             "    __INTEGRITY_MinPageAlign          = 16K\n"
             "    __INTEGRITY_MaxPageAlign          = 16K\n"
             "    __INTEGRITY_LibCBaseAddress       = \n";
        tl << dllbase << "\n";
        tl << "}\n"
             "-sec\n"
             "{\n"
             "        .picbase __INTEGRITY_LibCBaseAddress :\n"
             "        .text :\n"
             "        .syscall :\n"
             "        .intercall :\n"
             "        .interfunc :\n"
             "        .secinfo :\n"
             "        .rodata align(16) :\n"
             "        .fixaddr :\n"
             "        .fixtype :\n"
             "        .rombeg :\n"
             "        .textchecksum :\n"
             "        // The above sections may be large. Leave a bigger gap for large pages.\n"
             "        .pidbase align(__INTEGRITY_MaxPageAlign) :\n"
             "        .sdabase :\n"
             "        .data :\n"
             "        .toc :\n"
             "        .opd :\n"
             "        .datachecksum :\n"
             "        .sbss : \n"
             "        .bss align(__INTEGRITY_MinPageAlign) :\n"
             "        .argsection(__INTEGRITY_MaxPageAlign) :\n"
             "        .heap : \n"
             "}\n";
        tl.flush();
        dllbase += DLLOFFSET;
    }

    warn_msg(WarnParser, Option::output.fileName().toAscii());
    QTextStream t(&Option::output);
    QString primaryTarget;
    if (!project->values("QMAKE_CXX").isEmpty())
        primaryTarget = project->values("QMAKE_CXX").at(0);

    pathtoremove += QDir::separator();
    filename.remove(qmake_getpwd());

    //HEADER
    t << "#!gbuild" << "\n";

    /* find the architecture out of the compiler name */
    if (filename.endsWith("projects.gpj")) {
        primaryTarget.remove(0, 5);
        t << "macro QT_BUILD_DIR=%expand_path(.)\n";
        t << "macro __OS_DIR=" << project->values("INTEGRITY_DIR").first() << "\n";
        t << "primaryTarget=" << primaryTarget << "_integrity.tgt" << "\n";
        t << "customization=util/integrity/qt.bod\n";
    }
    /* project type */
    if (project->first("TEMPLATE") == "app") {
        t << "[Program]" << "\n";
        if (isnativebin) {
            t << "\t:binDir=bin\n";
            t << "\t-o " << strtarget << "\n";
        } else {
            t << "\t:binDirRelative=.\n";
            t << "\t-o " << strtarget << "_app\n";
        }
    } else if (project->first("TEMPLATE") == "lib") {
        t << "[Library]" << "\n";
        t << "\t:binDir=lib" << "\n";
        t << "\t-o lib" << strtarget << ".a" << "\n";
    } else if (project->first("TEMPLATE") == "subdirs")
        t << "[Project]" << "\n";
    else
        t << project->first("TEMPLATE") << "\n";

    /* compilations options */
    t << "\t:sourceDir=." << "\n";

    t << "\t:outputDir=work" << relpath << "\n";
    t << "\t-I${%expand_path(.)}/work" << relpath << "\n";
    t << "\t--cxx_include_directory ${%expand_path(.)}/work" << relpath << "\n";
    if (filename.endsWith("projects.gpj")) {
        t << "\t:sourceDir=work\n";
        t << "\t-Iwork\n";
        t << "\t-Llib\n";
        t << "\t";
        QStringList &l = project->values("QMAKE_CXXFLAGS");
        for (QStringList::Iterator it = l.begin(); it != l.end(); ++it) {
            if ((*it).startsWith("-"))
                t << "\n" << "\t" << (*it);
            else
                t << " " << (*it);
        }
        t << "\n";
    }
    t << "\n";

    if (project->first("TEMPLATE") != "project")
        t << varGlue("DEFINES", "\t-D", "\n\t-D", "\n");

    t << "\t-I.\n\t-I" << specdir() << "\n";
    t << varGlue("INCLUDEPATH", "\t-I", "\n\t-I", "\n");
    t << "\t--cxx_include_directory .\n\t--cxx_include_directory " << specdir() << "\n";
    t << varGlue("INCLUDEPATH", "\t--cxx_include_directory ", "\n\t--cxx_include_directory ", "\n");

    if (project->first("TEMPLATE") == "app") {
        /* include linker flags if it's an application */
        QString src[] = { "QMAKE_LFLAGS", "QMAKE_FRAMEWORKPATH_FLAGS", "QMAKE_LIBDIR_FLAGS", "QMAKE_LIBS", "LIBS", QString() };
        for (int i = 0; !src[i].isNull(); i++) {
            /* skip target libraries for native tools */
            if (isnativebin && (i == 0))
                continue;
            t << "\t";
            QStringList &l = project->values(src[i]);
            for (QStringList::Iterator it = l.begin(); it != l.end(); ++it) {
                if ((*it).startsWith("-"))
                    t << "\n" << "\t" << (*it);
                else
                    t << " " << (*it);
            }
            t << "\n";
        }
    }

    /* first subdirectories/subprojects */
    {
        QStringList &l = project->values("SUBDIRS");
        for (QStringList::Iterator it = l.begin(); it != l.end(); ++it) {
            QString gpjname((*it));
            /* avoid native tools */
            if (nativebins.contains(gpjname.section("_", -1)))
                continue;
            if (!project->first((*it) + ".subdir").isEmpty())
                gpjname = project->first((*it) + ".subdir");
            /* some SUBDIRS are not actually subdirs, instead .pro files */
            if (gpjname.endsWith(".pro"))
                gpjname.chop(4);
            else
                gpjname += QDir::separator() + gpjname.section(QDir::separator(), -1);
            gpjname += projectSuffix();
            /* make relative */
            if (!project->values("QT_SOURCE_TREE").isEmpty()) {
                gpjname.replace(project->values("QT_SOURCE_TREE").first() + QDir::separator(), "");
            }
            t << gpjname << "\n";
        }
    }

    {
        QStringList &l = project->values("RESOURCES");
        for (QStringList::Iterator it = l.begin(); it != l.end(); ++it) {
            QString tmpstr((*it).replace(pathtoremove, ""));
            t << tmpstr << "\t[Qt Resource]\n";
            tmpstr = tmpstr.section(".", -2, -1).section(QDir::separator(), -1);
            tmpstr.remove(".qrc");
            t << "\t-name " << tmpstr << "\n";
            tmpstr.insert(tmpstr.lastIndexOf(QDir::separator()) + 1, "qrc_");
            tmpstr.append(".cpp");
            t << "\t-o work/" << relpath << QDir::separator() << tmpstr << "\n";
        }
    }
    {
        QStringList &l = project->values("FORMS");
        for (QStringList::Iterator it = l.begin(); it != l.end(); ++it) {
            QString tmpstr((*it).replace(pathtoremove, ""));
            t << tmpstr << "\t[Qt Dialog]\n";
            tmpstr = tmpstr.section(".", 0, 0).section(QDir::separator(), -1);
            tmpstr.insert(tmpstr.lastIndexOf(QDir::separator()) + 1, "ui_");
            tmpstr.remove(".ui");
            tmpstr.append(".h");
            t << "\t-o work/" << relpath << QDir::separator() << tmpstr << "\n";
        }
    }

    /* source files for this project */
    QString src[] = { "HEADERS", "SOURCES", QString() };
    for (int i = 0; !src[i].isNull(); i++) {
        QStringList &l = project->values(src[i]);
        for (QStringList::Iterator it = l.begin(); it != l.end(); ++it) {
            if ((*it).isEmpty())
                continue;
            /* native tools aren't preprocessed */
            if (!isnativebin)
                t << writeOne((*it), pathtoremove);
            else
                t << (*it).remove(pathtoremove) << "\n";
        }
    }
    t << "\n";

    {
        QStringList &l = project->values("GENERATED_SOURCES");
        for (QStringList::Iterator it = l.begin(); it != l.end(); ++it) {
            t << "work/" << relpath << QDir::separator() << (*it).section(QDir::separator(), -1) << "\n";
        }
    }

    return true;
}

QString GBuildMakefileGenerator::writeOne(QString filename, QString pathtoremove)
{
    QString s("");
    QString origfilename(filename);
    s += filename.remove(pathtoremove);
    if (filename.endsWith(Option::h_ext.first()) && mocable(origfilename)) {
        QString corename(filename.section(QDir::separator(), -1));
        corename.remove(Option::h_ext.first());
        corename.append(Option::cpp_ext.first());
        corename.prepend(Option::h_moc_mod);
        s += "\t[MOC/Qt Header]\n";
        s += "\t-o ";
        s += "work/";
        s += pathtoremove;
        s += QDir::separator();
        s += corename;
        s += "\n";
    } else if (filename.section(QDir::separator(), -1).startsWith("qrc_")) {
        QString tmpstr(filename.section("/", -1).section(".", 0, -1).remove("qrc_").remove(".cpp"));
        s += "\n\t:depends=";
        s += tmpstr;
        s += ".qrc";
        s += "\n";
    } else if (filename.endsWith(Option::cpp_ext.first()) && mocable(origfilename)) {
        QString tmpstr(filename.section("/", -1));
        QString filepath(pathtoremove);
        if (!project->values("QT_SOURCE_TREE").isEmpty()) {
            filepath.remove(project->values("QT_SOURCE_TREE").first());
            filepath.remove(0, 1);
        }
        s += "\n\t:preexecShellSafe='${QT_BUILD_DIR}/bin/moc ";
        s += "-nn ";
        s += varGlue("DEFINES", "-D", " -D", " ");
        s += varGlue("INCLUDEPATH", "-I", " -I", " ");
        s += filepath;
        s += filename;
        s += " -o ";
        tmpstr.replace(Option::cpp_ext.first(), Option::cpp_moc_ext);
        s += "work/";
        s += pathtoremove;
        s += QDir::separator();
        s += tmpstr;
        s += "\n";
    } else
        s += "\n";
    return s;
}

bool
GBuildMakefileGenerator::openOutput(QFile &file, const QString &build) const
{
    debug_msg(1, "file is %s", file.fileName().toLatin1().constData());
    QFileInfo fi(file);
    if (fi.filePath().isEmpty())
        file.setFileName(qmake_getpwd() + QDir::separator() + file.fileName());
    if (!file.fileName().endsWith(projectSuffix())) {
        QString outputName(file.fileName());
        outputName += QDir::separator();
        outputName += fileInfo(project->projectFile()).baseName();
        outputName += projectSuffix();
        warn_msg(WarnParser, outputName.toAscii());
        file.setFileName(outputName);
    }
    debug_msg(1, "file is %s", file.fileName().toLatin1().constData());
    bool ret = MakefileGenerator::openOutput(file, QString());
    return ret;
}

QT_END_NAMESPACE
