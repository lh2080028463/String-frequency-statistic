#ifndef CHOOSER_H
#define CHOOSER_H

#include <QMainWindow>
#include <mainwindow.h>
#include<QVector>
#include<QString>
#include <QTableView>
#include <QStandardItemModel>

namespace Ui {
class Chooser;
}

class Chooser : public QMainWindow
{
    Q_OBJECT

public:
    explicit Chooser(QWidget *parent = nullptr);
    ~Chooser();
    QVector<int> initNext(QString str);
    int kmpCount(QString target, QString str);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Chooser *ui;
    int tableCount;
};

#endif // CHOOSER_H
