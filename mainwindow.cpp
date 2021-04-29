#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "window_login/window_login.h"
#include "about_app/about_app.h"
#include <vector>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    add_name_app_from_db();
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
        add_name_app_from_db();
    }
    else
    {
        ui->lineEdit->setStyleSheet(default_style);
        ui->listWidget->clear();
        search_result(search);
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

void MainWindow::add_name_app_from_db()
{
    vector<QString> names_app = {"Keylogger", "Database", "Messenger", "Voice assistant", "Telegram assistant bot"};
    for (QString i : names_app)
    {
        ui->listWidget->addItem(i);
    }
}

void MainWindow::search_result(QString search)
{
    vector<QString> names_app = {"Keylogger", "Database", "Messenger", "Voice assistant", "Telegram assistant bot"};
    vector<QString> list_result = {};

    for (QString i : names_app)
    {
        if (check_error(search.toLower(), i.toLower()) == 1)
            list_result.push_back(i);

        else if (check_word_in_word(search.toLower(), i.toLower()) == 1)
            list_result.push_back(i);
    }
    add_search_result(list_result);
}

int MainWindow::check_error(QString search, QString name_main)
{
    int count = 0;
    if (name_main.size() == search.size())
    {
        for (int j = 0; j < search.size(); j++)
        {
            if (name_main[j] != search[j])
            {
                count++;
            }
        }
        if (count <= 2)
            return 1;
        else
            return 0;
    }
}

int MainWindow::check_word_in_word(QString search, QString name_main)
{
    bool result = name_main.contains(search);

    if (result == true)
        return 1;
    else
        return 0;
}

void MainWindow::add_search_result(vector<QString> list_result)
{
    ui->listWidget->clear();
    for (QString i : list_result)
    {
        ui->listWidget->addItem(i);
    }
    list_result = {};
}
