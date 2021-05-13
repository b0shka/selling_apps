#ifndef FILTER_SEARCH_H
#define FILTER_SEARCH_H

#include <QDialog>
#include "../main_data/data.h"
#include "../sql_database/sql_database.h"

namespace Ui {
class filter_search;
}

class filter_search : public QDialog
{
    Q_OBJECT

public:
    explicit filter_search(QWidget *parent = nullptr);
    ~filter_search();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::filter_search *ui;
    sql_database database;
};

#endif // FILTER_SEARCH_H
