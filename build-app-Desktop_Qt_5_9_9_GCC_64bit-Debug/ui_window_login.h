/********************************************************************************
** Form generated from reading UI file 'window_login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_LOGIN_H
#define UI_WINDOW_LOGIN_H

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

QT_BEGIN_NAMESPACE

class Ui_window_login
{
public:
    QFrame *frame;
    QFrame *frame_3;
    QPushButton *close;
    QPushButton *hide;
    QLabel *label_9;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *window_login)
    {
        if (window_login->objectName().isEmpty())
            window_login->setObjectName(QStringLiteral("window_login"));
        window_login->resize(382, 297);
        window_login->setMinimumSize(QSize(3, 270));
        window_login->setMaximumSize(QSize(23123, 16777215));
        window_login->setStyleSheet(QStringLiteral(""));
        window_login->setModal(false);
        frame = new QFrame(window_login);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 376, 291));
        frame->setMinimumSize(QSize(376, 291));
        frame->setMaximumSize(QSize(376, 291));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 376, 36));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame_3);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(345, 5, 26, 26));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
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
        hide->setGeometry(QRect(315, 5, 26, 26));
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
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 10, 101, 16));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(105, 50, 171, 26));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("font-size: 22px;"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(75, 95, 226, 31));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding: 2px 5px;\n"
"font-size: 14px;"));
        lineEdit->setClearButtonEnabled(true);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(75, 135, 226, 31));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding: 2px 5px;\n"
"font-size: 14px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setClearButtonEnabled(true);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 180, 136, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(95, 220, 186, 31));
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
        label_3->setGeometry(QRect(5, 260, 366, 21));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("font-size: 14px;"));
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(window_login);

        QMetaObject::connectSlotsByName(window_login);
    } // setupUi

    void retranslateUi(QDialog *window_login)
    {
        window_login->setWindowTitle(QApplication::translate("window_login", "Login", Q_NULLPTR));
        close->setText(QApplication::translate("window_login", "\342\234\230", Q_NULLPTR));
        hide->setText(QApplication::translate("window_login", "_", Q_NULLPTR));
        label_9->setText(QApplication::translate("window_login", "Autorization", Q_NULLPTR));
        label->setText(QApplication::translate("window_login", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("window_login", "\320\233\320\276\320\263\320\270\320\275", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("window_login", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        pushButton->setText(QApplication::translate("window_login", "\320\222\320\276\320\271\321\202\320\270", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("window_login", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("window_login", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\217 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window_login: public Ui_window_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_LOGIN_H
