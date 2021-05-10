/********************************************************************************
** Form generated from reading UI file 'about_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_APP_H
#define UI_ABOUT_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_about_app
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_7;

    void setupUi(QDialog *about_app)
    {
        if (about_app->objectName().isEmpty())
            about_app->setObjectName(QStringLiteral("about_app"));
        about_app->resize(605, 411);
        about_app->setMinimumSize(QSize(605, 411));
        about_app->setMaximumSize(QSize(605, 411));
        about_app->setStyleSheet(QLatin1String("color: white;\n"
"background-color: #2a2a2a;"));
        label = new QLabel(about_app);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 15, 406, 26));
        label->setStyleSheet(QStringLiteral("font-size: 22px;"));
        label_2 = new QLabel(about_app);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 55, 76, 21));
        label_2->setStyleSheet(QStringLiteral("font-size:15px;"));
        label_3 = new QLabel(about_app);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(470, 15, 116, 26));
        label_3->setStyleSheet(QStringLiteral("font-size: 18px;"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(about_app);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 380, 101, 21));
        QFont font;
        font.setItalic(true);
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: silver;"));
        label_6 = new QLabel(about_app);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 80, 566, 211));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);
        pushButton_2 = new QPushButton(about_app);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 375, 206, 31));
        pushButton_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"height: 28px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        pushButton = new QPushButton(about_app);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(125, 380, 256, 21));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	color: silver;\n"
"	background-color: #2a2a2a;\n"
"	border: none;\n"
"	text-align: left;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	color: white;\n"
"}"));
        label_5 = new QLabel(about_app);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 295, 96, 21));
        label_5->setStyleSheet(QStringLiteral("font-size:15px;"));
        label_7 = new QLabel(about_app);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 320, 566, 46));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7->setWordWrap(true);

        retranslateUi(about_app);

        QMetaObject::connectSlotsByName(about_app);
    } // setupUi

    void retranslateUi(QDialog *about_app)
    {
        about_app->setWindowTitle(QApplication::translate("about_app", "About app", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("about_app", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("about_app", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272:", Q_NULLPTR));
        label_6->setText(QString());
        pushButton_2->setText(QApplication::translate("about_app", "\320\224\320\260\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\270\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", Q_NULLPTR));
        pushButton->setText(QString());
        label_5->setText(QApplication::translate("about_app", "\320\242\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\270", Q_NULLPTR));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class about_app: public Ui_about_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_APP_H
