/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionFind;
    QAction *actionFine;
    QAction *actionSort;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionHelp;
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayoutMain;
    QHBoxLayout *horizontalLayoutFind;
    QLabel *labelFindPokemon;
    QLineEdit *lineEditFindPokemon;
    QPushButton *pushButtonFindPokemon;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(628, 468);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionFine = new QAction(MainWindow);
        actionFine->setObjectName(QStringLiteral("actionFine"));
        actionSort = new QAction(MainWindow);
        actionSort->setObjectName(QStringLiteral("actionSort"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(8, 10, 611, 391));
        verticalLayoutMain = new QVBoxLayout(widget);
        verticalLayoutMain->setSpacing(6);
        verticalLayoutMain->setContentsMargins(11, 11, 11, 11);
        verticalLayoutMain->setObjectName(QStringLiteral("verticalLayoutMain"));
        verticalLayoutMain->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutFind = new QHBoxLayout();
        horizontalLayoutFind->setSpacing(6);
        horizontalLayoutFind->setObjectName(QStringLiteral("horizontalLayoutFind"));
        labelFindPokemon = new QLabel(widget);
        labelFindPokemon->setObjectName(QStringLiteral("labelFindPokemon"));

        horizontalLayoutFind->addWidget(labelFindPokemon);

        lineEditFindPokemon = new QLineEdit(widget);
        lineEditFindPokemon->setObjectName(QStringLiteral("lineEditFindPokemon"));

        horizontalLayoutFind->addWidget(lineEditFindPokemon);

        pushButtonFindPokemon = new QPushButton(widget);
        pushButtonFindPokemon->setObjectName(QStringLiteral("pushButtonFindPokemon"));

        horizontalLayoutFind->addWidget(pushButtonFindPokemon);


        verticalLayoutMain->addLayout(horizontalLayoutFind);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 628, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionFind);
        menuFile->addSeparator();
        menuFile->addAction(actionFine);
        menuFile->addAction(actionSort);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionHelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Pokemon library", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionFind->setText(QApplication::translate("MainWindow", "Save", 0));
        actionFine->setText(QApplication::translate("MainWindow", "Find", 0));
        actionSort->setText(QApplication::translate("MainWindow", "Sort", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        labelFindPokemon->setText(QApplication::translate("MainWindow", "Find Pokemon card:", 0));
        lineEditFindPokemon->setPlaceholderText(QApplication::translate("MainWindow", "ID number", 0));
        pushButtonFindPokemon->setText(QApplication::translate("MainWindow", "Show", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
