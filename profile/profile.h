#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include <QMessageBox>
#include "../sql_database/sql_database.h"

namespace Ui {
class profile;
}

class profile : public QDialog
{
    Q_OBJECT

public:
    explicit profile(QString login, QWidget *parent = nullptr);
    ~profile();
    QString user_name;
    int status_delete = 0;
    int status_change = 0;
    int status_out = 0;

private slots:
    void get_info_from_db(QString login);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::profile *ui;
    QString user_id;
    sql_database user_info;
};

#endif // PROFILE_H
