#include "favorite_app.h"
#include "ui_favorite_app.h"
#include "../about_app/about_app.h"
#include "../about_my_app/about_my_app.h"

favorite_app::favorite_app(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::favorite_app)
{
    ui->setupUi(this);
    QList<QList<QString>> list_apps_name = database.get_list_favorite_app();
    add_apps_to_listWidget(list_apps_name);
    list_apps_name.clear();
}

favorite_app::~favorite_app()
{
    delete ui;
}

void favorite_app::add_apps_to_listWidget(QList<QList<QString>> list_apps)
{
    ui->listWidget->clear();
    for (QList<QString> i : list_apps)
    {
        QListWidgetItem *item = new QListWidgetItem;
        item->setText(i[0]);
        item->setToolTip(i[1]);
        ui->listWidget->addItem(item);
    }
    list_apps.clear();
}

void favorite_app::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QList<QString> param_app = {item->text(), item->toolTip()};
    about_app info_app(param_app);
    info_app.setModal(true);
    info_app.exec();
}
