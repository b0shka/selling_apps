#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "window_login.h"
#include "about_app.h"
#include <vector>

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    add_name_app();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString search = ui->lineEdit->text();

    QString lock_style = "padding:2px 5px;\nheight: 28px;\ncolor: white;\nbackground-color: #2a2a2a;\nborder-radius: 5px;\nborder: 2px solid #f5a2a2";
    QString default_style = "padding:2px 5px;\nheight: 28px;\ncolor: white;\nbackground-color: #2a2a2a;\nborder-radius: 5px;\nborder: none";

    if (search == "")
    {
        ui->lineEdit->setStyleSheet(lock_style);
        ui->listWidget->clear();
        add_name_app();
    }
    else
    {
        ui->lineEdit->setStyleSheet(default_style);
        ui->lineEdit->setText("");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    window_login login;
    login.setModal(true);
    login.exec();
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QString name_app = item->text();
    about_app app_information(name_app);
    app_information.setModal(true);
    app_information.exec();
}

void MainWindow::add_name_app()
{
    vector<QString> names_app = {"Keylogger", "Database", "Messenger", "Voice assistant", "Telegram assistant bot"};
    for (QString i : names_app)
    {
        ui->listWidget->addItem(i);
    }
}
