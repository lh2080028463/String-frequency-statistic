#include "mainwindow.h"

#include <QApplication>
#include"interface.h"
#include<QMap>

QMap<QString,int>m;
QString s;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;//主窗口

    w.show();
    return a.exec();
}
