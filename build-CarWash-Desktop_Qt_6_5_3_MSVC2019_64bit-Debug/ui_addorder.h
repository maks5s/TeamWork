/********************************************************************************
** Form generated from reading UI file 'addorder.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDORDER_H
#define UI_ADDORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addOrder
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QRadioButton *radioButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QDialog *addOrder)
    {
        if (addOrder->objectName().isEmpty())
            addOrder->setObjectName("addOrder");
        addOrder->resize(400, 260);
        pushButton = new QPushButton(addOrder);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(11, 226, 75, 24));
        label = new QLabel(addOrder);
        label->setObjectName("label");
        label->setGeometry(QRect(12, 12, 47, 16));
        label_2 = new QLabel(addOrder);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(12, 84, 65, 16));
        label_3 = new QLabel(addOrder);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(12, 155, 82, 16));
        lineEdit = new QLineEdit(addOrder);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 155, 133, 22));
        checkBox_2 = new QCheckBox(addOrder);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(83, 84, 45, 20));
        checkBox_3 = new QCheckBox(addOrder);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(134, 84, 62, 20));
        checkBox_4 = new QCheckBox(addOrder);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(202, 84, 67, 20));
        checkBox_5 = new QCheckBox(addOrder);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(275, 84, 74, 20));
        radioButton_3 = new QRadioButton(addOrder);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(240, 10, 89, 20));
        layoutWidget = new QWidget(addOrder);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(65, 12, 170, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);


        retranslateUi(addOrder);

        QMetaObject::connectSlotsByName(addOrder);
    } // setupUi

    void retranslateUi(QDialog *addOrder)
    {
        addOrder->setWindowTitle(QCoreApplication::translate("addOrder", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addOrder", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("addOrder", "\320\237\320\276\321\201\320\273\321\203\320\263\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("addOrder", "\320\237\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("addOrder", "\320\247\320\260\321\201 \320\262\320\270\320\272\320\276\320\275\320\260\320\275\320\275\321\217", nullptr));
        checkBox_2->setText(QCoreApplication::translate("addOrder", "\320\206\320\262\320\260\320\275", nullptr));
        checkBox_3->setText(QCoreApplication::translate("addOrder", "\320\240\321\203\321\201\320\273\320\260\320\275", nullptr));
        checkBox_4->setText(QCoreApplication::translate("addOrder", "\320\236\320\273\320\265\320\272\321\201\321\226\320\271", nullptr));
        checkBox_5->setText(QCoreApplication::translate("addOrder", "\320\234\320\270\321\205\320\260\320\271\320\273\320\276", nullptr));
        radioButton_3->setText(QCoreApplication::translate("addOrder", "\320\245\321\226\320\274\321\207\320\270\321\201\321\202\320\272\320\260", nullptr));
        radioButton->setText(QCoreApplication::translate("addOrder", "\320\232\321\203\320\267\320\276\320\262", nullptr));
        radioButton_2->setText(QCoreApplication::translate("addOrder", "\320\232\321\203\320\267\320\276\320\262 \321\202\320\260 \321\201\320\260\320\273\320\276\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addOrder: public Ui_addOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDORDER_H
