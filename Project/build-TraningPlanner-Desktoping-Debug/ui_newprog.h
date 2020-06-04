/********************************************************************************
** Form generated from reading UI file 'newprog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROG_H
#define UI_NEWPROG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewProg
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxGend;
    QComboBox *comboBoxAge;
    QComboBox *comboBoxWei;
    QComboBox *comboBoxHei;
    QComboBox *comboBoxCountTrn;
    QComboBox *comboBoxDiff;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Ready;

    void setupUi(QDialog *NewProg)
    {
        if (NewProg->objectName().isEmpty())
            NewProg->setObjectName(QStringLiteral("NewProg"));
        NewProg->resize(456, 215);
        NewProg->setStyleSheet(QStringLiteral("background-image: url(:/res/Icons/x-home-main-extensions-bg-white.jpg);"));
        gridLayout = new QGridLayout(NewProg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(NewProg);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QStringLiteral("Bitstream Charter"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: #353b48;"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(NewProg);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(NewProg);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBoxGend = new QComboBox(NewProg);
        comboBoxGend->setObjectName(QStringLiteral("comboBoxGend"));
        QFont font2;
        font2.setFamily(QStringLiteral("Bitstream Charter"));
        font2.setBold(false);
        font2.setWeight(50);
        comboBoxGend->setFont(font2);
        comboBoxGend->setAutoFillBackground(false);
        comboBoxGend->setStyleSheet(QLatin1String("QComboBox {\n"
"	background-color: rgb(209, 216, 224);\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    min-width: 6em;\n"
"}\n"
""));
        comboBoxGend->setFrame(true);

        horizontalLayout->addWidget(comboBoxGend);

        comboBoxAge = new QComboBox(NewProg);
        comboBoxAge->setObjectName(QStringLiteral("comboBoxAge"));
        comboBoxAge->setFont(font2);
        comboBoxAge->setAutoFillBackground(false);
        comboBoxAge->setStyleSheet(QLatin1String("QComboBox {\n"
"	background-color: rgb(209, 216, 224);\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    min-width: 6em;\n"
"}\n"
""));

        horizontalLayout->addWidget(comboBoxAge);

        comboBoxWei = new QComboBox(NewProg);
        comboBoxWei->setObjectName(QStringLiteral("comboBoxWei"));
        comboBoxWei->setFont(font2);
        comboBoxWei->setAutoFillBackground(false);
        comboBoxWei->setStyleSheet(QLatin1String("QComboBox {\n"
"	background-color: rgb(209, 216, 224);\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    min-width: 6em;\n"
"}\n"
""));

        horizontalLayout->addWidget(comboBoxWei);

        comboBoxHei = new QComboBox(NewProg);
        comboBoxHei->setObjectName(QStringLiteral("comboBoxHei"));
        comboBoxHei->setFont(font2);
        comboBoxHei->setAutoFillBackground(false);
        comboBoxHei->setStyleSheet(QLatin1String("QComboBox {\n"
"	background-color: rgb(209, 216, 224);\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    min-width: 6em;\n"
"}\n"
""));

        horizontalLayout->addWidget(comboBoxHei);


        verticalLayout->addLayout(horizontalLayout);

        comboBoxCountTrn = new QComboBox(NewProg);
        comboBoxCountTrn->setObjectName(QStringLiteral("comboBoxCountTrn"));
        comboBoxCountTrn->setFont(font2);
        comboBoxCountTrn->setAutoFillBackground(false);
        comboBoxCountTrn->setStyleSheet(QLatin1String("QComboBox {\n"
"	background-color: rgb(209, 216, 224);\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    min-width: 5em;\n"
"}\n"
""));

        verticalLayout->addWidget(comboBoxCountTrn);

        comboBoxDiff = new QComboBox(NewProg);
        comboBoxDiff->setObjectName(QStringLiteral("comboBoxDiff"));
        comboBoxDiff->setFont(font2);
        comboBoxDiff->setAutoFillBackground(false);
        comboBoxDiff->setStyleSheet(QLatin1String("QComboBox {\n"
"	background-color: rgb(209, 216, 224);\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    min-width: 5em;\n"
"}\n"
""));

        verticalLayout->addWidget(comboBoxDiff);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(NewProg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String(" QPushButton {\n"
"	border-style: outset;\n"
"	border-width: 3px;\n"
"	border-radius: 10px;\n"
"	border-color: #636e72;\n"
"	min-width: 10em;\n"
"	font: bold 14px;\n"
"	padding: 6px;\n"
" }\n"
"QPushButton#pushButton:pressed {\n"
"	background-color: rgb(92, 53, 102);\n"
"    border-style: inset;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Ready = new QPushButton(NewProg);
        Ready->setObjectName(QStringLiteral("Ready"));
        Ready->setFont(font3);
        Ready->setAutoFillBackground(false);
        Ready->setStyleSheet(QLatin1String(" QPushButton {\n"
"	border-style: outset;\n"
"	border-width: 3px;\n"
"	border-radius: 10px;\n"
"	border-color: #636e72;\n"
"	min-width: 10em;\n"
"	font: bold 14px;\n"
"	padding: 6px;\n"
" }\n"
"QPushButton#Ready:pressed {\n"
"	background-color: rgb(92, 53, 102);\n"
"    border-style: inset;\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(Ready);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(NewProg);

        Ready->setDefault(false);


        QMetaObject::connectSlotsByName(NewProg);
    } // setupUi

    void retranslateUi(QDialog *NewProg)
    {
        NewProg->setWindowTitle(QApplication::translate("NewProg", "Application form", Q_NULLPTR));
        label_4->setText(QApplication::translate("NewProg", "<html><head/><body><p align=\"center\">\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\260\320\275\320\272\320\265\321\202\321\203:</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("NewProg", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\262\320\276\320\271 nickname(\320\270\320\274\321\217):", Q_NULLPTR));
        comboBoxGend->clear();
        comboBoxGend->insertItems(0, QStringList()
         << QApplication::translate("NewProg", "\320\237\320\276\320\273", Q_NULLPTR)
         << QApplication::translate("NewProg", "\320\234\320\243\320\226.", Q_NULLPTR)
         << QApplication::translate("NewProg", "\320\226\320\225\320\235.", Q_NULLPTR)
        );
        comboBoxAge->clear();
        comboBoxAge->insertItems(0, QStringList()
         << QApplication::translate("NewProg", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", Q_NULLPTR)
        );
#ifndef QT_NO_STATUSTIP
        comboBoxAge->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        comboBoxWei->clear();
        comboBoxWei->insertItems(0, QStringList()
         << QApplication::translate("NewProg", "\320\222\320\265\321\201 (\320\272\320\263)", Q_NULLPTR)
        );
        comboBoxHei->clear();
        comboBoxHei->insertItems(0, QStringList()
         << QApplication::translate("NewProg", "\320\240\320\276\321\201\321\202 (\321\201\320\274)", Q_NULLPTR)
        );
        comboBoxCountTrn->clear();
        comboBoxCountTrn->insertItems(0, QStringList()
         << QApplication::translate("NewProg", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272 \320\262 \320\275\320\265\320\264\320\265\320\273\321\216", Q_NULLPTR)
         << QApplication::translate("NewProg", "2", Q_NULLPTR)
         << QApplication::translate("NewProg", "3", Q_NULLPTR)
        );
        comboBoxDiff->clear();
        comboBoxDiff->insertItems(0, QStringList()
         << QApplication::translate("NewProg", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270", Q_NULLPTR)
         << QApplication::translate("NewProg", "\320\233\320\265\320\263\320\272\320\276", Q_NULLPTR)
         << QApplication::translate("NewProg", "\320\235\320\276\321\200\320\274\320\260\320\273\321\214\320\275\320\276", Q_NULLPTR)
         << QApplication::translate("NewProg", "\320\241\320\273\320\276\320\266\320\275\320\276", Q_NULLPTR)
         << QApplication::translate("NewProg", "\320\236\321\207\320\265\320\275\321\214 \321\201\320\273\320\276\320\266\320\275\320\276", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("NewProg", "\320\222\321\213\320\271\321\202\320\270", Q_NULLPTR));
        Ready->setText(QApplication::translate("NewProg", "\320\223\320\276\321\202\320\276\320\262\320\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewProg: public Ui_NewProg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROG_H
