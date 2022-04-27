QT -= gui
QT += serialport

TARGET = DLLSerialPort
TEMPLATE = lib
DEFINES += DLLSERIALPORT_LIBRARY
INSTALLS += target
CONFIG += C++11

DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += qtc_runnable

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dllserialport.cpp \
    engineclass.cpp

HEADERS += \
    DLLSerialPort_global.h \
    dllserialport.h \
    engineclass.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
    INSTALLS += target
}
