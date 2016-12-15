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
#include <QtWidgets/QGridLayout>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutMain;
    QHBoxLayout *horizontalLayoutFind;
    QLabel *labelFindPokemon;
    QLineEdit *lineEditFindPokemon;
    QPushButton *pushButtonFindPokemon;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *labelNrOfAlbums;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *labelNameAlbum1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *labelCardsAlbum1;
    QHBoxLayout *horizontalLayout_13;
    QLabel *labelThumbnail1;
    QLabel *labelThumbnail2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *labelThumbnail3;
    QLabel *labelThumbnail4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_18;
    QLabel *labelNameAlbum2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_20;
    QLabel *labelCardsAlbum2;
    QLabel *labelImageAlbum2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(628, 517);
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
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 10, 611, 445));
        verticalLayoutMain = new QVBoxLayout(layoutWidget);
        verticalLayoutMain->setSpacing(6);
        verticalLayoutMain->setContentsMargins(11, 11, 11, 11);
        verticalLayoutMain->setObjectName(QStringLiteral("verticalLayoutMain"));
        verticalLayoutMain->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutFind = new QHBoxLayout();
        horizontalLayoutFind->setSpacing(6);
        horizontalLayoutFind->setObjectName(QStringLiteral("horizontalLayoutFind"));
        labelFindPokemon = new QLabel(layoutWidget);
        labelFindPokemon->setObjectName(QStringLiteral("labelFindPokemon"));

        horizontalLayoutFind->addWidget(labelFindPokemon);

        lineEditFindPokemon = new QLineEdit(layoutWidget);
        lineEditFindPokemon->setObjectName(QStringLiteral("lineEditFindPokemon"));

        horizontalLayoutFind->addWidget(lineEditFindPokemon);

        pushButtonFindPokemon = new QPushButton(layoutWidget);
        pushButtonFindPokemon->setObjectName(QStringLiteral("pushButtonFindPokemon"));

        horizontalLayoutFind->addWidget(pushButtonFindPokemon);


        verticalLayoutMain->addLayout(horizontalLayoutFind);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        labelNrOfAlbums = new QLabel(layoutWidget);
        labelNrOfAlbums->setObjectName(QStringLiteral("labelNrOfAlbums"));

        horizontalLayout->addWidget(labelNrOfAlbums);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayoutMain->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        labelNameAlbum1 = new QLabel(layoutWidget);
        labelNameAlbum1->setObjectName(QStringLiteral("labelNameAlbum1"));

        horizontalLayout_4->addWidget(labelNameAlbum1);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        labelCardsAlbum1 = new QLabel(layoutWidget);
        labelCardsAlbum1->setObjectName(QStringLiteral("labelCardsAlbum1"));

        horizontalLayout_3->addWidget(labelCardsAlbum1);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        labelThumbnail1 = new QLabel(layoutWidget);
        labelThumbnail1->setObjectName(QStringLiteral("labelThumbnail1"));

        horizontalLayout_13->addWidget(labelThumbnail1);

        labelThumbnail2 = new QLabel(layoutWidget);
        labelThumbnail2->setObjectName(QStringLiteral("labelThumbnail2"));

        horizontalLayout_13->addWidget(labelThumbnail2);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        labelThumbnail3 = new QLabel(layoutWidget);
        labelThumbnail3->setObjectName(QStringLiteral("labelThumbnail3"));

        horizontalLayout_14->addWidget(labelThumbnail3);

        labelThumbnail4 = new QLabel(layoutWidget);
        labelThumbnail4->setObjectName(QStringLiteral("labelThumbnail4"));

        horizontalLayout_14->addWidget(labelThumbnail4);


        verticalLayout_3->addLayout(horizontalLayout_14);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_9->addWidget(label_18);

        labelNameAlbum2 = new QLabel(layoutWidget);
        labelNameAlbum2->setObjectName(QStringLiteral("labelNameAlbum2"));

        horizontalLayout_9->addWidget(labelNameAlbum2);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_10->addWidget(label_20);

        labelCardsAlbum2 = new QLabel(layoutWidget);
        labelCardsAlbum2->setObjectName(QStringLiteral("labelCardsAlbum2"));

        horizontalLayout_10->addWidget(labelCardsAlbum2);


        verticalLayout_6->addLayout(horizontalLayout_10);

        labelImageAlbum2 = new QLabel(layoutWidget);
        labelImageAlbum2->setObjectName(QStringLiteral("labelImageAlbum2"));
        labelImageAlbum2->setMinimumSize(QSize(245, 342));

        verticalLayout_6->addWidget(labelImageAlbum2);


        horizontalLayout_2->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayoutMain->addLayout(gridLayout);

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
        label_2->setText(QApplication::translate("MainWindow", "Albums in library: ", 0));
        labelNrOfAlbums->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Album name:", 0));
        labelNameAlbum1->setText(QApplication::translate("MainWindow", "name", 0));
        label_5->setText(QApplication::translate("MainWindow", "Cards in album:", 0));
        labelCardsAlbum1->setText(QApplication::translate("MainWindow", "cards", 0));
        labelThumbnail1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelThumbnail2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelThumbnail3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelThumbnail4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_18->setText(QApplication::translate("MainWindow", "Album name:", 0));
        labelNameAlbum2->setText(QApplication::translate("MainWindow", "name", 0));
        label_20->setText(QApplication::translate("MainWindow", "Cards in album:", 0));
        labelCardsAlbum2->setText(QApplication::translate("MainWindow", "cards", 0));
        labelImageAlbum2->setText(QApplication::translate("MainWindow", "Album image", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
