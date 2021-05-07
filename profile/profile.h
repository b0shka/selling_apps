#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include <QMessageBox>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"

namespace Ui {
class profile;
}

class profile : public QDialog
{
    Q_OBJECT

public:
    explicit profile(QWidget *parent = nullptr);
    ~profile();

private slots:
    void get_info_from_db(QString login);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::profile *ui;
    sql_database user_info;
};

#endif // PROFILE_H
