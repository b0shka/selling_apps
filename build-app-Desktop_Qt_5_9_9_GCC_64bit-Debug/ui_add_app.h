/********************************************************************************
** Form generated from reading UI file 'add_app.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_APP_H
#define UI_ADD_APP_H

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

class Ui_add_app
{
public:
    QFrame *frame;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QFrame *frame_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;

    void setupUi(QDialog *add_app)
    {
        if (add_app->objectName().isEmpty())
            add_app->setObjectName(QStringLiteral("add_app"));
        add_app->resize(413, 394);
        add_app->setMinimumSize(QSize(413, 394));
        add_app->setMaximumSize(QSize(413, 394));
        QFont font;
        font.setPointSize(1);
        add_app->setFont(font);
        add_app->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(add_app);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 406, 386));
        frame->setMinimumSize(QSize(3, 3));
        frame->setMaximumSize(QSize(3432432, 2432423));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(15, 165, 176, 31));
        lineEdit_3->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(285, 345, 111, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(200, 85, 196, 151));
        textEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(15, 85, 176, 31));
        lineEdit->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 271, 21));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("font-size: 19px;"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(15, 125, 176, 31));
        lineEdit_2->setStyleSheet(QLatin1String("padding: 2px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 350, 266, 21));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 406, 36));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(375, 5, 26, 26));
        pushButton_8->setFont(font1);
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
        pushButton_9->setGeometry(QRect(345, 5, 26, 26));
        pushButton_9->setFont(font1);
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
        label_8->setGeometry(QRect(120, 10, 71, 16));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(15, 245, 121, 91));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: #3b3b3b"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(145, 245, 121, 91));
        label_3->setStyleSheet(QStringLiteral("background-color: #3b3b3b"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(275, 245, 121, 91));
        label_4->setStyleSheet(QStringLiteral("background-color: #3b3b3b"));
        label_4->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(15, 205, 176, 31));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(115, 245, 21, 21));
        pushButton_10->setFont(font1);
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
        pushButton_11->setGeometry(QRect(245, 245, 21, 21));
        pushButton_11->setFont(font1);
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
        pushButton_12->setGeometry(QRect(375, 245, 21, 21));
        pushButton_12->setFont(font1);
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

        retranslateUi(add_app);

        QMetaObject::connectSlotsByName(add_app);
    } // setupUi

    void retranslateUi(QDialog *add_app)
    {
        add_app->setWindowTitle(QApplication::translate("add_app", "Add app", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("add_app", "\320\247\320\265\321\200\320\265\320\267 ;", Q_NULLPTR));
        pushButton->setText(QApplication::translate("add_app", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", Q_NULLPTR));
        textEdit->setPlaceholderText(QApplication::translate("add_app", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("add_app", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label->setText(QApplication::translate("add_app", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("add_app", "\320\246\320\265\320\275\320\260", Q_NULLPTR));
        label_5->setText(QString());
        pushButton_8->setText(QApplication::translate("add_app", "\342\234\230", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("add_app", "_", Q_NULLPTR));
        label_8->setText(QApplication::translate("add_app", "Add app", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_2->setText(QApplication::translate("add_app", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("add_app", "\342\234\230", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("add_app", "\342\234\230", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("add_app", "\342\234\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_app: public Ui_add_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_APP_H
