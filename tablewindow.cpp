#include "tablewindow.h"
#include "ui_tablewindow.h"

tableWindow::tableWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tableWindow)
{
    ui->setupUi(this);

    connect(ui->quitButton,&QPushButton::clicked,[=](){
        emit this->back();
    });

    connect(ui->enterButton,&QPushButton::clicked,[=](){
        extern QMap<QString,int>m;
        QMultiMap<int,QString>m1;
        int flag1=ui->combobox->currentIndex();//0升序，1降序

        for(auto it=m.constBegin();it!=m.constEnd();it++){
            m1.insert(it.value(),it.key());
        }
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tableWidget->setRowCount(m.size());
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);
        ui->tableWidget->setColumnWidth(0,80);


        if(!flag1){
            auto it=m1.constBegin();
            for(int i=0;i<m.size();i++,it++){
                QTableWidgetItem*temp1=new QTableWidgetItem(it.value());
                QTableWidgetItem*temp2=new QTableWidgetItem(QString::number(it.key()));
                ui->tableWidget->setItem(i,0,temp1);
                ui->tableWidget->setItem(i,1,temp2);
            }
        }

        else{
            auto it=m1.constBegin();
            for(int i=m.size()-1;i>=0;i--,it++){
                QTableWidgetItem*temp1=new QTableWidgetItem(it.value());
                QTableWidgetItem*temp2=new QTableWidgetItem(QString::number(it.key()));
                ui->tableWidget->setItem(i,0,temp1);
                ui->tableWidget->setItem(i,1,temp2);
            }
        }
        ////////


    });
}

tableWindow::~tableWindow()
{
    delete ui;
}
