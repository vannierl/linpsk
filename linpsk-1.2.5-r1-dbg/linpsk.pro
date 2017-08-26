#project alaine: all which concern
#frequency selection and gpio output for dds
#in directory ~/CLERVIE_development/travaux_qt/alaine
#files: dds9850.cpp dial_if_menu.cpp
#global.cpp gpio_select.cpp

CONFIG += warn_on debug_and_release \
          qt \
         thread

QT += network widgets

TEMPLATE = app
TARGET = linpsk
target.path=/usr/local/bin
desktop.path=/usr/share/applications
desktop.files=data/linpsk.desktop
images.path=/usr/share/pixmaps
images.files=images/linpsk.png

INSTALLS +=desktop
INSTALLS +=images
INSTALLS +=target
#path for differents external files of the project
INCLUDEPATH += . src gui ../../CLERVIE_development/travaux_qt/alaine \
                         ../../CLERVIE_development/travaux_qt/MyVirtualKeyboard/virtualKeyboard/keyboard \
                         ../../CLERVIE_development/travaux_qt/gisla1

LIBS += -lasound -lfftw3
#libraries for gpio of raspberry pi
#(both wiring pi and pigpio)
QMAKE_LIBS += -lpigpio -l wiringPi

# Input
HEADERS += gui/activatemacros.h \
           gui/addmacro.h \
           gui/addrxwindow.h \
           gui/controlpanel.h \
           gui/crxdisplay.h \
           gui/ctxdisplay.h \
           gui/deletemacro.h \
           gui/editmacro.h \
           gui/generalsettings.h \
           gui/linpsk.h \
           gui/macrocontrol.h \
           gui/modemenu.h \
           gui/qsodata.h \
           gui/renamemacro.h \
           gui/spectrumdisplay.h \
           gui/txwindow.h \
           src/bpskdemodulator.h \
           src/bpskmodulator.h \
           src/cdemodulator.h \
           src/cledbutton.h \
           src/cmodulator.h \
           src/color.h \
           src/constants.h \
           src/cpskdemodulator.h \
           src/crxchannel.h \
           src/crxwindow.h \
           src/csound.h \
           src/csquelch.h \
           src/ctxbuffer.h \
           src/deinterleaver.h \
           src/feccoder.h \
           src/fircoeffs.h \
           src/firfilter.h \
           src/frequencyselect.h \
           src/fskmodulator.h \
           src/input.h \
           src/interleaver.h \
           src/mfskdemodulator.h \
           src/mfskmodulator.h \
           src/mfskvaricode.h \
           src/parameter.h \
           src/processlogdata.h \
           src/pskmodulator.h \
           src/psktable.h \
           src/qpskdemodulator.h \
           src/qpskmodulator.h \
           src/readonlystringlistmodel.h \
           src/rttydemodulator.h \
           src/rttymodulator.h \
           src/spectrumwindow.h \
           src/tabwidget.h \
           src/textinput.h \
           src/viterbi.h \
           src/waterfallwindow.h \
           src/waveinput.h \
    ../../CLERVIE_development/travaux_qt/alaine/dds_9850.h \
    ../../CLERVIE_development/travaux_qt/alaine/dial_if_menu.h \
    ../../CLERVIE_development/travaux_qt/alaine/gpio_select.h \
    ../../CLERVIE_development/travaux_qt/MyVirtualKeyboard/virtualKeyboard/keyboard/QKeyPushButton.h \
    ../../CLERVIE_development/travaux_qt/MyVirtualKeyboard/virtualKeyboard/keyboard/widgetKeyBoard.h \
    ../../CLERVIE_development/travaux_qt/gisla1/adc_ltc1864.h \
    ../../CLERVIE_development/travaux_qt/gisla1/galvanometer.h \
    ../../CLERVIE_development/travaux_qt/gisla1/galvawindow.h \
    ../../CLERVIE_development/travaux_qt/alaine/global_9850.h \
    ../../CLERVIE_development/travaux_qt/gisla1/global_ltc1864.h \
    src/useful_definitions.h
