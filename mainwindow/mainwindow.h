#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPoint>
#include "about_app/about_app.h"
#include "../filter_search/filter_search.h"
#include "../sql_database/sql_database.h"
#include "../main_data/data.h"
#include "../popup/popup.h"
#include "../main_data/logger.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
	void get_name_app_from_db();

private slots:
    // функции для кнопок
    void on_login_clicked();
    void on_filter_clicked();
	void on_update_clicked();
	void on_close_clicked();
	void on_hide_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
	void on_lineEdit_returnPressed();
    void keyPressEvent(QKeyEvent *event);
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);

    // функции для работы с записями и поиском
    void search_result(QString search);
    int check_error(QString search, QString name_main);
    int check_word_in_word(QString search, QString name_main);
    int check_word_in_word_no_name(QString search, QString name_main);
    void add_apps_to_listWidget(QList<QList<QString>> list_result);
    void layout_title_app(QList<QString> data_app);
	
	// для работы с авторизацией
	void change_mainwindow();
	
private:
    Ui::MainWindow *ui;
    sql_database database;
	QPoint m_mousePoint;
	popup *popUp;
};
#endif // MAINWINDOW_H
