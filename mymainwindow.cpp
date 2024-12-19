#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include<QPushButton>

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);

    //返回窗口一
    connect(ui->quitButton,&QPushButton::clicked,[=](){
        emit this->back();
    });
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}
