#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class profile;
}

class profile : public QDialog
{
    Q_OBJECT

public:
    explicit profile(QString login, QWidget *parent = nullptr);
    ~profile();
    QString user_name;
    int status_delete = 0;

private slots:
    void get_info_from_db(QString login);
    void on_pushButton_clicked();

private:
    Ui::profile *ui;
};

#endif // PROFILE_H
