#ifndef USEFUL_DEFINITIONS_H
#define USEFUL_DEFINITIONS_H

/***************************************************************************
all useful definitions for this program
 ***************************************************************************/

//standard font size
#define STANDARD_FONT_SIZE 16

#define RX_MAX_COLUMNS 50
#define TX_MAX_COLUMNS 50

//style for the dial if panel and associated objects.
//#define DIAL_IF_BUTTON_STYLE "background-color : black;font:bold;color:white;border: 5px solid #FF0000;border-radius:6px;"
#define DIAL_IF_STYLE "Value{color:white;} QLabel{font:bold;color:white;} QWidget{background-color : black;} "

//caution! in this #define, %1 is an argument of font size handled
//thru qstring function. it can not be used as it.
#define DIAL_IF_BUTTON_STYLE "QPushButton{ background-color : black;font-size:%1px;font:bold;color:white;border: 5px solid green;border-radius: 5px;}"

//frequencies
//psk frequency on 20m band
#define PSK_FREQUENCY 14070000
//intermediate frequency of the filter in my kit
#define MY_INTERMEDIATE_FREQUENCY -9000000
#define MY_FREQUENCY_MAX 99999999
#define MY_FREQUENCY_MIN 0

//style for linpsk
#define LINPSK_STYLE "QPushButton{ border: 5px solid red;border-radius: 5px; } QRadioButton{ border: 5px solid red;border-radius: 5px; }"

//pinout for dds 9850
#define LINPSK_W_CLK 18
#define LINPSK_FQ_UD 23
#define LINPSK_DATA 24
#define LINPSK_RESET 25

#endif // USEFUL_DEFINITIONS_H
