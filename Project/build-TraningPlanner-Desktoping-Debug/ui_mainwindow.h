/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newP;
    QAction *open;
    QAction *save;
    QAction *exit;
    QAction *about;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonCreate;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButtonOpen;
    QSpacerItem *verticalSpacer_5;
    QPushButton *SaveFile;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonQuit;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1099, 654);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/Icons/heartbeat.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-image: url(:/res/Icons/x-home-main-extensions-bg-white.jpg);"));
        newP = new QAction(MainWindow);
        newP->setObjectName(QStringLiteral("newP"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/Icons/add-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        newP->setIcon(icon1);
        open = new QAction(MainWindow);
        open->setObjectName(QStringLiteral("open"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/Icons/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        open->setIcon(icon2);
        save = new QAction(MainWindow);
        save->setObjectName(QStringLiteral("save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/Icons/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon3);
        exit = new QAction(MainWindow);
        exit->setObjectName(QStringLiteral("exit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/Icons/power-circular-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon4);
        about = new QAction(MainWindow);
        about->setObjectName(QStringLiteral("about"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(528, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: #2c2c54;\n"
"border-radius:8px;"));
        label->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(528, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(228, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButtonCreate = new QPushButton(centralWidget);
        pushButtonCreate->setObjectName(QStringLiteral("pushButtonCreate"));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButtonCreate->setFont(font1);
        pushButtonCreate->setStyleSheet(QLatin1String("  QPushButton {\n"
"	\n"
"	color: rgb(44, 44, 84);\n"
"	background-color: rgb(165, 177, 194);\n"
"	border-style: outset;\n"
"	border-width: 4px;\n"
"	border-radius: 25px;\n"
"	border-color: #006266;\n"
"	font: 24px;\n"
"	padding: 6px;\n"
" }\n"
"QPushButton#pushButtonCreate:pressed {\n"
"	background-color: rgb(92, 53, 102);\n"
"    border-style: inset;\n"
"}\n"
"\n"
""));
        pushButtonCreate->setIcon(icon1);
        pushButtonCreate->setIconSize(QSize(50, 50));
        pushButtonCreate->setAutoRepeat(false);
        pushButtonCreate->setAutoExclusive(false);
        pushButtonCreate->setAutoDefault(false);

        verticalLayout->addWidget(pushButtonCreate);

        verticalSpacer_6 = new QSpacerItem(228, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButtonOpen = new QPushButton(centralWidget);
        pushButtonOpen->setObjectName(QStringLiteral("pushButtonOpen"));
        pushButtonOpen->setFont(font1);
        pushButtonOpen->setStyleSheet(QLatin1String("  QPushButton {\n"
"	color: rgb(44, 44, 84);\n"
"	background-color: rgb(165, 177, 194);\n"
"	border-style: outset;\n"
"	border-width: 4px;\n"
"	border-radius: 25px;\n"
"	border-color: #006266;\n"
"	font: 24px;\n"
"	padding: 6px;\n"
" }\n"
"QPushButton#pushButtonOpen:pressed {\n"
"	background-color: rgb(92, 53, 102);\n"
"    border-style: inset;\n"
"}\n"
"\n"
""));
        pushButtonOpen->setIcon(icon2);
        pushButtonOpen->setIconSize(QSize(50, 50));
        pushButtonOpen->setAutoRepeat(false);
        pushButtonOpen->setAutoExclusive(true);
        pushButtonOpen->setAutoDefault(false);

        verticalLayout->addWidget(pushButtonOpen);

        verticalSpacer_5 = new QSpacerItem(228, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        SaveFile = new QPushButton(centralWidget);
        SaveFile->setObjectName(QStringLiteral("SaveFile"));
        SaveFile->setFont(font1);
        SaveFile->setStyleSheet(QLatin1String("  QPushButton {\n"
"	\n"
"	color: rgb(44, 44, 84);\n"
"	background-color: rgb(165, 177, 194);\n"
"	border-style: outset;\n"
"	border-width: 4px;\n"
"	border-radius: 25px;\n"
"	border-color: #006266;\n"
"	font: 24px;\n"
"	padding: 6px;\n"
" }\n"
"QPushButton#pushButtonCreate:pressed {\n"
"	background-color: rgb(92, 53, 102);\n"
"    border-style: inset;\n"
"}\n"
"\n"
""));
        SaveFile->setIcon(icon3);
        SaveFile->setIconSize(QSize(50, 50));
        SaveFile->setAutoRepeat(false);
        SaveFile->setAutoExclusive(false);
        SaveFile->setAutoDefault(false);

        verticalLayout->addWidget(SaveFile);

        verticalSpacer_7 = new QSpacerItem(228, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonQuit = new QPushButton(centralWidget);
        pushButtonQuit->setObjectName(QStringLiteral("pushButtonQuit"));
        pushButtonQuit->setFont(font1);
        pushButtonQuit->setStyleSheet(QLatin1String("  QPushButton {\n"
"	color: rgb(44, 44, 84);\n"
"	background-color: rgb(165, 177, 194);\n"
"	border-style: outset;\n"
"	border-width: 4px;\n"
"	border-radius: 25px;\n"
"	border-color: #a4b0be;\n"
"	font: 24px;\n"
"	padding: 6px;\n"
" }\n"
"QPushButton#pushButtonQuit:pressed {\n"
"	background-color: rgb(92, 53, 102);\n"
"    border-style: inset;\n"
"}\n"
"\n"
""));
        pushButtonQuit->setIcon(icon4);
        pushButtonQuit->setIconSize(QSize(50, 50));
        pushButtonQuit->setAutoRepeat(false);
        pushButtonQuit->setAutoExclusive(true);
        pushButtonQuit->setAutoDefault(false);

        horizontalLayout->addWidget(pushButtonQuit);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Umpush"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QLatin1String("color: rgb(44, 44, 84);\n"
"border-radius:5px"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QLatin1String("border-radius: 8px;\n"
"background-color: rgb(114, 159, 207);\n"
"border-width:1px;\n"
"border-color: #a4b0be;\n"
"border-style: solid\n"
""));

        verticalLayout_4->addWidget(textBrowser);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1099, 25));
        QFont font3;
        font3.setFamily(QStringLiteral("Bitstream Vera Serif"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        menuBar->setFont(font3);
        menuBar->setStyleSheet(QLatin1String("color: #2c2c54;\n"
"background-color: rgb(209, 216, 224);"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        QFont font4;
        font4.setFamily(QStringLiteral("Bitstream Charter"));
        font4.setBold(false);
        font4.setWeight(50);
        menu->setFont(font4);
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addSeparator();
        menu->addAction(newP);
        menu->addAction(open);
        menu->addAction(save);
        menu->addSeparator();
        menu->addAction(exit);
        menu_3->addSeparator();
        menu_3->addAction(about);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TRANNING PLANNER", Q_NULLPTR));
        newP->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260", Q_NULLPTR));
        open->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214...", Q_NULLPTR));
        save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        about->setText(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217...", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; text-decoration: underline; color:#1b1464;\">\320\230\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\321\213\320\271 \320\277\320\276\320\264\320\261\320\276\321\200 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\201\320\260</span></p><p align=\"center\"><span style=\" font-size:20pt; text-decoration: underline; color:#1b1464;\">\321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\271 \320\275\320\260 \321\203\320\273\320\270\321\206\320\265 \320\270 \320\264\320\276\320\274\320\260</span><span style=\" font-size:20pt; color:#1b1464;\"><br/></span></p></body></html>", Q_NULLPTR));
        pushButtonCreate->setText(QApplication::translate("MainWindow", "   \320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", Q_NULLPTR));
        pushButtonOpen->setText(QApplication::translate("MainWindow", "   \320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", Q_NULLPTR));
        SaveFile->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", Q_NULLPTR));
        pushButtonQuit->setText(QApplication::translate("MainWindow", "   \320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-style:normal; color:#111a42;\">\320\222\320\260\321\210 \320\277\320\273\320\260\320\275 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272:</span></p></body></html>", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
