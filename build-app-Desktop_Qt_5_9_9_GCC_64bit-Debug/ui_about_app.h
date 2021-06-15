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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_about_app
{
public:
    QFrame *frame;
    QPushButton *messages;
    QLabel *label_3;
    QPushButton *favorite_del;
    QLabel *label_6;
    QLabel *label;
    QPushButton *favorite_add;
    QLabel *label_2;
    QLabel *label_7;
    QPushButton *login_dev;
    QLabel *label_5;
    QPushButton *star_del;
    QLabel *label_4;
    QPushButton *star_add;
    QFrame *frame_3;
    QPushButton *close;
    QPushButton *hide;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QDialog *about_app)
    {
        if (about_app->objectName().isEmpty())
            about_app->setObjectName(QStringLiteral("about_app"));
        about_app->resize(613, 402);
        about_app->setMinimumSize(QSize(605, 4));
        about_app->setMaximumSize(QSize(5453425, 5345235));
        about_app->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(about_app);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 606, 396));
        frame->setMinimumSize(QSize(606, 396));
        frame->setMaximumSize(QSize(606, 396));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        messages = new QPushButton(frame);
        messages->setObjectName(QStringLiteral("messages"));
        messages->setGeometry(QRect(340, 360, 41, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        messages->setFont(font);
        messages->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-top: 2px;\n"
"	font-size: 30px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(475, 50, 116, 26));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("font-size: 18px;"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        favorite_del = new QPushButton(frame);
        favorite_del->setObjectName(QStringLiteral("favorite_del"));
        favorite_del->setGeometry(QRect(425, 360, 176, 31));
        favorite_del->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 110, 311, 146));
        label_6->setStyleSheet(QStringLiteral("font-size: 14px;"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 50, 406, 26));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("font-size: 22px;"));
        favorite_add = new QPushButton(frame);
        favorite_add->setObjectName(QStringLiteral("favorite_add"));
        favorite_add->setGeometry(QRect(425, 360, 176, 31));
        favorite_add->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(15, 85, 81, 21));
        label_2->setStyleSheet(QStringLiteral("font-size:15px;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(355, 110, 231, 146));
        label_7->setStyleSheet(QStringLiteral("font-size: 14px;"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7->setWordWrap(true);
        login_dev = new QPushButton(frame);
        login_dev->setObjectName(QStringLiteral("login_dev"));
        login_dev->setGeometry(QRect(115, 365, 161, 21));
        login_dev->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 85, 96, 21));
        label_5->setStyleSheet(QStringLiteral("font-size:15px;"));
        star_del = new QPushButton(frame);
        star_del->setObjectName(QStringLiteral("star_del"));
        star_del->setGeometry(QRect(385, 360, 36, 31));
        star_del->setFont(font);
        star_del->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 18px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 365, 101, 21));
        QFont font2;
        font2.setItalic(true);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: silver;"));
        star_add = new QPushButton(frame);
        star_add->setObjectName(QStringLiteral("star_add"));
        star_add->setGeometry(QRect(385, 360, 36, 31));
        star_add->setFont(font);
        star_add->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 18px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 606, 36));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame_3);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(575, 5, 26, 26));
        close->setFont(font);
        close->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        hide = new QPushButton(frame_3);
        hide->setObjectName(QStringLiteral("hide"));
        hide->setGeometry(QRect(545, 5, 26, 26));
        hide->setFont(font);
        hide->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 4px;\n"
"	font-size: 20px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #2a2a2a;\n"
"}"));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(245, 10, 86, 16));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 265, 121, 91));
        QFont font3;
        font3.setPointSize(1);
        label_9->setFont(font3);
        label_9->setStyleSheet(QStringLiteral("background-color: #2a2a2a"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(140, 265, 121, 91));
        label_10->setFont(font3);
        label_10->setStyleSheet(QStringLiteral("background-color: #2a2a2a"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(270, 265, 121, 91));
        label_11->setFont(font3);
        label_11->setStyleSheet(QStringLiteral("background-color: #2a2a2a"));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(315, 365, 21, 26));
        QFont font4;
        label_12->setFont(font4);
        label_12->setStyleSheet(QLatin1String("font-size: 20px;\n"
"color: silver;"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13 = new QLabel(frame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(280, 365, 31, 21));
        label_13->setFont(font4);
        label_13->setStyleSheet(QLatin1String("font-size: 12px;\n"
"color: silver;"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(about_app);

        QMetaObject::connectSlotsByName(about_app);
    } // setupUi

    void retranslateUi(QDialog *about_app)
    {
        about_app->setWindowTitle(QApplication::translate("about_app", "About app", Q_NULLPTR));
        messages->setText(QApplication::translate("about_app", "\342\234\211", Q_NULLPTR));
        label_3->setText(QString());
        favorite_del->setText(QApplication::translate("about_app", "\320\243\320\261\321\200\320\260\321\202\321\214 \320\270\320\267 \320\270\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276", Q_NULLPTR));
        label_6->setText(QString());
        label->setText(QString());
        favorite_add->setText(QApplication::translate("about_app", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\270\320\267\320\261\321\200\320\260\320\275\320\275\320\276\320\265", Q_NULLPTR));
        label_2->setText(QApplication::translate("about_app", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_7->setText(QString());
        login_dev->setText(QString());
        label_5->setText(QApplication::translate("about_app", "\320\242\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\270", Q_NULLPTR));
        star_del->setText(QApplication::translate("about_app", "\342\230\205", Q_NULLPTR));
        label_4->setText(QApplication::translate("about_app", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272:", Q_NULLPTR));
        star_add->setText(QApplication::translate("about_app", "\342\230\206", Q_NULLPTR));
        close->setText(QApplication::translate("about_app", "\342\234\230", Q_NULLPTR));
        hide->setText(QApplication::translate("about_app", "_", Q_NULLPTR));
        label_8->setText(QApplication::translate("about_app", "About app", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QApplication::translate("about_app", "\360\237\221\201", Q_NULLPTR));
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class about_app: public Ui_about_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_APP_H
