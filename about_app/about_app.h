#ifndef ABOUT_APP_H
#define ABOUT_APP_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include "../developper_app/developper_app.h"
#include "../sql_database/sql_database.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"

namespace Ui {
class about_app;
}

class about_app : public QDialog
{
    Q_OBJECT

public:
    explicit about_app(QList<QString> name_app, QWidget *parent = nullptr);
    ~about_app();

private slots:
	void add_info(QList<QString> name_app);
    void on_login_dev_clicked();
    void on_star_add_clicked();
    void on_favorite_add_clicked();
    void on_favorite_del_clicked();
    void on_star_del_clicked();
    void on_messages_clicked();
	void on_close_clicked();
	void on_hide_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	void get_views(QString login, QString name_app);
	
private:
    Ui::about_app *ui;
    sql_database database;
	QPoint m_mousePoint;
	popup *popUp;
};

#endif // ABOUT_APP_H
