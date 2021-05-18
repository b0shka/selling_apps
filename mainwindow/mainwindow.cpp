#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "autorization_mainwindow/autorization_mainwindow.h"
#include "window_login/window_login.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database.first_start();
    database.get_max_price_app();
    database.get_min_price_app();
    get_name_app_from_db();
	/*Client client;
	if (g_status_online == 0)
		client.conect_server();*/
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

    if (g_status_autorization == 1)
        change_mainwindow();
}

void MainWindow::on_pushButton_3_clicked()
{
    filter_search change_filter;
    change_filter.setModal(true);
    change_filter.exec();

    get_name_app_from_db();
}

// открытие информации о программе
void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QList<QString> name_app = item->text().split("\t\t\t\t\t");
    QList<QString> description = item->toolTip().split(";");
    QList<QString> param_app = {name_app[0], description[1]};

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
        if (g_technloges != "")
        {
            if (g_description != "")
            {
                if (i[1].toInt() >= g_min_price && i[1].toInt() <= g_max_price && check_word_in_word(g_description, i[2]) == 1)
                    layout_title_app(i);
                else
                {
                    QList<QString> word_g_description = g_description.split(" ");

                    for (QString j : word_g_description)
                    {
                        if (i[1].toInt() >= g_min_price && i[1].toInt() <= g_max_price && check_word_in_word(j, i[2]) == 1)
                        {
                            layout_title_app(i);
                            break;
                        }
                    }
                }
            }
            else
            {
                QList<QString> description_app = (database.get_all_info_app_list_profile({i[0], i[3]})).at(2).split(";");
                if ((g_technloges.split(";")).size() > 1)
                {
                    int add_status = 0;
                    for (QString tech : g_technloges.split(";"))
                    {
                        for (QString j : description_app)
                        {
                            if (i[1].toInt() >= g_min_price && i[1].toInt() <= g_max_price && check_word_in_word(tech.replace(" ", ""), j.replace(" ", "")) == 1)
                            {
                                layout_title_app(i);
                                add_status = 1;
                            }
                        }
                        if (add_status == 1)
                            break;
                    }
                }
                else
                {
                    for (QString j : description_app)
                    {
                        if (i[1].toInt() >= g_min_price && i[1].toInt() <= g_max_price && check_word_in_word(g_technloges, j.replace(" ", "")) == 1)
                        {
                            layout_title_app(i);
                            break;
                        }
                    }
                }
            }
        }
        else if (g_description != "")
        {
            if (i[1].toInt() >= g_min_price && i[1].toInt() <= g_max_price && check_word_in_word(g_description, i[2]) == 1)
                layout_title_app(i);
            else
            {
                QList<QString> word_g_description = g_description.split(" ");

                for (QString j : word_g_description)
                {
                    if (i[1].toInt() >= g_min_price && i[1].toInt() <= g_max_price && check_word_in_word(j, i[2]) == 1)
                    {
                        layout_title_app(i);
                        break;
                    }
                }
            }
        }
        else
        {
            if (i[1].toInt() >= g_min_price && i[1].toInt() <= g_max_price)
            {
                layout_title_app(i);
            }
        }
    }
    list_result.clear();
}

void MainWindow::layout_title_app(QList<QString> data_app)
{
    QListWidgetItem *item = new QListWidgetItem;
    QString title_app;
    if (data_app[0].size() < 9)
        title_app = data_app[0] + "\t\t\t\t\t\t\t" + data_app[1];
    else if (data_app[0].size() < 22)
        title_app = data_app[0] + "\t\t\t\t\t\t" + data_app[1];
    else
        title_app = data_app[0] + "\t\t\t\t\t" + data_app[1];
    item->setText(title_app);
    item->setToolTip(data_app[2] + ";" + data_app[3]);
    ui->listWidget->addItem(item);
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
    if (search.size() > 4)
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
