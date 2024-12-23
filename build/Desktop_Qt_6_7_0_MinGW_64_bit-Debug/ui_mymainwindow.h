/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *quitButton;
    QPushButton *enterButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *combobox2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *combobox3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName("MyMainWindow");
        MyMainWindow->resize(800, 600);
        centralwidget = new QWidget(MyMainWindow);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(150, 180, 521, 61));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 280, 271, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setFont(font);

        horizontalLayout->addWidget(comboBox);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(250, 420, 311, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        quitButton = new QPushButton(layoutWidget1);
        quitButton->setObjectName("quitButton");
        quitButton->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(24);
        quitButton->setFont(font1);
        quitButton->setIconSize(QSize(12, 12));

        horizontalLayout_2->addWidget(quitButton);

        enterButton = new QPushButton(layoutWidget1);
        enterButton->setObjectName("enterButton");
        QFont font2;
        font2.setPointSize(23);
        enterButton->setFont(font2);

        horizontalLayout_2->addWidget(enterButton);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(251, 360, 301, 24));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font3;
        font3.setPointSize(10);
        label_2->setFont(font3);

        horizontalLayout_3->addWidget(label_2);

        combobox2 = new QComboBox(widget);
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->addItem(QString());
        combobox2->setObjectName("combobox2");

        horizontalLayout_3->addWidget(combobox2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(320, 390, 171, 24));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        combobox3 = new QComboBox(widget1);
        combobox3->addItem(QString());
        combobox3->addItem(QString());
        combobox3->setObjectName("combobox3");

        horizontalLayout_4->addWidget(combobox3);

        MyMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MyMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MyMainWindow);
        statusbar->setObjectName("statusbar");
        MyMainWindow->setStatusBar(statusbar);

        retranslateUi(MyMainWindow);

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
        MyMainWindow->setWindowTitle(QCoreApplication::translate("MyMainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MyMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">\346\225\260\346\215\256\350\275\275\345\205\245\345\256\214\346\210\220\357\274\214\350\257\267\351\200\211\346\213\251\350\246\201\346\237\245\347\234\213\347\232\204\346\226\271\345\274\217</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MyMainWindow", "\346\237\245\347\234\213\346\226\271\345\274\217\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MyMainWindow", "\346\237\261\347\212\266\345\233\276", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MyMainWindow", "\351\245\274\347\212\266\345\233\276", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MyMainWindow", "\346\225\260\346\215\256\346\237\245\347\234\213", nullptr));

        quitButton->setText(QCoreApplication::translate("MyMainWindow", "\350\277\224\345\233\236", nullptr));
        enterButton->setText(QCoreApplication::translate("MyMainWindow", "\347\241\256\350\256\244", nullptr));
        label_2->setText(QCoreApplication::translate("MyMainWindow", "\350\276\223\345\205\245\345\233\276\344\270\255\347\273\237\350\256\241\347\232\204\351\241\271\347\233\256\344\270\252\346\225\260\357\274\210\346\234\200\345\244\24710\357\274\211\357\274\232", nullptr));
        combobox2->setItemText(0, QCoreApplication::translate("MyMainWindow", "1", nullptr));
        combobox2->setItemText(1, QCoreApplication::translate("MyMainWindow", "2", nullptr));
        combobox2->setItemText(2, QCoreApplication::translate("MyMainWindow", "3", nullptr));
        combobox2->setItemText(3, QCoreApplication::translate("MyMainWindow", "4", nullptr));
        combobox2->setItemText(4, QCoreApplication::translate("MyMainWindow", "5", nullptr));
        combobox2->setItemText(5, QCoreApplication::translate("MyMainWindow", "6", nullptr));
        combobox2->setItemText(6, QCoreApplication::translate("MyMainWindow", "7", nullptr));
        combobox2->setItemText(7, QCoreApplication::translate("MyMainWindow", "8", nullptr));
        combobox2->setItemText(8, QCoreApplication::translate("MyMainWindow", "9", nullptr));
        combobox2->setItemText(9, QCoreApplication::translate("MyMainWindow", "10", nullptr));

        label_3->setText(QCoreApplication::translate("MyMainWindow", "\351\241\272\345\272\217\344\270\272\357\274\232", nullptr));
        combobox3->setItemText(0, QCoreApplication::translate("MyMainWindow", "\346\234\200\345\244\247\347\232\204n\344\270\252", nullptr));
        combobox3->setItemText(1, QCoreApplication::translate("MyMainWindow", "\346\234\200\345\260\217\347\232\204n\344\270\252", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
