/********************************************************************************
** Form generated from reading UI file 'window_registration.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REGISTRATION_H
#define UI_WINDOW_REGISTRATION_H

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

class Ui_window_registration
{
public:
    QFrame *frame;
    QFrame *frame_3;
    QPushButton *close;
    QPushButton *hide;
    QLabel *label_9;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *window_registration)
    {
        if (window_registration->objectName().isEmpty())
            window_registration->setObjectName(QStringLiteral("window_registration"));
        window_registration->resize(389, 273);
        window_registration->setMinimumSize(QSize(381, 266));
        window_registration->setMaximumSize(QSize(32423, 234234));
        window_registration->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(window_registration);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 381, 266));
        frame->setMinimumSize(QSize(381, 266));
        frame->setMaximumSize(QSize(381, 266));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 381, 36));
        frame_3->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame_3);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(350, 5, 26, 26));
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
        hide->setGeometry(QRect(320, 5, 26, 26));
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
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 235, 366, 21));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label_2->setFont(font1);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setStyleSheet(QStringLiteral("font-size: 14px;"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 190, 151, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 105, 226, 31));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding: 2px 5px;\n"
"font-size: 14px;"));
        lineEdit->setClearButtonEnabled(true);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(115, 60, 161, 26));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("font-size: 22px;"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 145, 226, 31));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: #404040;\n"
"border-radius: 5px;\n"
"padding: 2px 5px;\n"
"font-size: 14px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setClearButtonEnabled(true);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 45, 36, 31));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-top: 5px;\n"
"	font-size: 22px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));

        retranslateUi(window_registration);

        QMetaObject::connectSlotsByName(window_registration);
    } // setupUi

    void retranslateUi(QDialog *window_registration)
    {
        window_registration->setWindowTitle(QApplication::translate("window_registration", "Registration", Q_NULLPTR));
        close->setText(QApplication::translate("window_registration", "\342\234\230", Q_NULLPTR));
        hide->setText(QApplication::translate("window_registration", "_", Q_NULLPTR));
        label_9->setText(QApplication::translate("window_registration", "Registration", Q_NULLPTR));
        label_2->setText(QApplication::translate("window_registration", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\217 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270", Q_NULLPTR));
        pushButton->setText(QApplication::translate("window_registration", "\320\227\320\260\321\200\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("window_registration", "\320\233\320\276\320\263\320\270\320\275", Q_NULLPTR));
        label->setText(QApplication::translate("window_registration", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("window_registration", "\320\237\320\260\321\200\320\276\320\273\321\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("window_registration", "\360\237\241\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class window_registration: public Ui_window_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REGISTRATION_H
