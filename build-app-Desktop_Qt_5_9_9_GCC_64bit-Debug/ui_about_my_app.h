/********************************************************************************
** Form generated from reading UI file 'about_my_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_MY_APP_H
#define UI_ABOUT_MY_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_about_my_app
{
public:
    QFrame *frame;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QFrame *frame_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_3;

    void setupUi(QDialog *about_my_app)
    {
        if (about_my_app->objectName().isEmpty())
            about_my_app->setObjectName(QStringLiteral("about_my_app"));
        about_my_app->resize(520, 449);
        about_my_app->setMinimumSize(QSize(336, 410));
        about_my_app->setMaximumSize(QSize(45345, 5435435));
        about_my_app->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(about_my_app);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 511, 441));
        frame->setMinimumSize(QSize(511, 441));
        frame->setMaximumSize(QSize(511, 441));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 365, 96, 21));
        label_5->setStyleSheet(QStringLiteral("font-size: 14px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 256, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("font-size: 19px;"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(115, 360, 211, 31));
        lineEdit_3->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 95, 96, 21));
        label->setStyleSheet(QStringLiteral("font-size: 14px;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 170, 96, 21));
        label_4->setStyleSheet(QStringLiteral("font-size: 14px;"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(115, 90, 211, 31));
        lineEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(115, 170, 211, 181));
        textEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(115, 130, 211, 31));
        lineEdit_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(115, 400, 211, 31));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 135, 61, 21));
        label_3->setStyleSheet(QStringLiteral("font-size: 14px;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 400, 101, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	color: black;\n"
"	background-color: #ffb0be;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 511, 36));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(480, 5, 26, 26));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        pushButton_9 = new QPushButton(frame_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(450, 5, 26, 26));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_8->setGeometry(QRect(210, 10, 111, 16));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(335, 90, 166, 111));
        QFont font1;
        font1.setPointSize(1);
        label_10->setFont(font1);
        label_10->setStyleSheet(QStringLiteral("background-color: #3b3b3b"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(335, 205, 166, 111));
        label_11->setFont(font1);
        label_11->setStyleSheet(QStringLiteral("background-color: #3b3b3b"));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(335, 320, 166, 111));
        label_12->setFont(font1);
        label_12->setStyleSheet(QStringLiteral("background-color: #3b3b3b"));
        label_12->setAlignment(Qt::AlignCenter);
        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(480, 90, 21, 21));
        pushButton_10->setFont(font);
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        pushButton_11 = new QPushButton(frame);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(480, 205, 21, 21));
        pushButton_11->setFont(font);
        pushButton_11->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        pushButton_12 = new QPushButton(frame);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(480, 320, 21, 21));
        pushButton_12->setFont(font);
        pushButton_12->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(335, 50, 166, 31));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));

        retranslateUi(about_my_app);

        QMetaObject::connectSlotsByName(about_my_app);
    } // setupUi

    void retranslateUi(QDialog *about_my_app)
    {
        about_my_app->setWindowTitle(QApplication::translate("about_my_app", "About my app", Q_NULLPTR));
        label_5->setText(QApplication::translate("about_my_app", "\320\242\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\270", Q_NULLPTR));
        label_2->setText(QApplication::translate("about_my_app", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", Q_NULLPTR));
        label->setText(QApplication::translate("about_my_app", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_4->setText(QApplication::translate("about_my_app", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", Q_NULLPTR));
        lineEdit->setText(QString());
        pushButton_2->setText(QApplication::translate("about_my_app", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("about_my_app", "\320\246\320\265\320\275\320\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("about_my_app", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("about_my_app", "\342\234\230", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("about_my_app", "_", Q_NULLPTR));
        label_8->setText(QApplication::translate("about_my_app", "About my app", Q_NULLPTR));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        pushButton_10->setText(QApplication::translate("about_my_app", "\342\234\230", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("about_my_app", "\342\234\230", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("about_my_app", "\342\234\230", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("about_my_app", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class about_my_app: public Ui_about_my_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_MY_APP_H
