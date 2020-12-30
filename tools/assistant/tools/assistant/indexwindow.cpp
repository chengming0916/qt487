/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the Qt Assistant of the Qt Toolkit.
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

#include "indexwindow.h"

#include "centralwidget.h"
#include "helpenginewrapper.h"
#include "helpviewer.h"
#include "openpagesmanager.h"
#include "topicchooser.h"
#include "tracer.h"

#include <QtGui/QLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QKeyEvent>
#include <QtGui/QMenu>
#include <QtGui/QContextMenuEvent>
#include <QtGui/QListWidgetItem>

#include <QtHelp/QHelpIndexWidget>

QT_BEGIN_NAMESPACE

IndexWindow::IndexWindow(QWidget *parent)
    : QWidget(parent)
    , m_searchLineEdit(new QLineEdit)
    , m_indexWidget(HelpEngineWrapper::instance().indexWidget())
{
    TRACE_OBJ
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *l = new QLabel(tr("&Look for:"));
    layout->addWidget(l);

    l->setBuddy(m_searchLineEdit);
    connect(m_searchLineEdit, SIGNAL(textChanged(QString)), this,
        SLOT(filterIndices(QString)));
    m_searchLineEdit->installEventFilter(this);
    layout->setMargin(4);
    layout->addWidget(m_searchLineEdit);

    HelpEngineWrapper &helpEngine = HelpEngineWrapper::instance();
    m_indexWidget->installEventFilter(this);
    connect(helpEngine.indexModel(), SIGNAL(indexCreationStarted()), this,
        SLOT(disableSearchLineEdit()));
    connect(helpEngine.indexModel(), SIGNAL(indexCreated()), this,
        SLOT(enableSearchLineEdit()));
    connect(m_indexWidget, SIGNAL(linkActivated(QUrl,QString)), this,
        SIGNAL(linkActivated(QUrl)));
    connect(m_indexWidget, SIGNAL(linksActivated(QMap<QString,QUrl>,QString)),
        this, SIGNAL(linksActivated(QMap<QString,QUrl>,QString)));
    connect(m_searchLineEdit, SIGNAL(returnPressed()), m_indexWidget,
        SLOT(activateCurrentItem()));
    layout->addWidget(m_indexWidget);

    m_indexWidget->viewport()->installEventFilter(this);
}

IndexWindow::~IndexWindow()
{
    TRACE_OBJ
}

void IndexWindow::filterIndices(const QString &filter)
{
    TRACE_OBJ
    if (filter.contains(QLatin1Char('*')))
        m_indexWidget->filterIndices(filter, filter);
    else
        m_indexWidget->filterIndices(filter, QString());
}

bool IndexWindow::eventFilter(QObject *obj, QEvent *e)
{
    TRACE_OBJ
    if (obj == m_searchLineEdit && e->type() == QEvent::KeyPress) {
        QKeyEvent *ke = static_cast<QKeyEvent*>(e);
        QModelIndex idx = m_indexWidget->currentIndex();
        switch (ke->key()) {
        case Qt::Key_Up:
            idx = m_indexWidget->model()->index(idx.row()-1,
                idx.column(), idx.parent());
            if (idx.isValid()) {
                m_indexWidget->setCurrentIndex(idx);
                return true;
            }
            break;
        case Qt::Key_Down:
            idx = m_indexWidget->model()->index(idx.row()+1,
                idx.column(), idx.parent());
            if (idx.isValid()) {
                m_indexWidget->setCurrentIndex(idx);
                return true;
            }
            break;
        case Qt::Key_Escape:
            emit escapePressed();
            return true;
        default: ; // stop complaining
        }
    } else if (obj == m_indexWidget && e->type() == QEvent::ContextMenu) {
        QContextMenuEvent *ctxtEvent = static_cast<QContextMenuEvent*>(e);
        QModelIndex idx = m_indexWidget->indexAt(ctxtEvent->pos());
        if (idx.isValid()) {
            QMenu menu;
            QAction *curTab = menu.addAction(tr("Open Link"));
            QAction *newTab = menu.addAction(tr("Open Link in New Tab"));
            menu.move(m_indexWidget->mapToGlobal(ctxtEvent->pos()));

            QAction *action = menu.exec();
            if (curTab == action)
                m_indexWidget->activateCurrentItem();
            else if (newTab == action) {
                open(m_indexWidget, idx);
            }
        }
    } else if (m_indexWidget && obj == m_indexWidget->viewport()
        && e->type() == QEvent::MouseButtonRelease) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(e);
        QModelIndex idx = m_indexWidget->indexAt(mouseEvent->pos());
        if (idx.isValid()) {
            Qt::MouseButtons button = mouseEvent->button();
            if (((button == Qt::LeftButton) && (mouseEvent->modifiers() & Qt::ControlModifier))
                || (button == Qt::MidButton)) {
                open(m_indexWidget, idx);
            }
        }
    }
#ifdef Q_OS_MAC
    else if (obj == m_indexWidget && e->type() == QEvent::KeyPress) {
        QKeyEvent *ke = static_cast<QKeyEvent*>(e);
        if (ke->key() == Qt::Key_Return || ke->key() == Qt::Key_Enter)
           m_indexWidget->activateCurrentItem();
    }
#endif
    return QWidget::eventFilter(obj, e);
}

void IndexWindow::enableSearchLineEdit()
{
    TRACE_OBJ
    m_searchLineEdit->setDisabled(false);
    filterIndices(m_searchLineEdit->text());
}

void IndexWindow::disableSearchLineEdit()
{
    TRACE_OBJ
    m_searchLineEdit->setDisabled(true);
}

void IndexWindow::setSearchLineEditText(const QString &text)
{
    TRACE_OBJ
    m_searchLineEdit->setText(text);
}

void IndexWindow::focusInEvent(QFocusEvent *e)
{
    TRACE_OBJ
    if (e->reason() != Qt::MouseFocusReason) {
        m_searchLineEdit->selectAll();
        m_searchLineEdit->setFocus();
    }
}

void IndexWindow::open(QHelpIndexWidget* indexWidget, const QModelIndex &index)
{
    TRACE_OBJ
    QHelpIndexModel *model = qobject_cast<QHelpIndexModel*>(indexWidget->model());
    if (model) {
        QString keyword = model->data(index, Qt::DisplayRole).toString();
        QMap<QString, QUrl> links = model->linksForKeyword(keyword);

        QUrl url;
        if (links.count() > 1) {
            TopicChooser tc(this, keyword, links);
            if (tc.exec() == QDialog::Accepted) 
                url = tc.link();
        } else if (links.count() == 1) {
            url = links.constBegin().value();
        } else {
            return;
        }

        if (!HelpViewer::canOpenPage(url.path()))
            CentralWidget::instance()->setSource(url);
        else
            OpenPagesManager::instance()->createPage(url);
    }
}

QT_END_NAMESPACE
