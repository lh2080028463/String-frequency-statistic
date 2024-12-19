#ifndef MYMAINWINDOW2_H
#define MYMAINWINDOW2_H

#include <QMainWindow>

namespace Ui {
class MyMainWindow2;
}

class MyMainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow2(QWidget *parent = nullptr);
    ~MyMainWindow2();

signals:
    void back();

private:
    Ui::MyMainWindow2 *ui;
};

#endif // MYMAINWINDOW2_H
