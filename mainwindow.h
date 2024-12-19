#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mymainwindow.h"//页面二头文件

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    MyMainWindow*ppage2=NULL;//页面二实例化对象地址

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
