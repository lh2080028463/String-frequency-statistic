#include "mymainwindow2.h"
#include "ui_mymainwindow2.h"
#include<QPushButton>
#include"interface.h"

MyMainWindow2::MyMainWindow2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow2)
{
    ui->setupUi(this);

    connect(ui->quitButton,&QPushButton::clicked,[=](){
        emit this->back();
    });
}

MyMainWindow2::~MyMainWindow2()
{
    delete ui;
}
