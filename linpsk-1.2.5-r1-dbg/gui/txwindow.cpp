/***************************************************************************
 *   Copyright (C) 2012 by Volker Schroer, DL1KSV                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "txwindow.h"
#include "ui_txwindow.h"
#include <QLineEdit>
#include <QKeyEvent>
#include "parameter.h"
#include "ctxbuffer.h"
#include <QFontMetrics>
#include <QDebug>
#include "QKeyPushButton.h"
#include "widgetKeyBoard.h"
#include "galvawindow.h"
#include "useful_definitions.h"

#include <QDesktopWidget>

extern Parameter settings;

TxWindow::TxWindow(QWidget *parent) :
  QFrame(parent),
  ui(new Ui::TxWindow)
{
    //obtain the actual font and set its size
    QFont this_font = this->font();
    this_font.setPointSize(STANDARD_FONT_SIZE);
    this_font.setBold(true);
  //QFontMetrics fm ( font() );
  QFontMetrics fm ( this_font );
  //int pixelwidth=82*fm.width("A");

  //int pixelwidth=60*fm.width("A");
  //int pixelwidth=this->ui->txArea->frameWidth();
  //int height=fm.height();
  int pixelwidth=TX_MAX_COLUMNS*this_font.pointSize();
  int height=this_font.pointSize();
  //ui->txLines->setFont(this_font);


  ui->setupUi(this);
  zeile=0;
  spalte=0;
  for ( int i = 0;i < TXWINDOWBUFFER;i++ )
  {
    scrollBuffer[i] = new QLineEdit ( ui->txLines );
    scrollBuffer[i]->setFrame ( false );
    scrollBuffer[i]->setFocusProxy(this);
    scrollBuffer[i]->setFont(this_font);
    scrollBuffer[i]->setMaximumHeight(2*height);
    scrollBuffer[i]->setFixedWidth(pixelwidth);
    ui->linesLayout->addWidget(scrollBuffer[i]);
  }
  ui->txArea->ensureWidgetVisible(scrollBuffer[zeile]);
  //size management
  //dimensions proportionnal to screen dimensions
  //important: include <QDesktopWidget>
  //or there is a -invalid-use-of-incomplete-type-class-qlabel issue
  /*QRect rec = QApplication::desktop()->screenGeometry();
  int scr_height = rec.height();
  int scr_width = rec.width();*/
  int button_height=this->height();
  button_height=button_height/5;
  this->ui->clearWindow->setFixedHeight(button_height);
  this->ui->clearWindow->setFont(this_font);
  this->ui->KeyboardButton->setFixedHeight(button_height);
  this->ui->KeyboardButton->setFont(this_font);
  //this->ui->tosbutton->setFixedHeight(button_height);
  //this->ui->tosbutton->setFont(this_font);
  //keyboard
  this->myKeyboard = new widgetKeyBoard(false,this);
  //this->myKeyboard = new widgetKeyBoard(this);
  this->myKeyboard->setZoomFacility(true);
  this->myKeyboard->enableSwitchingEcho(true); // enable possibility to change echo through keyboard
  this->myKeyboard->createKeyboard(); // only create keyboard
  //keyboard clicked event
  QObject::connect(this->ui->KeyboardButton, SIGNAL(clicked()),this, SLOT(show_keyboard()));
 // QObject::connect(this->ui->tosbutton, SIGNAL(clicked()),this, SLOT(show_tos()));



}

TxWindow::~TxWindow()
{
  this->myKeyboard->close();
  delete ui;
}
void TxWindow::insert ( unsigned char c )
{
  QString s = scrollBuffer[zeile]->text() + QString ( QChar ( c ) );
  scrollBuffer[zeile]->setText ( s );
  spalte++;
  if(c == '\n')
    {
 //     Buffer->insert(c);
      gotoNextLine();
    }
  //else if (spalte >= 80)
  else if (spalte >= TX_MAX_COLUMNS)
    {
     /* if(settings.autoCrLf)
        Buffer->insert('\r');
      Buffer->insert ( '\n' );*/
      gotoNextLine();
    }
}

