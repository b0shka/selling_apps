#ifndef DEVELOPPER_APP_H
#define DEVELOPPER_APP_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include "../sql_database/sql_database.h"

namespace Ui {
class developper_app;
}

class developper_app : public QDialog
{
    Q_OBJECT

public:
    explicit developper_app(QString login, QWidget *parent = nullptr);
    ~developper_app();

private slots:
    void on_pushButton_2_clicked();
	void on_pushButton_3_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
    void get_info_from_db(QString login);
	
private:
    Ui::developper_app *ui;
    sql_database developer_info;
    QString user_name_dev;
	QPoint m_mousePoint;
};

#endif // DEVELOPPER_APP_H
