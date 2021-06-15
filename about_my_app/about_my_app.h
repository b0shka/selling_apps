#ifndef ABOUT_MY_APP_H
#define ABOUT_MY_APP_H

#include <QDialog>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPoint>
#include <QFileDialog>
#include <QBuffer>
#include "../sql_database/sql_database.h"
#include "../popup/popup.h"

namespace Ui {
class about_my_app;
}

class about_my_app : public QDialog
{
    Q_OBJECT

public:
    explicit about_my_app(QList<QString> param_app, QWidget *parent = nullptr);
    ~about_my_app();

private slots:
	void add_info(QList<QString> param_app);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
	void on_pushButton_3_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void on_pushButton_10_clicked();
	void on_pushButton_11_clicked();
	void on_pushButton_12_clicked();
	void on_lineEdit_returnPressed();
	void on_lineEdit_2_returnPressed();
	void on_lineEdit_3_returnPressed();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	void get_views(QString login, QString name_app);
	
private:
    Ui::about_my_app *ui;
	sql_database database;
	popup *popUp;
    QString app_name;
	QPoint m_mousePoint;
	QPixmap one_Pixmap = QPixmap();
	QPixmap two_Pixmap = QPixmap();
	QPixmap three_Pixmap = QPixmap();
	int count_photo;
	QByteArray imageBytes1, imageBytes2, imageBytes3;
};

#endif // ABOUT_MY_APP_H
