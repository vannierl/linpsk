/***************************************************************************
                          |FILENAME|  -  description
                             -------------------
    begin                : |DATE|
    copyright            : (C) |YEAR| by |AUTHOR|
    email                : |EMAIL|
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#include <QTimer>
#include <QMessageBox>
#include <QRadioButton>
#include <QLineEdit>
#include "crxdisplay.h"
#include "ui_crxdisplay.h"
#include "crxchannel.h"
#include "crxwindow.h"
#include "csquelch.h"
#include "frequencyselect.h"
#include "input.h"
#include "textinput.h"
#include "waveinput.h"
#include "csound.h"
#include "fircoeffs.h"
#include "parameter.h"
#include "useful_definitions.h"
#include "global_9850.h"
#include "dds_9850.h"
#include "galvawindow.h"



//#include "/home/pi/CLERVIE_development/travaux_qt/alaine/dial_if_menu.h"
#include "dial_if_menu.h"

extern Parameter settings;
/*
 *  Constructs a CRxDisplay which is a child of 'parent', with the
 *  name 'name'.'
 */


/*
CRxDisplay::CRxDisplay ( QWidget* parent )
  : QFrame ( parent ), Ui::CRxDisplay()*/
CRxDisplay::CRxDisplay ( QWidget* parent )
  : QFrame ( parent ), ui(new Ui::CRxDisplay)
{
  ui->setupUi(this);
    //setupUi(this);

  //     int w_clk 18;
  //     int fq_ud 23;
  //     int data 24;
  //     int reset 25;
   set_global_w_clk(LINPSK_W_CLK);
   set_global_fq_ud(LINPSK_FQ_UD);
   set_global_data(LINPSK_DATA);
   set_global_reset(LINPSK_RESET);


    //size management
  QFont this_font = this->font();
  this_font.setPointSize(STANDARD_FONT_SIZE);
  this_font.setBold(true);

  int button_height=this->height();
  button_height=button_height/5;
  this->ui->B_frequency->setFixedHeight(button_height*15/10);
  this->ui->B_if_tune->setFixedHeight(button_height);
  this->ui->B_tos_meter->setFixedHeight(button_height);
  this->ui->Clear->setFixedHeight(button_height);


  Sound = 0;

  dec2fir = new double[DEC2_LPFIR_LENGTH];

  RxChannel = new CRxChannel ( 0, this );
  //RxChannel->setFont(this_font);

  ui->RxHeader->insertTab ( 0, RxChannel->getWindow(),QString("Rx 1") );
  ui->RxFreq->setFunctionText("Narrow");


  settings.ChannelChain = RxChannel;
  settings.ActChannel = RxChannel;

  languageChange();
// Connect Signals and Slots
  connect ( RxChannel->RxWindow, SIGNAL ( setQsoData(QsoData,QString)),this, SIGNAL (setQsoData(QsoData,QString)));
  connect ( RxChannel, SIGNAL ( Triggered ( int ) ), ui->RxHeader, SLOT ( setCurrentIndex ( int ) ) );
//buttons for frequnecy, if frequency, dds gpio hb9eid
  connect ( this->ui->B_frequency, SIGNAL ( clicked() ), this, SLOT ( select_frequency() ) );
  connect ( this->ui->B_if_tune, SIGNAL ( clicked() ), this, SLOT ( select_if_tune() ) );
  connect(this->ui->B_tos_meter, SIGNAL(clicked()),this, SLOT(show_tos()));
  trigger(); // We should ensure that the triggertext is stored;
  ui->Squelch->setSquelchState ( RxChannel->getSquelchState() );

// Creating Variables for the fft
  plan = fftw_plan_r2r_1d ( BUF_SIZE / 2, outbuf, output, FFTW_R2HC , FFTW_PATIENT );

//frequency selection object. this menu is show only
  //via action on B_frequency button, see select_frequency slot.
  this->frequency_menu = new dial_if_menu;
  frequency_menu->frequency=PSK_FREQUENCY;
  frequency_menu->set_frequency(PSK_FREQUENCY);
  frequency_menu->set_title("Frequency selection Hz");
  frequency_menu->hide_Bsign(true);
  frequency_menu->frequency_max=MY_FREQUENCY_MAX;
  frequency_menu->frequency_min=MY_FREQUENCY_MIN;
  frequency_menu->hide_Bok(false);
  connect ( this->frequency_menu, SIGNAL ( fqcy_changed(int) ), this, SLOT ( update_frequency(int) ) );

  this->if_tune_menu = new dial_if_menu;
  if_tune_menu->frequency=MY_INTERMEDIATE_FREQUENCY;
  if_tune_menu->set_frequency(MY_INTERMEDIATE_FREQUENCY);
  if_tune_menu->set_title("IF selection Hz");
  if_tune_menu->hide_Bsign(false);
  if_tune_menu->frequency_max=MY_FREQUENCY_MAX;
  if_tune_menu->frequency_min=-MY_FREQUENCY_MAX;
  if_tune_menu->hide_Bok(false);
  connect ( this->if_tune_menu, SIGNAL ( fqcy_changed(int) ), this, SLOT ( update_if_tune(int) ) );

  //initialisation. problem may appear due to the double init caused by init of gpio in main.
  //init_gpio_dds();
  init_dds();
  start_dds(frequency_menu->frequency+if_tune_menu->frequency);

}

