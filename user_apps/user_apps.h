#ifndef USER_APPS_H
#define USER_APPS_H

#include <QDialog>
#include <QListWidgetItem>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"

namespace Ui {
class user_apps;
}

class user_apps : public QDialog
{
    Q_OBJECT

public:
    explicit user_apps(QWidget *parent = nullptr);
    ~user_apps();

private slots:
    void add_apps_to_listWidget(QList<QString> list_apps);
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::user_apps *ui;
    sql_database database;
};

#endif // USER_APPS_H
