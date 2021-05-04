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

void autorization_mainwindow::autorizate(QString login)
{
    qDebug() << login;
    user_name = login;
    ui->label->setText(login);
    ui->pushButton_2->setText(login.at(0));
    get_name_app_from_db();
}

void autorization_mainwindow::on_pushButton_clicked()
{
    QString search = ui->lineEdit->text();

    QString lock_style = "padding:2px 5px;"
                         "height: 28px;"
                         "color: white;"
                         "background-color: #2a2a2a;"
                         "border-radius: 5px;"
                         "border: 2px solid #f5a2a2;"
                         "font-size: 14px;";
    QString default_style = "padding:2px 5px;"
                            "height: 28px;"
                            "color: white;"
                            "background-color: #2a2a2a;"
                            "border-radius: 5px;"
                            "border: none;"
                            "font-size: 14px;";

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
    profile profile_window(user_name);
    profile_window.setModal(true);
    profile_window.exec();

    if (profile_window.status_delete == 1)
    {
        close();
        auto mainwindow = new MainWindow();
        mainwindow->show();
    }
    else if (profile_window.status_change == 1)
    {
        ui->label->setText(profile_window.user_name);
        ui->pushButton_2->setText(profile_window.user_name.at(0));
        user_name = profile_window.user_name;
    }
    else if (profile_window.status_out == 1)
    {
        close();
        auto mainwindow = new MainWindow();
        mainwindow->show();
    }
}

void autorization_mainwindow::on_pushButton_4_clicked()
{
    add_app new_app(user_name);
    new_app.setModal(true);
    new_app.exec();
    get_name_app_from_db();
}

void autorization_mainwindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QList<QString> name_app = item->text().split("\t\t\t\t\t");
    QList<QString> description = item->toolTip().split(";");
    QList<QString> param_app = {name_app[0], name_app[1].replace("\t", ""), description[0], description[1]};

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
    sql_database sql_apps_name;
    QList<QList<QString>> list_apps_name = sql_apps_name.get_apps_name();

    add_apps_to_listWidget(list_apps_name);
}

void autorization_mainwindow::search_result(QString search)
{
    sql_database sql_apps_name;
    QList<QList<QString>> list_apps_name = sql_apps_name.get_apps_name();
    QList<QList<QString>> list_result = {};

    for (QList<QString> i : list_apps_name)
    {
        if (check_error(search.toLower(), i[0].toLower()) == 1)
            list_result.push_back(i);

        else if (check_word_in_word(search.toLower(), i[0].toLower()) == 1)
            list_result.push_back(i);
    }
    add_apps_to_listWidget(list_result);
}

int autorization_mainwindow::check_error(QString search, QString name_main)
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

int autorization_mainwindow::check_word_in_word(QString search, QString name_main)
{
    bool result = name_main.contains(search);

    if (result == true)
        return 1;
    else
        return 0;
}

void autorization_mainwindow::add_apps_to_listWidget(QList<QList<QString>> list_result)
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