/*
 *  Destroys the object and frees any allocated resources
 */
CRxDisplay::~CRxDisplay()
{
    stop_dds();
  // no need to delete child widgets, Qt does it all for us
    delete ui;

}

//set frequency with dedicated object
//hb9eid
void CRxDisplay::select_frequency()
{
    //show main frequency selection widget
    this->frequency_menu->show();
}
void CRxDisplay::update_frequency(int fqcy)
{
    this->ui->B_frequency->setText(QString::number(fqcy));
    stop_dds();
    start_dds(frequency_menu->frequency+if_tune_menu->frequency);
    char outline[100];
    sprintf(outline,"update frequency: %d",frequency_menu->frequency+if_tune_menu->frequency);
    qDebug() << outline;
}

//set frequency with dedicated object
//hb9eid
void CRxDisplay::select_if_tune()
{
    //show intermediate frequency selection widget
    this->if_tune_menu->show();
}
//slot: update when if frequency was changed
void CRxDisplay::update_if_tune(int fqcy)
{
    stop_dds();
    start_dds(frequency_menu->frequency+if_tune_menu->frequency);
    char outline[100];
    sprintf(outline,"update frequency: %d",frequency_menu->frequency+if_tune_menu->frequency);
    qDebug() << outline;

}
/*
void CRxDisplay::init_dds_gpio()
{
    //*************************************************************************************************
    //gpio settings
     set_global_w_clk(LINPSK_W_CLK);
     set_global_fq_ud(LINPSK_FQ_UD);
     set_global_data(LINPSK_DATA);
     set_global_reset(LINPSK_RESET);

}*/

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void CRxDisplay::languageChange()
{
//    setCaption( tr( "RxDisplay" ) );
}

bool CRxDisplay::start_process_loop()
{
  QString errorstring;
  if ( Sound == 0 )
  {
    if ( settings.DemoMode )
    {
      if ( settings.DemoTypeNumber == 0 )
        Sound = new WaveInput ( -1 );
      else
        Sound = new TextInput ( -1 );
    }
    else
      Sound = new CSound ( settings.serial );
    if ( Sound <= NULL )
      return false;

    connect ( Sound, SIGNAL ( samplesAvailable() ), this, SLOT ( process_rxdata() ) );
  }
  m_pDec2InPtr = dec2fir;

  for ( int i = 0; i < DEC2_LPFIR_LENGTH;i++ )
    dec2fir[i] = 0.0; // fill delay buffer with zero

  if ( ! Sound->open_Device_read ( &errorstring ) )  //Something went wrong in Opening Input File
  {
    if ( settings.DemoMode )
      QMessageBox::information ( 0, "LinPsk", errorstring );
    else
      QMessageBox::critical ( 0, "LinPsk", errorstring );
    if ( Sound != 0 )
      delete Sound;
    Sound = 0;
    return false;
  }
  Sound->start();
  return true;
}

