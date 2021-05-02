#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    QList<QString> name_app = item->text().split("\t\t\t\t\t");
    QList<QString> description = item->toolTip().split(";");
    QList<QString> param_app = {name_app[0], name_app[1].replace("\t", ""), description[0], description[1]};
    qDebug() << param_app;
    about_app app_information(param_app);
    app_information.setModal(true);
    app_information.exec();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
        case Qt::Key_Escape:
            close();
            break;
        case Qt::Key_Control:
            ui->lineEdit->setText("");
    }
}

void MainWindow::on_lineEdit_returnPressed()
{
    on_pushButton_clicked();
}

void MainWindow::add_name_app_from_db()
{
    sql_database();

    QList<QList<QString>> names_app = {
        {"Keylogger", "3000", "Alex Ivanov", "Программа для контроля нажатыми клавишами"},
        {"Database", "5000", "Vanya Petrov", "Программа для создания, просмотра и изменения баз данных"},
        {"Messenger", "10000", "Arseniy", "Программа для ведения переписок с друзьями"},
        {"Voice assistant", "7500", "Nastya", "Голосовой ассистент с полезными функциями"},
        {"Telegram assistant bot", "4500", "John", "Telegram бот с полезными функциями"},
    };
    for (QList<QString> i : names_app)
    {
        QListWidgetItem *item = new QListWidgetItem;
        QString title_app;
        if (i[0].size() < 9)
            title_app = i[0] + "\t\t\t\t\t\t\t" + i[1];
        else if (i[0].size() < 22)
            title_app = i[0] + "\t\t\t\t\t\t" + i[1];
        else
            title_app = i[0] + "\t\t\t\t\t" + i[1];
        item->setText(title_app);
        item->setToolTip(i[3] + ";" + i[2]);
        ui->listWidget->addItem(item);
    }
}

void MainWindow::search_result(QString search)
{
    QList<QList<QString>> names_app = {
        {"Keylogger", "3000", "Alex Ivanov", "Программа для контроля нажатыми клавишами"},
        {"Database", "5000", "Vanya Petrov", "Программа для создания, просмотра и изменения баз данных"},
        {"Messenger", "10000", "Arseniy", "Программа для ведения переписок с друзьями"},
        {"Voice assistant", "7500", "Nastya", "Голосовой ассистент с полезными функциями"},
        {"Telegram assistant bot", "4500", "John", "Telegram бот с полезными функциями"},
    };
    QList<QList<QString>> list_result = {};

    for (QList<QString> i : names_app)
    {
        if (check_error(search.toLower(), i[0].toLower()) == 1)
            list_result.push_back(i);

        else if (check_word_in_word(search.toLower(), i[0].toLower()) == 1)
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

void MainWindow::add_search_result(QList<QList<QString>> list_result)
{
    ui->listWidget->clear();
    for (QList<QString> i : list_result)
    {
        QListWidgetItem *item = new QListWidgetItem;
        QString title_app;
        if (i[0].size() < 11)
            title_app = i[0] + "\t\t\t\t\t\t\t" + i[1];
        else if (i[0].size() < 23)
            title_app = i[0] + "\t\t\t\t\t\t" + i[1];
        else
            title_app = i[0] + "\t\t\t\t\t" + i[1];
        item->setText(title_app);
        item->setToolTip(i[3]);
        ui->listWidget->addItem(item);
    }
    list_result.clear();
}
