﻿#ifndef AUTORIZATION_MAINWINDOW_H
#define AUTORIZATION_MAINWINDOW_H

#include <QDialog>
#include "../mainwindow/mainwindow.h"
#include "../popup/popup.h"

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
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
	void on_pushButton_5_clicked();
	void on_pushButton_6_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void keyPressEvent(QKeyEvent *event);
    void on_lineEdit_returnPressed();

    // функции для работы с записями и поиском
    void get_name_app_from_db();
    void search_result(QString search);
    int check_error(QString search, QString name_main);
    int check_word_in_word(QString search, QString name_main);
    int check_no_name(QString search, QString name_main);
    void add_apps_to_listWidget(QList<QList<QString>> list_result);
    void layout_title_app(QList<QString> data_app);
	
private:
    Ui::autorization_mainwindow *ui;
	popup *popUp;
    sql_database database;
};

#endif // AUTORIZATION_MAINWINDOW_H