void TxWindow::insertString (QString string )
{
  for(int i=0;i < string.length();i++)
    insert(string.at(i).toLatin1());
}
void TxWindow::setTxBuffer ( CTxBuffer *p )
{
  Buffer = p;
}
void TxWindow::gotoNextLine()
{
  int i;
  zeile++;
  spalte=0;
  if( zeile >= TXWINDOWBUFFER) //Scroll two lines
    {
      for(i=2; i< TXWINDOWBUFFER;i++)
        scrollBuffer[i-2]->setText(scrollBuffer[i]->text());
      zeile = TXWINDOWBUFFER-2;
      for(i=zeile; i < TXWINDOWBUFFER;i++)
        scrollBuffer[i]->clear();
    }
  scrollBuffer[zeile]->setCursorPosition(spalte);
  ui->txArea->ensureWidgetVisible(scrollBuffer[zeile]);
}
void TxWindow::clearBuffers()
{
  for ( int i = 0;i < TXWINDOWBUFFER;i++ )
    scrollBuffer[i]->clear();
  Buffer->clear();
  zeile=0;
  spalte=0;
  scrollBuffer[zeile]->setCursorPosition(spalte);
  ui->txArea->ensureWidgetVisible(scrollBuffer[zeile]);
}

void TxWindow::keyPressEvent ( QKeyEvent *e )
{
  unsigned char c;

  bool CapsLock = false; // Fixme checking CapsLock state
  if ( Buffer->Filled() )
  {
    QApplication::beep();
    e->ignore();

    return;
  }
  /**
  if ( e->state() & ControlButton )
   {
    if ( e->key() == Key_V )
     pasteText( QApplication::clipboard()->text( QClipboard::Clipboard ) );
   }
  else
  **/
  switch ( e->key() )
  {
    case Qt::Key_Enter:
    case Qt::Key_Return:
      gotoNextLine();
      if(settings.autoCrLf)
        Buffer->insert('\r');
      Buffer->insert ( '\n' );
      e->accept();
      break;
  case Qt::Key_Home:
    Buffer->insert('\r');
    e->accept();
    break;
    case Qt::Key_CapsLock:
      CapsLock = !CapsLock;
      e->accept();
      break;

    case Qt::Key_Backspace:
      c = '\b';
      Buffer->insert ( c );
      backspace();
      e->accept();
      break;

    default:
//    ButtonState cc=e->state();
//    if ( (cc == ShiftButton) )
      if ( ( e->modifiers() == Qt::ShiftModifier ) || CapsLock )
      {
        if ( !e->text().isEmpty() )
          c = e->text().toUpper().at ( 0 ).toLatin1();
        else
          c = 0;
      }
      else
      {
        if ( !e->text().isEmpty() )
          c = e->text().toLower().at ( 0 ).toLatin1();
        else
          c = 0;
      }
      if ( c != 0 )
      {
        Buffer->insert ( c );
        insert ( c );
        e->accept();
      }
  } // End Case

} // keyPressEvent
void TxWindow::backspace()
{
  if(spalte > 0)
  {
    spalte--;
    scrollBuffer[zeile]->backspace();
  }
  else if (zeile > 0)
  {
    zeile--;
    spalte=(scrollBuffer[zeile]->text()).length();
    ui->txArea->ensureWidgetVisible(scrollBuffer[zeile]);
  }
}
void TxWindow::focusInEvent(QFocusEvent *e)
{
  setStyleSheet("TxWindow{border: 5px solid green;}");

  QFrame::focusInEvent(e);



  //this->myKeyboard->focusThis(ui->txLines); // modifies focus for keyboard

}

void TxWindow::focusOutEvent(QFocusEvent *e)
{

  setStyleSheet("TxWindow{border: 5px solid red;}");
  //  this->myKeyboard->close();
  QFrame::focusOutEvent(e);

}
//slot, show the keyboard on event
void TxWindow::show_keyboard(void)
{
    //qDebug() << "open keyboard\n";
    if (!this->myKeyboard->isVisible())
    {
    this->myKeyboard->show(this);
    this->myKeyboard->setFocus();
    }
}
/*
//slot, show the tos meter on event
void TxWindow::show_tos(void)
{
    //object created when asked
    this->my_tos_meter = new galvawindow;
    this->my_tos_meter->show();
}
*/
