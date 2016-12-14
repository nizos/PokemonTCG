/********************************************************************************
** Form generated from reading UI file 'cardview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDVIEW_H
#define UI_CARDVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CardView
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCardImage;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidgetUser;
    QTreeWidget *treeWidgetMain;
    QTreeWidget *treeWidgetFull;

    void setupUi(QDialog *CardView)
    {
        if (CardView->objectName().isEmpty())
            CardView->setObjectName(QStringLiteral("CardView"));
        CardView->resize(531, 612);
        widget = new QWidget(CardView);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 513, 594));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelCardImage = new QLabel(widget);
        labelCardImage->setObjectName(QStringLiteral("labelCardImage"));
        labelCardImage->setMinimumSize(QSize(245, 342));
        labelCardImage->setMaximumSize(QSize(245, 342));

        horizontalLayout->addWidget(labelCardImage);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidgetUser = new QTreeWidget(widget);
        new QTreeWidgetItem(treeWidgetUser);
        new QTreeWidgetItem(treeWidgetUser);
        new QTreeWidgetItem(treeWidgetUser);
        treeWidgetUser->setObjectName(QStringLiteral("treeWidgetUser"));
        treeWidgetUser->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(treeWidgetUser);

        treeWidgetMain = new QTreeWidget(widget);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        new QTreeWidgetItem(treeWidgetMain);
        treeWidgetMain->setObjectName(QStringLiteral("treeWidgetMain"));

        verticalLayout->addWidget(treeWidgetMain);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        treeWidgetFull = new QTreeWidget(widget);
        treeWidgetFull->setObjectName(QStringLiteral("treeWidgetFull"));
        treeWidgetFull->setMaximumSize(QSize(16777215, 240));

        verticalLayout_2->addWidget(treeWidgetFull);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 5);

        retranslateUi(CardView);

        QMetaObject::connectSlotsByName(CardView);
    } // setupUi

    void retranslateUi(QDialog *CardView)
    {
        CardView->setWindowTitle(QApplication::translate("CardView", "Dialog", 0));
        labelCardImage->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetUser->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("CardView", "Description", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("CardView", "Name", 0));

        const bool __sortingEnabled = treeWidgetUser->isSortingEnabled();
        treeWidgetUser->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetUser->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("CardView", "Status", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetUser->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("CardView", "Condition", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidgetUser->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("CardView", "Album", 0));
        treeWidgetUser->setSortingEnabled(__sortingEnabled);

        QTreeWidgetItem *___qtreewidgetitem4 = treeWidgetMain->headerItem();
        ___qtreewidgetitem4->setText(1, QApplication::translate("CardView", "Description", 0));
        ___qtreewidgetitem4->setText(0, QApplication::translate("CardView", "Name", 0));

        const bool __sortingEnabled1 = treeWidgetMain->isSortingEnabled();
        treeWidgetMain->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidgetMain->topLevelItem(0);
        ___qtreewidgetitem5->setText(1, QApplication::translate("CardView", "001", 0));
        ___qtreewidgetitem5->setText(0, QApplication::translate("CardView", "ID", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidgetMain->topLevelItem(1);
        ___qtreewidgetitem6->setText(1, QApplication::translate("CardView", "Pikatchu", 0));
        ___qtreewidgetitem6->setText(0, QApplication::translate("CardView", "Name", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidgetMain->topLevelItem(2);
        ___qtreewidgetitem7->setText(0, QApplication::translate("CardView", "Subtype", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidgetMain->topLevelItem(3);
        ___qtreewidgetitem8->setText(0, QApplication::translate("CardView", "Supertype", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidgetMain->topLevelItem(4);
        ___qtreewidgetitem9->setText(0, QApplication::translate("CardView", "Number", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidgetMain->topLevelItem(5);
        ___qtreewidgetitem10->setText(1, QApplication::translate("CardView", "Yoko", 0));
        ___qtreewidgetitem10->setText(0, QApplication::translate("CardView", "Artist", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = treeWidgetMain->topLevelItem(6);
        ___qtreewidgetitem11->setText(1, QApplication::translate("CardView", "Rare Holo", 0));
        ___qtreewidgetitem11->setText(0, QApplication::translate("CardView", "Rarity", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = treeWidgetMain->topLevelItem(7);
        ___qtreewidgetitem12->setText(1, QApplication::translate("CardView", "Generations", 0));
        ___qtreewidgetitem12->setText(0, QApplication::translate("CardView", "Series", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = treeWidgetMain->topLevelItem(8);
        ___qtreewidgetitem13->setText(1, QApplication::translate("CardView", "xy-7", 0));
        ___qtreewidgetitem13->setText(0, QApplication::translate("CardView", "Set", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = treeWidgetMain->topLevelItem(9);
        ___qtreewidgetitem14->setText(0, QApplication::translate("CardView", "Set code", 0));
        treeWidgetMain->setSortingEnabled(__sortingEnabled1);

        QTreeWidgetItem *___qtreewidgetitem15 = treeWidgetFull->headerItem();
        ___qtreewidgetitem15->setText(1, QApplication::translate("CardView", "Description", 0));
        ___qtreewidgetitem15->setText(0, QApplication::translate("CardView", "Name", 0));
    } // retranslateUi

};

namespace Ui {
    class CardView: public Ui_CardView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDVIEW_H
