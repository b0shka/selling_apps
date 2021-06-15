/********************************************************************************
** Form generated from reading UI file 'filter_search.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTER_SEARCH_H
#define UI_FILTER_SEARCH_H

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

class Ui_filter_search
{
public:
    QFrame *frame;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QFrame *frame_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_13;

    void setupUi(QDialog *filter_search)
    {
        if (filter_search->objectName().isEmpty())
            filter_search->setObjectName(QStringLiteral("filter_search"));
        filter_search->resize(319, 393);
        filter_search->setMinimumSize(QSize(308, 355));
        filter_search->setMaximumSize(QSize(16777215, 3213213));
        filter_search->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(filter_search);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(5, 5, 311, 386));
        frame->setMinimumSize(QSize(311, 386));
        frame->setMaximumSize(QSize(311, 386));
        frame->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(15, 200, 91, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(15, 80, 181, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(15, 120, 171, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(125, 195, 176, 31));
        lineEdit_4->setStyleSheet(QLatin1String("padding: 2px 5px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 196, 21));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 18px;\n"
"color: white;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(15, 160, 106, 21));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 115, 101, 31));
        lineEdit_2->setStyleSheet(QLatin1String("padding: 2px 5px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 75, 101, 31));
        lineEdit->setStyleSheet(QLatin1String("padding: 2px 5px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(185, 345, 116, 31));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(125, 155, 176, 31));
        lineEdit_3->setStyleSheet(QLatin1String("padding: 2px 5px;\n"
"font-size: 14px;\n"
"background-color: #404040;\n"
"border-radius: 5px;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(15, 315, 281, 21));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("font-size: 14px;"));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 345, 171, 31));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 14px;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 311, 26));
        frame_5->setStyleSheet(QLatin1String("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pushButton_8 = new QPushButton(frame_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 5, 16, 16));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"	font-size: 20px;\n"
"	background-color: #f73643;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #d63a44;\n"
"	color: black;\n"
"}"));
        pushButton_9 = new QPushButton(frame_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(265, 5, 16, 16));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"	padding-bottom: 4px;\n"
"	font-size: 20px;\n"
"	background-color: #47fc65;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #49cc5f;\n"
"}"));
        label_13 = new QLabel(frame_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 5, 106, 16));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("font-size: 14px;\n"
"color: white;"));

        retranslateUi(filter_search);

        QMetaObject::connectSlotsByName(filter_search);
    } // setupUi

    void retranslateUi(QDialog *filter_search)
    {
        filter_search->setWindowTitle(QApplication::translate("filter_search", "Filter search", Q_NULLPTR));
        label_7->setText(QApplication::translate("filter_search", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", Q_NULLPTR));
        label_4->setText(QApplication::translate("filter_search", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\206\320\265\320\275\320\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("filter_search", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\206\320\265\320\275\320\260", Q_NULLPTR));
        lineEdit_4->setPlaceholderText(QString());
        label->setText(QApplication::translate("filter_search", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213 \320\277\320\276\320\270\321\201\320\272\320\260", Q_NULLPTR));
        label_6->setText(QApplication::translate("filter_search", "\320\242\320\265\321\205\320\275\320\276\320\273\320\276\320\263\320\270\320\270", Q_NULLPTR));
        pushButton->setText(QApplication::translate("filter_search", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("filter_search", "\320\247\320\265\321\200\320\265\320\267 ;", Q_NULLPTR));
        label_3->setText(QString());
        pushButton_2->setText(QApplication::translate("filter_search", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\204\320\270\320\273\321\214\321\202\321\200\321\213", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_13->setText(QApplication::translate("filter_search", "Filter search", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class filter_search: public Ui_filter_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTER_SEARCH_H
