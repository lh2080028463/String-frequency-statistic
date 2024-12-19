#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include"mymainwindow2.h"

namespace Ui {
class MyMainWindow;
}

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow(QWidget *parent = nullptr);
    ~MyMainWindow();

    MyMainWindow2*ppage2=NULL;//页面三实例化对象地址

signals:
    void back();

private:
    Ui::MyMainWindow *ui;
};

#endif // MYMAINWINDOW_H
