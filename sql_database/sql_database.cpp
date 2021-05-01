#include "sql_database.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>

sql_database::sql_database()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("server");
    db.setUserName("root");
    db.setPassword("");
    if (!db.open())
        qDebug() << db.lastError().text();
    else
    {
        qDebug() << "Success!";
        QSqlQuery sql = QSqlQuery(db);
        if (!sql.exec("SELECT * FROM users;"))
        {
            qDebug() << sql.lastError().text();
            return;
        }

        while (sql.next())
        {
            qDebug() << sql.record();
        }
    }
}
