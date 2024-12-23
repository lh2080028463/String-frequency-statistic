/********************************************************************************
** Form generated from reading UI file 'mymainwindow3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW3_H
#define UI_MYMAINWINDOW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow3
{
public:
    QWidget *centralwidget;
    QPushButton *quitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyMainWindow3)
    {
        if (MyMainWindow3->objectName().isEmpty())
            MyMainWindow3->setObjectName("MyMainWindow3");
        MyMainWindow3->resize(800, 600);
        centralwidget = new QWidget(MyMainWindow3);
        centralwidget->setObjectName("centralwidget");
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName("quitButton");
        quitButton->setGeometry(QRect(360, 420, 80, 18));
        MyMainWindow3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyMainWindow3);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MyMainWindow3->setMenuBar(menubar);
        statusbar = new QStatusBar(MyMainWindow3);
        statusbar->setObjectName("statusbar");
        MyMainWindow3->setStatusBar(statusbar);

        retranslateUi(MyMainWindow3);

        QMetaObject::connectSlotsByName(MyMainWindow3);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow3)
    {
        MyMainWindow3->setWindowTitle(QCoreApplication::translate("MyMainWindow3", "MainWindow", nullptr));
        quitButton->setText(QCoreApplication::translate("MyMainWindow3", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow3: public Ui_MyMainWindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW3_H
