#include "autorization_mainwindow.h"
#include "ui_autorization_mainwindow.h"
#include "../profile/profile.h"
#include "../add_app/add_app.h"

autorization_mainwindow::autorization_mainwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autorization_mainwindow)
{
    ui->setupUi(this);
}

autorization_mainwindow::~autorization_mainwindow()
{
    delete ui;
}

void autorization_mainwindow::autorizate()
{
    ui->label->setText(g_user_name);
    ui->pushButton_2->setText(g_user_name.at(0));
    get_name_app_from_db();
}

void autorization_mainwindow::on_pushButton_clicked()
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

void autorization_mainwindow::on_pushButton_2_clicked()
{
    profile profile_window;
    profile_window.setModal(true);
    profile_window.exec();
    g_status_now_profile = 0;

    if (g_status_delete == 1)
    {
        g_status_delete = 0;
        close();
        auto mainwindow = new MainWindow();
        mainwindow->show();
    }
    else if (g_status_change == 1)
    {
        g_status_change = 0;
        ui->label->setText(g_user_name);
        ui->pushButton_2->setText(g_user_name.at(0));
    }
    else if (g_status_out == 1)
    {
        g_status_out = 0;
        g_status_autorization = 0;
        close();
        auto mainwindow = new MainWindow();
        mainwindow->show();
    }
    if (g_status_delete_app == 1)
    {
        get_name_app_from_db();
        g_status_delete_app = 0;
    }
    else if (g_status_change_app == 1)
    {
        get_name_app_from_db();
        g_status_change_app = 0;
    }
}

void autorization_mainwindow::on_pushButton_3_clicked()
{
    filter_search change_filter;
    change_filter.setModal(true);
    change_filter.exec();

    get_name_app_from_db();
}

void autorization_mainwindow::on_pushButton_4_clicked()
{
    add_app new_app;
    new_app.setModal(true);
    new_app.exec();

    get_name_app_from_db();
}

void autorization_mainwindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QList<QString> name_app = item->text().split("\t\t\t\t\t");
    QList<QString> description = item->toolTip().split(";");
    QList<QString> param_app = {name_app[0], description[1]};

    about_app app_information(param_app);
    app_information.setModal(true);
    app_information.exec();
}

void autorization_mainwindow::keyPressEvent(QKeyEvent *event)
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

void autorization_mainwindow::on_lineEdit_returnPressed()
{
    on_pushButton_clicked();
}

void autorization_mainwindow::get_name_app_from_db()
{
    QList<QList<QString>> list_apps_name = database.get_apps_name();

    add_apps_to_listWidget(list_apps_name);
}

void autorization_mainwindow::add_apps_to_listWidget(QList<QList<QString>> list_result)
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

void autorization_mainwindow::layout_title_app(QList<QString> data_app)
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


void autorization_mainwindow::search_result(QString search)
{
    QList<QList<QString>> list_apps_name = database.get_apps_name();
    QList<QList<QString>> list_result = {};

    for (QList<QString> i : list_apps_name)
    {
        if (check_error(search.toLower(), i[0].toLower()) == 1)
            list_result.push_back(i);

        else if (check_word_in_word(search.toLower(), i[0].toLower()) == 1 || check_no_name(search.toLower(), i[1].toLower()) == 1 || check_no_name(search.toLower(), i[2].toLower()) == 1 || check_no_name(search.toLower(), i[3].toLower()) == 1)
            list_result.push_back(i);
    }
    add_apps_to_listWidget(list_result);
    list_apps_name.clear();
    list_result.clear();
}

int autorization_mainwindow::check_error(QString search, QString name_main)
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

int autorization_mainwindow::check_word_in_word(QString search, QString name_main)
{
    bool result = name_main.contains(search);

    if (result == true)
        return 1;
    else
        return 0;
}

int autorization_mainwindow::check_no_name(QString search, QString name_main)
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
