#ifndef MYMAINWINDOW3_H
#define MYMAINWINDOW3_H

#include <QMainWindow>

namespace Ui {
class MyMainWindow3;
}

class MyMainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow3(QWidget *parent = nullptr);
    ~MyMainWindow3();

signals:
    void back();

private:
    Ui::MyMainWindow3 *ui;
};

#endif // MYMAINWINDOW3_H
