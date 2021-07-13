#ifndef AUTORIZATION_MAINWINDOW_H
#define AUTORIZATION_MAINWINDOW_H

#include <QDialog>
#include <QThread>
#include "../mainwindow/mainwindow.h"
#include "thread_new_messages.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"

namespace Ui {
class autorization_mainwindow;
}

class autorization_mainwindow : public QDialog
{
    Q_OBJECT

public:
    explicit autorization_mainwindow(QWidget *parent = nullptr);
    ~autorization_mainwindow();
	
private slots:
    // функции для кнопок
    void on_favorite_clicked();
    void on_profile_clicked();
    void on_filter_clicked();
    void on_add_clicked();
	void on_messages_clicked();
	void on_update_clicked();
	void on_close_clicked();
	void on_hide_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
	void on_lineEdit_returnPressed();
    void keyPressEvent(QKeyEvent *event);
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);

    // функции для работы с записями и поиском
    void get_name_app_from_db();
    void search_result(QString search);
    int check_error(QString search, QString name_main);
    int check_word_in_word(QString search, QString name_main);
    int check_no_name(QString search, QString name_main);
    void add_apps_to_listWidget(QList<QList<QString>> list_result);
    void layout_title_app(QList<QString> data_app);
	
	// other
	void add_count_new_messages(QString count);
	
private:
    Ui::autorization_mainwindow *ui;
	popup *popUp;
    sql_database database;
	QThread thread_message;
	thread_new_messages thread;
	QPoint m_mousePoint;
};

#endif // AUTORIZATION_MAINWINDOW_H
