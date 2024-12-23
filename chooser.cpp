#include "chooser.h"
#include "ui_chooser.h"

Chooser::Chooser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Chooser)
{
    ui->setupUi(this);
    this->setWindowTitle("特定字符串查询");
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
    QString temp = QString(ui->lineEdit->text()+"出现的频率为"+QString::number(kmpCount(s,ui->lineEdit->text())));
    ui->textBrowser->append(temp);
    ui->textBrowser->clear();
}

