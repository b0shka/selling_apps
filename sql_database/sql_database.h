#ifndef SQL_DATABASE_H
#define SQL_DATABASE_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

using namespace std;

class sql_database
{
public:
    sql_database();
private slots:

private:
    QSqlDatabase db;
};

#endif // SQL_DATABASE_H
