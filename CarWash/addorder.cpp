#include "addorder.h"
#include "ui_addorder.h"
//#include "mainwindow.h"

addOrder::addOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addOrder)
{
    ui->setupUi(this);
}

addOrder::~addOrder()
{
    delete ui;
}

void addOrder::on_pushButton_clicked()
{
    //    int price=0;
    //    std::vector<std::string> serv;

    //    if(ui->radioButton->isChecked()){
    //        serv.push_back(servicesList[0]);
    //        price+=250;
    //    }
    //    if(ui->radioButton_2->isChecked()){
    //        serv.push_back(servicesList[1]);
    //        price+=350;
    //    }
    //    if(ui->radioButton_3->isChecked()){
    //        serv.push_back(servicesList[2]);
    //        price+=1800;
    //    }

    //    std::vector<std::string> work;

    //    if(ui->checkBox_2->isChecked())
    //        work.push_back(workersList[0]);
    //    if(ui->checkBox_3->isChecked())
    //        work.push_back(workersList[1]);
    //    if(ui->checkBox_4->isChecked())
    //        work.push_back(workersList[2]);
    //    if(ui->checkBox_5->isChecked())
    //        work.push_back(workersList[3]);


    //    std::string tim = ui->lineEdit->text().toStdString();



    //    Order a(serv,work,tim,price);
    //    orderss.push_back(a);
}

