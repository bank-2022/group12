#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QtWidgets/QApplication>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QFile styleSheetFile("./SyNet.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    app.setStyleSheet(styleSheet);
    MainWindow w;
    w.show();
    return app.exec();
}