FORMS += gui/activatemacros.ui \
         gui/addmacro.ui \
         gui/addrxwindow.ui \
         gui/controlpanel.ui \
         gui/crxdisplay.ui \
         gui/ctxdisplay.ui \
         gui/deletemacro.ui \
         gui/editmacro.ui \
         gui/generalsettings.ui \
         gui/linpsk.ui \
         gui/macrocontrol.ui \
         gui/modemenu.ui \
         gui/qsodata.ui \
         gui/renamemacro.ui \
         gui/spectrumdisplay.ui \
         gui/txwindow.ui \
    ../../CLERVIE_development/travaux_qt/alaine/dial_if_menu.ui \
    ../../CLERVIE_development/travaux_qt/alaine/gpio_select.ui
SOURCES += gui/activatemacros.cpp \
           gui/addmacro.cpp \
           gui/addrxwindow.cpp \
           gui/controlpanel.cpp \
           gui/crxdisplay.cpp \
           gui/ctxdisplay.cpp \
           gui/deletemacro.cpp \
           gui/editmacro.cpp \
           gui/generalsettings.cpp \
           gui/linpsk.cpp \
           gui/macrocontrol.cpp \
           gui/modemenu.cpp \
           gui/qsodata.cpp \
           gui/renamemacro.cpp \
           gui/spectrumdisplay.cpp \
           gui/txwindow.cpp \
           src/bpskdemodulator.cpp \
           src/bpskmodulator.cpp \
           src/cdemodulator.cpp \
           src/cledbutton.cpp \
           src/cmodulator.cpp \
           src/cpskdemodulator.cpp \
           src/crxchannel.cpp \
           src/crxwindow.cpp \
           src/csound.cpp \
           src/csquelch.cpp \
           src/ctxbuffer.cpp \
           src/deinterleaver.cpp \
           src/feccoder.cpp \
           src/firfilter.cpp \
           src/frequencyselect.cpp \
           src/fskmodulator.cpp \
           src/input.cpp \
           src/interleaver.cpp \
           src/main.cpp \
           src/mfskdemodulator.cpp \
           src/mfskmodulator.cpp \
           src/mfskvaricode.cpp \
           src/parameter.cpp \
           src/processlogdata.cpp \
           src/pskmodulator.cpp \
           src/qpskdemodulator.cpp \
           src/qpskmodulator.cpp \
           src/readonlystringlistmodel.cpp \
           src/rttydemodulator.cpp \
           src/rttymodulator.cpp \
           src/spectrumwindow.cpp \
           src/tabwidget.cpp \
           src/textinput.cpp \
           src/viterbi.cpp \
           src/waterfallwindow.cpp \
           src/waveinput.cpp \
    ../../CLERVIE_development/travaux_qt/alaine/dds_9850.cpp \
    ../../CLERVIE_development/travaux_qt/alaine/dial_if_menu.cpp \
    ../../CLERVIE_development/travaux_qt/alaine/gpio_select.cpp \
    ../../CLERVIE_development/travaux_qt/MyVirtualKeyboard/virtualKeyboard/keyboard/QKeyPushButton.cpp \
    ../../CLERVIE_development/travaux_qt/MyVirtualKeyboard/virtualKeyboard/keyboard/widgetKeyBoard.cpp \
    ../../CLERVIE_development/travaux_qt/gisla1/adc_ltc1864.cpp \
    ../../CLERVIE_development/travaux_qt/gisla1/galvanometer.cpp \
    ../../CLERVIE_development/travaux_qt/gisla1/galvawindow.cpp \
    ../../CLERVIE_development/travaux_qt/alaine/global_9850.cpp \
    ../../CLERVIE_development/travaux_qt/gisla1/global_ltc1864.cpp
RESOURCES += src/application.qrc
