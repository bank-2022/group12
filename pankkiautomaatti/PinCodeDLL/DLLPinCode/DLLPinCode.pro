QT -= gui

TEMPLATE = lib
DEFINES += DLLPINCODE_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dllpincode.cpp \
    pinengineclass.cpp

HEADERS += \
    DLLPinCode_global.h \
    dllpincode.h \
    pinengineclass.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

QT += widgets

DISTFILES +=

FORMS += \
    pinengineclass.ui

RESOURCES += \
    DLLimg.qrc
