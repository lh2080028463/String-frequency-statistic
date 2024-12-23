/********************************************************************************
** Form generated from reading UI file 'tablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWINDOW_H
#define UI_TABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tableWindow
{
public:
    QWidget *centralwidget;
    QPushButton *quitButton;
    QPushButton *enterButton;
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *combobox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tableWindow)
    {
        if (tableWindow->objectName().isEmpty())
            tableWindow->setObjectName("tableWindow");
        tableWindow->resize(800, 600);
        centralwidget = new QWidget(tableWindow);
        centralwidget->setObjectName("centralwidget");
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName("quitButton");
        quitButton->setGeometry(QRect(360, 520, 80, 18));
        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(420, 20, 80, 18));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(180, 80, 411, 291));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(260, 20, 141, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        combobox = new QComboBox(widget);
        combobox->addItem(QString());
        combobox->addItem(QString());
        combobox->setObjectName("combobox");

        horizontalLayout->addWidget(combobox);

        tableWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tableWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        tableWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(tableWindow);
        statusbar->setObjectName("statusbar");
        tableWindow->setStatusBar(statusbar);

        retranslateUi(tableWindow);

        QMetaObject::connectSlotsByName(tableWindow);
    } // setupUi

    void retranslateUi(QMainWindow *tableWindow)
    {
        tableWindow->setWindowTitle(QCoreApplication::translate("tableWindow", "MainWindow", nullptr));
        quitButton->setText(QCoreApplication::translate("tableWindow", "\350\277\224\345\233\236", nullptr));
        enterButton->setText(QCoreApplication::translate("tableWindow", "\347\241\256\350\256\244", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("tableWindow", "\345\255\227\347\254\246\344\270\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("tableWindow", "\351\242\221\347\216\207", nullptr));
        label->setText(QCoreApplication::translate("tableWindow", "\345\221\210\347\216\260\351\241\272\345\272\217\357\274\232", nullptr));
        combobox->setItemText(0, QCoreApplication::translate("tableWindow", "\351\231\215\345\272\217", nullptr));
        combobox->setItemText(1, QCoreApplication::translate("tableWindow", "\345\215\207\345\272\217", nullptr));

    } // retranslateUi

};

namespace Ui {
    class tableWindow: public Ui_tableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWINDOW_H
