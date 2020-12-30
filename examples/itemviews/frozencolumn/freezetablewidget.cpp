/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtGui>

#include "freezetablewidget.h"

//! [constructor]
FreezeTableWidget::FreezeTableWidget(QAbstractItemModel * model)
{
      setModel(model);
      frozenTableView = new QTableView(this);

      init();

      //connect the headers and scrollbars of both tableviews together
      connect(horizontalHeader(),SIGNAL(sectionResized(int,int,int)), this,
              SLOT(updateSectionWidth(int,int,int)));
      connect(verticalHeader(),SIGNAL(sectionResized(int,int,int)), this,
              SLOT(updateSectionHeight(int,int,int)));

      connect(frozenTableView->verticalScrollBar(), SIGNAL(valueChanged(int)),
              verticalScrollBar(), SLOT(setValue(int)));
      connect(verticalScrollBar(), SIGNAL(valueChanged(int)),
              frozenTableView->verticalScrollBar(), SLOT(setValue(int)));


}
//! [constructor]

FreezeTableWidget::~FreezeTableWidget()
{
      delete frozenTableView;
}

//! [init part1]
void FreezeTableWidget::init()
{
      frozenTableView->setModel(model());
      frozenTableView->setFocusPolicy(Qt::NoFocus);
      frozenTableView->verticalHeader()->hide();
      frozenTableView->horizontalHeader()->setResizeMode(QHeaderView::Fixed);

      viewport()->stackUnder(frozenTableView);
//! [init part1]

//! [init part2]
      frozenTableView->setStyleSheet("QTableView { border: none;"
                                     "background-color: #8EDE21;"
                                     "selection-background-color: #999}"); //for demo purposes
      frozenTableView->setSelectionModel(selectionModel());
      for(int col=1; col<model()->columnCount(); col++)
            frozenTableView->setColumnHidden(col, true);

      frozenTableView->setColumnWidth(0, columnWidth(0) );

      frozenTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      frozenTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      frozenTableView->show();

      updateFrozenTableGeometry();

      setHorizontalScrollMode(ScrollPerPixel);
      setVerticalScrollMode(ScrollPerPixel);
      frozenTableView->setVerticalScrollMode(ScrollPerPixel);
}
//! [init part2]


//! [sections]
void FreezeTableWidget::updateSectionWidth(int logicalIndex, int, int newSize)
{
      if(logicalIndex==0){
            frozenTableView->setColumnWidth(0,newSize);
            updateFrozenTableGeometry();
      }
}

void FreezeTableWidget::updateSectionHeight(int logicalIndex, int, int newSize)
{
      frozenTableView->setRowHeight(logicalIndex, newSize);
}
//! [sections]


//! [resize]
void FreezeTableWidget::resizeEvent(QResizeEvent * event)
{
      QTableView::resizeEvent(event);
      updateFrozenTableGeometry();
 }
//! [resize]


//! [navigate]
QModelIndex FreezeTableWidget::moveCursor(CursorAction cursorAction,
                                          Qt::KeyboardModifiers modifiers)
{
      QModelIndex current = QTableView::moveCursor(cursorAction, modifiers);

      if(cursorAction == MoveLeft && current.column()>0
         && visualRect(current).topLeft().x() < frozenTableView->columnWidth(0) ){

            const int newValue = horizontalScrollBar()->value() + visualRect(current).topLeft().x()
                                 - frozenTableView->columnWidth(0);
            horizontalScrollBar()->setValue(newValue);
      }
      return current;
}
//! [navigate]

void FreezeTableWidget::scrollTo (const QModelIndex & index, ScrollHint hint){
    if(index.column()>0)
        QTableView::scrollTo(index, hint);
}



//! [geometry]
void FreezeTableWidget::updateFrozenTableGeometry()
{
      frozenTableView->setGeometry( verticalHeader()->width()+frameWidth(),
                                    frameWidth(), columnWidth(0),
                                    viewport()->height()+horizontalHeader()->height());
}
//! [geometry]


