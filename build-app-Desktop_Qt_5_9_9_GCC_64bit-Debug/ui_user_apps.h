/********************************************************************************
** Form generated from reading UI file 'user_apps.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_APPS_H
#define UI_USER_APPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_user_apps
{
public:
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *user_apps)
    {
        if (user_apps->objectName().isEmpty())
            user_apps->setObjectName(QStringLiteral("user_apps"));
        user_apps->resize(301, 425);
        user_apps->setStyleSheet(QLatin1String("background-color: #2a2a2a;\n"
"color: white;"));
        label = new QLabel(user_apps);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 15, 196, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        listWidget = new QListWidget(user_apps);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 50, 291, 376));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QLatin1String("QListWidget {\n"
"	border: none;\n"
"	font-size:15px;\n"
"	background-color: #2a2a2a;\n"
"	color: white;\n"
"	padding: 5px 7px;;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"	padding: 2 px 6px;\n"
"}"));

        retranslateUi(user_apps);

        QMetaObject::connectSlotsByName(user_apps);
    } // setupUi

    void retranslateUi(QDialog *user_apps)
    {
        user_apps->setWindowTitle(QApplication::translate("user_apps", "List apps", Q_NULLPTR));
        label->setText(QApplication::translate("user_apps", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_apps: public Ui_user_apps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_APPS_H
