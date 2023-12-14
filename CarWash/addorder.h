#ifndef ADDORDER_H
#define ADDORDER_H

#include <QDialog>
//#include "mainwindow.h"

namespace Ui {
class addOrder;
}

class addOrder : public QDialog
{
    Q_OBJECT

public:
    explicit addOrder(QWidget *parent = nullptr);
    ~addOrder();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addOrder *ui;
};

#endif // ADDORDER_H
