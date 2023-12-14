/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *pushButtonRefresh;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *radioButton_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1224, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 600 10pt \"Segoe UI Semibold\";\n"
"background-color: rgb(226, 253, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 10, 761, 401));
        pushButtonRefresh = new QPushButton(centralwidget);
        pushButtonRefresh->setObjectName("pushButtonRefresh");
        pushButtonRefresh->setGeometry(QRect(610, 520, 75, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(780, 200, 271, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"\n"
"font: 600 14pt \"Segoe UI Semibold\";\n"
"background-color: rgb(84, 101, 255);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(780, 10, 151, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout->addWidget(radioButton_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(931, 10, 181, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName("radioButton");

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout_2->addWidget(radioButton_2);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(780, 70, 441, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        checkBox_2 = new QCheckBox(layoutWidget2);
        checkBox_2->setObjectName("checkBox_2");

        horizontalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(layoutWidget2);
        checkBox_3->setObjectName("checkBox_3");

        horizontalLayout_3->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(layoutWidget2);
        checkBox_4->setObjectName("checkBox_4");

        horizontalLayout_3->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(layoutWidget2);
        checkBox_5->setObjectName("checkBox_5");

        horizontalLayout_3->addWidget(checkBox_5);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(780, 130, 271, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEdit = new QLineEdit(layoutWidget3);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(800, 270, 75, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(940, 270, 141, 61));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(860, 390, 75, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1224, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\264\320\260\320\275\321\226 \320\277\320\276\321\201\320\273\321\203\320\263\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201 \320\262\320\270\320\272\320\276\320\275\320\260\320\275\320\275\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\200\321\202\321\226\321\201\321\202\321\214 \321\200\320\276\320\261\320\276\321\202\320\270", nullptr));
        pushButtonRefresh->setText(QCoreApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\320\273\321\203\320\263\320\270", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\320\245\321\226\320\274\321\207\320\270\321\201\321\202\320\272\320\260", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\267\320\276\320\262", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\232\321\203\320\267\320\276\320\262 \321\202\320\260 \321\201\320\260\320\273\320\276\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\320\270", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\320\206\320\262\320\260\320\275", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\201\320\273\320\260\320\275", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\320\236\320\273\320\265\320\272\321\201\321\226\320\271", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\321\205\320\260\320\271\320\273\320\276", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201 \320\262\320\270\320\272\320\276\320\275\320\260\320\275\320\275\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\321\226", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\262\320\270\320\262\320\265\321\201\321\202\320\270 \320\267\320\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
