#include "mymainwindow3.h"
#include "ui_mymainwindow3.h"

#include<QTableWidget>

MyMainWindow3::MyMainWindow3(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow3)
{
    ui->setupUi(this);

    connect(ui->quitButton,&QPushButton::clicked,[=](){
        emit this->back();
    });

    // extern QMap<QString,int>m;
    // QMultiMap<int,QString>m1;

    // m1.clear();
    // for(auto it=m.constBegin();it!=m.constEnd();it++){
    //     QString temps=it.key();
    //     int tempi=it.value();
    //     m1.insert(tempi,temps);
    // }
    // ui->table->setRowCount(m.size());
    // ui->table->setColumnCount(3);
    // ui->table->setHorizontalHeaderLabels({"序号","字符串","频率"});
    // QStringList l;
    // for(int i=1;i<=m.size();i++){
    //     l<<QString::number(i);
    // }
    // ui->table->setVerticalHeaderLabels(l);
    // auto it=m1.constBegin();
    // for(int i=0;i<m.size();i++,it++){
    //     QTableWidgetItem *temp1=new QTableWidgetItem(it.value());
    //     ui->table->setItem(i,0, temp1);
    //     QTableWidgetItem *temp2=new QTableWidgetItem(QString::number(it.key()));
    //     ui->table->setItem(i,1, temp2);
    //     delete temp1;
    //     delete temp2;
    // }
    // //ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);




}

MyMainWindow3::~MyMainWindow3()
{
    delete ui;
}
