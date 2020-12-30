/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtDeclarative module of the Qt Toolkit.
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


//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

//
// This file is automatically generated from qmljs.g.
// Changes will be lost.
//

#ifndef QDECLARATIVEJSPARSER_P_H
#define QDECLARATIVEJSPARSER_P_H

#include "qdeclarativejsglobal_p.h"
#include "qdeclarativejsgrammar_p.h"
#include "qdeclarativejsast_p.h"
#include "qdeclarativejsengine_p.h"

#include <QtCore/QList>
#include <QtCore/QString>

QT_QML_BEGIN_NAMESPACE

namespace QDeclarativeJS {

class Engine;
class NameId;

class QML_PARSER_EXPORT Parser: protected QDeclarativeJSGrammar
{
public:
    union Value {
      int ival;
      double dval;
      NameId *sval;
      AST::ArgumentList *ArgumentList;
      AST::CaseBlock *CaseBlock;
      AST::CaseClause *CaseClause;
      AST::CaseClauses *CaseClauses;
      AST::Catch *Catch;
      AST::DefaultClause *DefaultClause;
      AST::ElementList *ElementList;
      AST::Elision *Elision;
      AST::ExpressionNode *Expression;
      AST::Finally *Finally;
      AST::FormalParameterList *FormalParameterList;
      AST::FunctionBody *FunctionBody;
      AST::FunctionDeclaration *FunctionDeclaration;
      AST::Node *Node;
      AST::PropertyName *PropertyName;
      AST::PropertyNameAndValueList *PropertyNameAndValueList;
      AST::SourceElement *SourceElement;
      AST::SourceElements *SourceElements;
      AST::Statement *Statement;
      AST::StatementList *StatementList;
      AST::Block *Block;
      AST::VariableDeclaration *VariableDeclaration;
      AST::VariableDeclarationList *VariableDeclarationList;

      AST::UiProgram *UiProgram;
      AST::UiImportList *UiImportList;
      AST::UiImport *UiImport;
      AST::UiParameterList *UiParameterList;
      AST::UiPublicMember *UiPublicMember;
      AST::UiObjectDefinition *UiObjectDefinition;
      AST::UiObjectInitializer *UiObjectInitializer;
      AST::UiObjectBinding *UiObjectBinding;
      AST::UiScriptBinding *UiScriptBinding;
      AST::UiArrayBinding *UiArrayBinding;
      AST::UiObjectMember *UiObjectMember;
      AST::UiObjectMemberList *UiObjectMemberList;
      AST::UiArrayMemberList *UiArrayMemberList;
      AST::UiQualifiedId *UiQualifiedId;
      AST::UiSignature *UiSignature;
      AST::UiFormalList *UiFormalList;
      AST::UiFormal *UiFormal;
    };

public:
    Parser(Engine *engine);
    ~Parser();

    // parse a UI program
    bool parse() { return parse(T_FEED_UI_PROGRAM); }
    bool parseStatement() { return parse(T_FEED_JS_STATEMENT); }
    bool parseExpression() { return parse(T_FEED_JS_EXPRESSION); }
    bool parseSourceElement() { return parse(T_FEED_JS_SOURCE_ELEMENT); }
    bool parseUiObjectMember() { return parse(T_FEED_UI_OBJECT_MEMBER); }
    bool parseProgram() { return parse(T_FEED_JS_PROGRAM); }

    AST::UiProgram *ast() const
    { return AST::cast<AST::UiProgram *>(program); }

    AST::Statement *statement() const
    {
        if (! program)
            return 0;

        return program->statementCast();
    }

    AST::ExpressionNode *expression() const
    {
        if (! program)
            return 0;

        return program->expressionCast();
    }

    AST::UiObjectMember *uiObjectMember() const
    {
        if (! program)
            return 0;

        return program->uiObjectMemberCast();
    }

    AST::Node *rootNode() const
    { return program; }

    QList<DiagnosticMessage> diagnosticMessages() const
    { return diagnostic_messages; }

    inline DiagnosticMessage diagnosticMessage() const
    {
        foreach (const DiagnosticMessage &d, diagnostic_messages) {
            if (! d.kind == DiagnosticMessage::Warning)
                return d;
        }

        return DiagnosticMessage();
    }

    inline QString errorMessage() const
    { return diagnosticMessage().message; }

    inline int errorLineNumber() const
    { return diagnosticMessage().loc.startLine; }

    inline int errorColumnNumber() const
    { return diagnosticMessage().loc.startColumn; }

protected:
    bool parse(int startToken);

    void reallocateStack();

    inline Value &sym(int index)
    { return sym_stack [tos + index - 1]; }

    inline AST::SourceLocation &loc(int index)
    { return location_stack [tos + index - 1]; }

    AST::UiQualifiedId *reparseAsQualifiedId(AST::ExpressionNode *expr);

protected:
    Engine *driver;
    int tos;
    int stack_size;
    Value *sym_stack;
    int *state_stack;
    AST::SourceLocation *location_stack;

    AST::Node *program;

    // error recovery
    enum { TOKEN_BUFFER_SIZE = 3 };

    struct SavedToken {
       int token;
       double dval;
       AST::SourceLocation loc;
    };

    double yylval;
    AST::SourceLocation yylloc;
    AST::SourceLocation yyprevlloc;

    SavedToken token_buffer[TOKEN_BUFFER_SIZE];
    SavedToken *first_token;
    SavedToken *last_token;

    QList<DiagnosticMessage> diagnostic_messages;
};

} // end of namespace QDeclarativeJS



#define J_SCRIPT_REGEXPLITERAL_RULE1 78

#define J_SCRIPT_REGEXPLITERAL_RULE2 79

QT_QML_END_NAMESPACE



#endif // QDECLARATIVEJSPARSER_P_H
