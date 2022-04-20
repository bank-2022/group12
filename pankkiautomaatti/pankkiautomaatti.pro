QT       += core gui
QT       += serialport
QT       += widgets
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    browsetransactions.cpp \
    main.cpp \
    mainwindow.cpp \
    muusumma.cpp \
    nostarahaa.cpp \
    paavalikko.cpp \
    saldo.cpp

HEADERS += \
    browsetransactions.h \
    mainwindow.h \
    muusumma.h \
    nostarahaa.h \
    paavalikko.h \
    saldo.h

FORMS += \
    browsetransactions.ui \
    mainwindow.ui \
    muusumma.ui \
    nostarahaa.ui \
    paavalikko.ui \
    saldo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    GUI.qrc \
    img.qrc \
    resource.qrc


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/PinCodeDLL/DLLPinCode/build/release/ -lDLLPinCode
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/PinCodeDLL/DLLPinCode/build/debug/ -lDLLPinCode
else:unix: LIBS += -L$$PWD/PinCodeDLL/DLLPinCode/build/ -lDLLPinCode

INCLUDEPATH += $$PWD/PinCodeDLL
DEPENDPATH += $$PWD/PinCodeDLL

win32: LIBS += -L$$PWD/DLLRestAPI/build/debug/ -lDLLRestAPI

INCLUDEPATH += $$PWD/DLLRestAPI
DEPENDPATH += $$PWD/DLLRestAPI
