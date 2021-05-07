#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "autorization_mainwindow/autorization_mainwindow.h"
#include "window_login/window_login.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database.first_start();
    get_name_app_from_db();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// нажатие кнопки при поиске
void MainWindow::on_pushButton_clicked()
{
    QString search = ui->lineEdit->text();

    if (search == "")
    {
        ui->lineEdit->setStyleSheet(lock_style);
        ui->listWidget->clear();
        get_name_app_from_db();
    }
    else
    {
        ui->lineEdit->setStyleSheet(default_style);
        ui->listWidget->clear();
        search_result(search);
        ui->lineEdit->setText("");
    }
}

// нажатие кнопки для авторизации
void MainWindow::on_pushButton_2_clicked()
{
    window_login login;
    login.setModal(true);
    login.exec();

    qDebug() << g_status_autorization;
    if (g_status_autorization == 1)
        change_mainwindow();
}

// открытие информации о программе
void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QList<QString> name_app = item->text().split("\t\t\t\t\t");
    QList<QString> description = item->toolTip().split(";");
    QList<QString> param_app = {name_app[0], name_app[1].replace("\t", ""), description[0], description[1]};

    about_app app_information(param_app);
    app_information.setModal(true);
    app_information.exec();
}

// действия для клавиш на клавиатуре
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

// получение названий программ из БД
void MainWindow::get_name_app_from_db()
{
    QList<QList<QString>> list_apps_name = database.get_apps_name();

    try {
        if (list_apps_name.size() == 0)
            throw 1;
        else
        {
            if (list_apps_name.at(0).at(0) != "ERROR")
            {
                add_apps_to_listWidget(list_apps_name);
                list_apps_name.clear();
            }
        }
    } catch (int a) {
        qDebug() << "[ERROR] Нет записей в БД";
    }
}

// добавление программ в listWidget
void MainWindow::add_apps_to_listWidget(QList<QList<QString>> list_result)
{
    ui->listWidget->clear();
    for (QList<QString> i : list_result)
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
        item->setToolTip(i[2] + ";" + i[3]);
        ui->listWidget->addItem(item);
    }
    list_result.clear();
}

// поиск программ в listWidget
void MainWindow::search_result(QString search)
{
    QList<QList<QString>> list_apps_name = database.get_apps_name();
    QList<QList<QString>> list_result = {};

    for (QList<QString> i : list_apps_name)
    {
        if (check_error(search.toLower(), i[0].toLower()) == 1)
            list_result.push_back(i);

        else if (check_word_in_word(search.toLower(), i[0].toLower()) == 1 || check_word_in_word_no_name(search.toLower(), i[1].toLower()) == 1 || check_word_in_word_no_name(search.toLower(), i[2].toLower()) == 1 || check_word_in_word_no_name(search.toLower(), i[3].toLower()) == 1)
            list_result.push_back(i);
    }
    add_apps_to_listWidget(list_result);
    list_apps_name.clear();
    list_result.clear();
}

int MainWindow::check_error(QString search, QString name_main)
{
    int count = 0;
    for (int j = 0; j < search.size(); j++)
    {
        if (name_main[j] != search[j])
            count++;
    }
    if (count <= 1)
        return 1;
    else if (count <= 2 && (name_main.size() - search.size()) < 5)
        return 1;
    else
        return 0;
}

int MainWindow::check_word_in_word(QString search, QString name_main)
{
    bool result = name_main.contains(search);

    if (result == true)
        return 1;
    else
        return 0;
}

int MainWindow::check_word_in_word_no_name(QString search, QString name_main)
{
    if (search.size() == name_main.size())
    {
        bool result = name_main.contains(search);

        if (result == true)
            return 1;
        else
            return 0;
    }
    return 0;
}

void MainWindow::change_mainwindow()
{
    close();
    autorization_mainwindow autorization_window;
    autorization_window.autorizate();
    autorization_window.setModal(false);
    autorization_window.exec();
}
