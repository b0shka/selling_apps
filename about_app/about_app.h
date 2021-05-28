#ifndef ABOUT_APP_H
#define ABOUT_APP_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include "../developper_app/developper_app.h"
#include "../sql_database/sql_database.h"

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
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::about_app *ui;
    sql_database database;
	QPoint m_mousePoint;
};

#endif // ABOUT_APP_H
