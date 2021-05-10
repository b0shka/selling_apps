﻿#include "user_apps.h"
#include "ui_user_apps.h"
#include "../about_my_app/about_my_app.h"

user_apps::user_apps(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_apps)
{
    ui->setupUi(this);

    QList<QString> list_apps_name = database.get_apps_for_list_profile(g_user_name);
    add_apps_to_listWidget(list_apps_name);
    list_apps_name.clear();
}

user_apps::~user_apps()
{
    delete ui;
}

void user_apps::add_apps_to_listWidget(QList<QString> list_apps)
{
    ui->listWidget->clear();
    for (QString i : list_apps)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(i);
        ui->listWidget->addItem(item);
    }
    list_apps.clear();
}

void user_apps::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QList<QString> param_app = {item->text(), g_user_name};
    about_my_app info_app(param_app);
    info_app.setModal(true);
    info_app.exec();

    if (g_status_change_app == 1)
    {
        QList<QString> list_apps_name = database.get_apps_for_list_profile(g_user_name);
        add_apps_to_listWidget(list_apps_name);
        list_apps_name.clear();
    }
    else if (g_status_delete_app == 1)
    {
        QList<QString> list_apps_name = database.get_apps_for_list_profile(g_user_name);
        add_apps_to_listWidget(list_apps_name);
        list_apps_name.clear();
    }
}