#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vector"
#include "string"
#include "addorder.h"

std::vector<std::string> servicesList = {"Кузов", "Кузов та салон", "Хімчистка"};
std::vector<std::string> workersList = {"Іван", "Руслан", "Олексій", "Михайло"};

class Order
{
public:
    std::vector<std::string> service;
    std::vector<std::string> workers;
    std::string workTime;
    int price;
public:
    // Default constructor
    Order() : price(0) {}

    // Parameterized constructor with service, workers, workTime, and price
    Order(const std::vector<std::string>& services,
          const std::vector<std::string>& workersList,
          const std::string& workTimes,
          int orderPrice)
        : service(services), workers(workersList), workTime(workTimes), price(orderPrice) {}

    // Copy constructor
    Order(const Order& other)
        : service(other.service), workers(other.workers), workTime(other.workTime), price(other.price) {}

    Order& operator=(const Order& other) {
        if (this != &other) {
            service = other.service;
            workers = other.workers;
            workTime = other.workTime;
            price = other.price;
        }
        return *this;
    }

};

std::vector<Order> orderss;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList headerLabels;
    headerLabels << "Послуги" << "Працівники" << "Час" << "Вартість";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);
    ui->tableWidget->setColumnWidth(0, 292);
    ui->tableWidget->setColumnWidth(1, 292);
    ui->tableWidget->setColumnWidth(2, 80);
    ui->tableWidget->setColumnWidth(3, 80);
}

MainWindow::~MainWindow()
{
    delete ui;
}



//void MainWindow::on_pushButtonAdd_clicked()
//{
//    addOrder window;
//    window.setModal(true);
//    window.exec();
//    MainWindow::on_pushButtonRefresh_clicked();
//}


void MainWindow::on_pushButtonRefresh_clicked()
{
    ui->tableWidget->setRowCount(orderss.size());
    ui->tableWidget->setColumnCount(4);

    for(int i = 0; i < orderss.size(); ++i){
        const Order& ordert = orderss[i];

        // Перевірка наявності рядків та стовпців
        if (ui->tableWidget->rowCount() <= i)
            ui->tableWidget->insertRow(i);

        // Об'єднання значень ordert.service у одному стовпці
        QString serviceString = QString::fromStdString(ordert.service[0]);
        for (int j = 1; j < ordert.service.size(); ++j) {
            serviceString += ", " + QString::fromStdString(ordert.service[j]);
        }
        int serviceColumnIndex = 0;
        if (ui->tableWidget->columnCount() <= serviceColumnIndex)
            ui->tableWidget->insertColumn(serviceColumnIndex);
        ui->tableWidget->setItem(i, serviceColumnIndex, new QTableWidgetItem(serviceString));

        // Виведення значень ordert.workers у відповідний стовпець
        QString workersString = QString::fromStdString(ordert.workers[0]);
        for (int j = 1; j < ordert.workers.size(); ++j) {
            workersString += ", " + QString::fromStdString(ordert.workers[j]);
        }
        int workersColumnIndex = 1;
        if (ui->tableWidget->columnCount() <= workersColumnIndex)
            ui->tableWidget->insertColumn(workersColumnIndex);
        ui->tableWidget->setItem(i, workersColumnIndex, new QTableWidgetItem(workersString));

        // Виведення значень ordert.workTime у відповідний стовпець
        int timeColumnIndex = 2;
        if (ui->tableWidget->columnCount() <= timeColumnIndex)
            ui->tableWidget->insertColumn(timeColumnIndex);
        ui->tableWidget->setItem(i, timeColumnIndex, new QTableWidgetItem(QString::fromStdString(ordert.workTime)));

        // Виведення значень ordert.price у відповідний стовпець
        int priceColumnIndex = 3;
        if (ui->tableWidget->columnCount() <= priceColumnIndex)
            ui->tableWidget->insertColumn(priceColumnIndex);
        ui->tableWidget->setItem(i, priceColumnIndex, new QTableWidgetItem(QString::number(ordert.price)));
    }


}


void MainWindow::on_pushButton_clicked()
{
    int price=0;
    std::vector<std::string> serv;

    if(ui->radioButton->isChecked()){
        serv.push_back(servicesList[0]);
        price+=250;
    }
    if(ui->radioButton_2->isChecked()){
        serv.push_back(servicesList[1]);
        price+=350;
    }
    if(ui->radioButton_3->isChecked()){
        serv.push_back(servicesList[2]);
        price+=1800;
    }

    std::vector<std::string> work;

    if(ui->checkBox_2->isChecked())
        work.push_back(workersList[0]);
    if(ui->checkBox_3->isChecked())
        work.push_back(workersList[1]);
    if(ui->checkBox_4->isChecked())
        work.push_back(workersList[2]);
    if(ui->checkBox_5->isChecked())
        work.push_back(workersList[3]);


    std::string tim = ui->lineEdit->text().toStdString();



    Order a(serv,work,tim,price);
    orderss.push_back(a);
    MainWindow::on_pushButtonRefresh_clicked();
}


void MainWindow::on_pushButton_2_clicked()
{
    orderss.clear();
    MainWindow::on_pushButtonRefresh_clicked();
}


void MainWindow::on_pushButton_3_clicked()
{
    // Отримання вибраних рядків
    QList<QTableWidgetItem *> selectedItems = ui->tableWidget->selectedItems();

    // Визначення унікальних рядків, які потрібно видалити
    QSet<int> rowsToRemove;
    for (const QTableWidgetItem *item : selectedItems) {
        rowsToRemove.insert(item->row());
    }

    // Видалення рядків з таблиці (починаючи з останнього, щоб уникнути зміни індексів)
    for (int row = ui->tableWidget->rowCount() - 1; row >= 0; --row) {
        if (rowsToRemove.contains(row)) {
            // Видалення об'єкта з вектору (якщо він існує)
            if (row < orderss.size()) {
                orderss.erase(orderss.begin() + row);
            }

            // Видалення рядка з таблиціg
            ui->tableWidget->removeRow(row);
        }
    }
}

