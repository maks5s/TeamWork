#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vector"
#include "string"
#include <QMessageBox>
#include <iostream>
#include <fstream>

std::vector<std::string> servicesList = {"Кузов", "Кузов та салон", "Хімчистка"};
std::vector<std::string> workersList = {"Іван", "Руслан", "Олексій", "Михайло"};

class Order
{
public:
    std::vector<std::string> service;
    std::vector<std::string> workers;
    std::string workTime;
    double price;
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

//основне вікно
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

    QRegularExpressionValidator* timeValidator = new QRegularExpressionValidator(
        QRegularExpression("^([01]?[0-9]|2[0-3]):[0-5][0-9]-([01]?[0-9]|2[0-3]):[0-5][0-9]$"), this);

    // Встановлення валідатора для поля вводу
    ui->lineEdit->setValidator(timeValidator);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//оновлення
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
//кнопка додати
void MainWindow::on_pushButton_clicked()
{
    int price=0;
    std::vector<std::string> serv;
    //Вибір сервісу
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


    QRegularExpressionValidator* timeValidator = new QRegularExpressionValidator(
        QRegularExpression("^([01]?[0-9]|2[0-3]):[0-5][0-9]-([01]?[0-9]|2[0-3]):[0-5][0-9]$"), this);

    QString time = ui->lineEdit->text();
    int a=0;
    if (timeValidator->validate(time, a) != QValidator::Acceptable) {
        // Виведення повідомлення або виконання інших дій у випадку неправильного формату часу
        QMessageBox::warning(this, "Помилка", "Неправильний формат часу. Використовуйте формат HH:mm-HH:mm.");
        return;
    }

    std::string tim = ui->lineEdit->text().toStdString();

    // Перевірка наявності хоча б одного вибраного radioButton та хоча б одного вибраного checkBox
    if (serv.empty() || work.empty()) {
        // Виведення повідомлення або виконання інших дій у випадку невибраних опцій
        QMessageBox::warning(this, "Помилка", "Виберіть хоча б один вид послуги та хоча б одного працівника.");
    } else {
        // Створення об'єкта Order лише у випадку, якщо хоча б один radioButton та один checkBox були вибрані
        Order a(serv, work, tim, price);
        orderss.push_back(a);
        MainWindow::on_pushButtonRefresh_clicked();
    }
}

//очищення списку
void MainWindow::on_pushButton_2_clicked()
{
    orderss.clear();
    MainWindow::on_pushButtonRefresh_clicked();
}
//видалення виділених рядків
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
//вивести заробітню плату
void MainWindow::on_pushButton_4_clicked()
{
    QString str;
    std::string tempstr;
    double tempdbl;

    std::map<std::string, double> salaryMap;

    for (const std::string& worker : workersList) {
        salaryMap[worker] = 0.0; // Початкова заробітна плата може бути, наприклад, 0.0
    }

    for(int i=0;i<orderss.size();++i)
    {
        for(int j=0;j<orderss[i].workers.size();++j)
        {
            salaryMap[orderss[i].workers[j]] += ( ( orderss[i].price / 2 ) / orderss[i].workers.size() );
        }
    }

    std::ofstream outFile("output.txt");  // Відкриття файлу для запису

    for (const auto& pair : salaryMap) {
        tempstr = pair.first;
        tempdbl = pair.second;
        str += "Ім'я: " + QString::fromStdString(tempstr) + ", Заробітня плата: " + QString::number(tempdbl) + " грн.\n";
        outFile << "Ім'я: " << tempstr << ", Заробітня плата: " << tempdbl << " грн.\n";
    }

    outFile.close();  // Закриття файлу

    QMessageBox::information(this, "ZP", str);
}