void CRxDisplay::ProcDec2Fir ( double *pIn, double *pOut, int BlockSize )
{
  /**
  Decimate by 2 FIR filter on 'BlockSize' samples.
  pIn == pointer to input array of double's (can be same buffer as pOut )
  pOut == pointer to output array of double's
  Blocksize == number of samples to process
  This Procdeure is taken from WinPSK by Moe Wheatley
  **/
  int i, j;
  double acc;
  const double* Kptr;
  double* Firptr;
  double* Qptr;
  double* Inptr;
  Inptr = m_pDec2InPtr; //use automatic copies of member variables
  Qptr =  dec2fir;   // for better speed.
  j = 0;
  for ( i = 0; i < BlockSize; i++ ) // put new samples into Queue
  {
    if ( --Inptr < Qptr ) //deal with wraparound
      Inptr = Qptr + DEC2_LPFIR_LENGTH - 1;
    *Inptr = pIn[i];
    if ( i&1 ) //calculate MAC's every other time for decimation by 2
    {
      acc = 0.0;
      Firptr = Inptr;
      Kptr = Dec2LPCoef;
      while ( Kptr < ( Dec2LPCoef + DEC2_LPFIR_LENGTH ) ) //do the MAC's
      {
        acc += ( ( *Firptr++ ) * ( *Kptr++ ) );
        if ( Firptr >= Qptr + DEC2_LPFIR_LENGTH ) //deal with wraparound
          Firptr = Qptr;
      }
      pOut[j++] = acc;  //save output sample
    }
  }
  m_pDec2InPtr = Inptr;  // save position in circular delay line
}

void CRxDisplay::process_rxdata()

{
  bool overload;
  Mode modtype;
  if ( Sound->getSamples ( inbuf, BUF_SIZE ) == 0 )
    return; // No sample available, try later
  overload = false;
  ProcDec2Fir ( inbuf, outbuf , BUF_SIZE ); // 2uS per sample


  ui->RxFreq->setFrequency ( settings.ActChannel->getRxFrequency() );
  ui->Squelch->setSquelchLevel ( settings.ActChannel->getSquelchValue() );
  settings.ActChannel->setThreshold ( ui->Squelch->getThreshold() );
  settings.ActChannel->setSquelch ( ui->Squelch->getSquelchState() );
  settings.ActChannel->setAfcMode ( ui->RxFreq->getAfcMode() );

  for ( CRxChannel * p = RxChannel;p != 0;p = p->getNextChannel() )
  {
    modtype=p->getModulationType();
    if ( ( modtype != RTTY ) && ( modtype != MFSK16 ) /* RIP && (modtype != RTTY2) */ )
    {

      p->processInput ( outbuf, output );
    }
    else
      p->processInput ( inbuf, output );
  }
  /** Update RxFreq for the active Channel **/
  emit new_IMD ( settings.ActChannel->getIMD() );


// Calculate FFT and start Ploting

// First  look for overload
  int N = BUF_SIZE / 2;
  for ( int i = 0; i < N;i++ )
  {
    if ( inbuf[i] > 0.9 )
        overload = true;
// Apply Hamming to Data
    outbuf[i] *= ( 0.54 - 0.46 * cos ( ( i * PI2 ) / N ) );
  }
  fftw_execute ( plan );

//Calculate power spectrum
  for ( int i = 1;i < BUF_SIZE / 4;i++ )
    output[i] = output[i] * output[i] + output[BUF_SIZE/2-i] * output[BUF_SIZE/2-i];

  emit startPlotting ( output, overload );


}

