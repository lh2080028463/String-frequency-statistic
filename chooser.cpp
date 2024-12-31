#include "chooser.h"
#include "ui_chooser.h"


Chooser::Chooser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Chooser)
{
    ui->setupUi(this);
    this->setWindowTitle("特定字符串查询");
    tableCount = 0;

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setRowCount(100);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);
}

Chooser::~Chooser()
{
    delete ui;
}

void Chooser::on_pushButton_clicked()
{
    this->close();
    MainWindow* mainWindow=new MainWindow;
    mainWindow->show();
}

QVector<int> Chooser::initNext(QString target)
{
    int m = target.size();
    if (m == 0) return QVector<int>(); // 如果模式串为空，返回0

    // 构建部分匹配表
    QVector<int> next(m);
    for (int i = 1, j = 0; i < m; i++) {
        while (j > 0 && target[i] != target[j]) {
            j = next[j - 1];
        }
        if (target[i] == target[j]) {
            j++;
        }
        next[i] = j;
    }
    return next;
}
int Chooser::kmpCount(QString str,QString target)
{
    int m = target.size();
    QVector<int> next=initNext(target);

    int count = 0;
    for (int i = 0, j = 0; i < str.size(); i++) {
        while (j > 0 && str[i]!= target[j]) {
            j = next[j - 1];
        }
        if (str[i] == target[j]) {
            j++;
        }
        if (j == m) {
            count++;
            j = next[j - 1];
        }
    }
    return count;
}

void Chooser::on_pushButton_3_clicked()
{
    if(ui->lineEdit->text()=="") return;
    extern QString s;
   // QString temp = QString(ui->lineEdit->text()+"出现的频率为"+QString::number(kmpCount(s,ui->lineEdit->text())));
    QTableWidgetItem*temp1=new QTableWidgetItem(ui->lineEdit->text());
    QTableWidgetItem*temp2=new QTableWidgetItem(QString::number(kmpCount(s,ui->lineEdit->text())));
    for(int i=0;i<tableCount;i++)
    {
        if(ui->lineEdit->text()==ui->tableWidget->item(i,0)->text())
        {
            QMessageBox::information(this,"提示窗","该字符串已经添加");
            return;
        }
    }
    ui->tableWidget->setItem(tableCount,0,temp1);
    ui->tableWidget->setItem(tableCount,1,temp2);
    tableCount++;
    // ui->textBrowser->append(temp);
   // ui->textBrowser->clear();
}

