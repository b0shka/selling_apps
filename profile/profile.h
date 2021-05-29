#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPoint>
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"
#include "../popup/popup.h"

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
    void get_info_from_db();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
	void on_pushButton_8_clicked();
	void on_pushButton_9_clicked();
	void on_lineEdit_returnPressed();
	void on_lineEdit_2_returnPressed();
	void on_lineEdit_3_returnPressed();
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	
private:
    Ui::profile *ui;
	popup *popUp;
    sql_database user_info;
	QPoint m_mousePoint;
};

#endif // PROFILE_H