void CRxDisplay::addRxWindow ( int Frequency, Mode Modulation, QString Heading )
{
  CRxChannel *p;
  int ID = ui->RxHeader->count();
  p = new CRxChannel ( ID, this, Modulation, Frequency );
  ui->RxHeader->insertTab ( ID, p->getWindow(),Heading );
  connect ( p, SIGNAL ( Triggered ( int ) ), this, SLOT ( changeActiveRxWindow ( int ) ) );
  connect ( p->RxWindow, SIGNAL ( setQsoData(QsoData,QString) ), this, SIGNAL ( setQsoData(QsoData,QString) ) );

  RxChannel->insertChannel ( p );
  ui->RxHeader->setCurrentIndex ( ID );
  trigger(); // We should ensure that the triggertext is stored;
  ui->RxHeader->setTabTextColor ( ID, Farbe->at ( ID ) );
  //RxHeader->setTabTextColor ( ID, QColor("black") );
}

void CRxDisplay::setRxFrequency ( double freq )
{
  settings.ActChannel->setRxFrequency ( freq );
}

void CRxDisplay::changeActiveRxWindow ( int ID )
{
setFocus();
CRxChannel *p;
  p=settings.ActChannel;
  if ( p != 0 )
  {
    p->hide();
    p->setQsoData ( settings.QslData ); // Save actual Data to  Channel
    p->setAfcMode ( ui->RxFreq->getAfcMode() );
    if ( p->getChannel ( ID ) != 0 )
      settings.ActChannel = p->getChannel ( ID );
    p=settings.ActChannel;
    settings.QslData = p->getQsoData();
    ui->RxFreq->setAfcDisplayMode ( p->AfcProperties() );
    ui->RxFreq->setAfcMode ( p->getAfcMode() );
    ui->RxFreq->setFrequency ( ( unsigned int ) p->getRxFrequency() );
    ui->Squelch->setSquelchState ( p->getSquelchState() );
    ui->Squelch->setThreshold ( p->getThreshold() );
    ui->TriggerText->setText ( p->RxWindow->getTriggerText() );
    ui->triggerActivate->setChecked(p->RxWindow->getTriggerStatus());
    ui->recordActivate->setChecked ( p->RxWindow->getRecordingState() );
    p->show();
    emit newActiveChannel();
    ui->RxHeader->setCurrentIndex ( ID );
  }
}


void CRxDisplay::stop_process_loop()
{
  if ( Sound != 0 )
  {
//    disconnect(Sound,0,0,0);
    Sound->stop();
    Sound->wait();
    Sound->close_Device();
//    delete Sound;
  }
//  Sound = 0 ;
}
void CRxDisplay::trigger()
{
  settings.ActChannel->RxWindow->activateTrigger ( ui->TriggerText->text() );
  if ( !ui->triggerActivate->isChecked() )
    settings.ActChannel->RxWindow->deactivateTrigger();
}

void CRxDisplay::setColorList ( QList<QColor> *c )
{
  Farbe = c;

}

void CRxDisplay::clearRxWindow()
{
  settings.ActChannel->clearRxWindow();
}
void CRxDisplay::newColor()
{
  int anzahl = Farbe->size();
  if ( ui->RxHeader->count() < anzahl )
    anzahl = ui->RxHeader->count();
  for ( int i = 0; i < anzahl; i++ )
    ui->RxHeader->setTabTextColor ( i, Farbe->at ( i ) );
}
void CRxDisplay::setAfc(AfcMode mode)
{
 ui->RxFreq->setAfcMode ( mode );
}
void CRxDisplay::setAfcProperties(AfcMode mode)
{
  ui->RxFreq->setAfcDisplayMode ( mode );
}

AfcMode CRxDisplay::getAfcMode()
{
  return ui->RxFreq->getAfcMode();
}
void CRxDisplay::record(bool b)
{
  settings.ActChannel->record(b);
}
void CRxDisplay::stopRecording()
{
  //Stop recording for each channel if activated and close file.
  for ( CRxChannel * p = RxChannel;p != 0;p = p->getNextChannel() )
    p->record(false);
}
//slot, show the tos meter on event
void CRxDisplay::show_tos(void)
{
    //object created when asked
    this->my_tos_meter = new galvawindow;
    this->my_tos_meter->show();
}
