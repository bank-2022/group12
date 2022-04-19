#ifndef DLLSERIALPORT_GLOBAL_H
#define DLLSERIALPORT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLLSERIALPORT_LIBRARY)   // Määritellään DLL projektifilessä
#  define DLLSERIALPORT_EXPORT Q_DECL_EXPORT
#else
#  define DLLSERIALPORT_EXPORT Q_DECL_IMPORT   // Tämä voimassa EXE:ssä
#endif

#endif // DLLSERIALPORT_GLOBAL_H
