/********************************************************************************
** Form generated from reading UI file 'mymainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW2_H
#define UI_MYMAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow2
{
public:
    QWidget *centralwidget;
    QPushButton *quitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyMainWindow2)
    {
        if (MyMainWindow2->objectName().isEmpty())
            MyMainWindow2->setObjectName("MyMainWindow2");
        MyMainWindow2->resize(800, 600);
        centralwidget = new QWidget(MyMainWindow2);
        centralwidget->setObjectName("centralwidget");
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName("quitButton");
        quitButton->setGeometry(QRect(380, 370, 80, 18));
        MyMainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyMainWindow2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MyMainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MyMainWindow2);
        statusbar->setObjectName("statusbar");
        MyMainWindow2->setStatusBar(statusbar);

        retranslateUi(MyMainWindow2);

        QMetaObject::connectSlotsByName(MyMainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow2)
    {
        MyMainWindow2->setWindowTitle(QCoreApplication::translate("MyMainWindow2", "MainWindow", nullptr));
        quitButton->setText(QCoreApplication::translate("MyMainWindow2", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow2: public Ui_MyMainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW2_H
