#include "developper_app.h"
#include "ui_developper_app.h"

developper_app::developper_app(QString login , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::developper_app)
{
    ui->setupUi(this);
    ui->label_7->setText(login);
    user_name_dev = login;
    get_info_from_db(login);
}

developper_app::~developper_app()
{
    delete ui;
}

void developper_app::get_info_from_db(QString login)
{
    QList<QString> data = developer_info.get_info_for_profile(login);
    if (data.at(0) != "ERROR")
    {
        ui->label_2->setText(data.at(0));
        ui->label_8->setText(data.at(1));
        ui->label_9->setText(data.at(2));
    }
}

void developper_app::on_pushButton_2_clicked()
{

}
