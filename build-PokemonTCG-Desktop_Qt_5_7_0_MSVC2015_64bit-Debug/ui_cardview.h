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
#include <QtWidgets/QLineEdit>
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
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
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
        treeWidgetUser->setObjectName(QStringLiteral("treeWidgetUser"));
        treeWidgetUser->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(treeWidgetUser);

        treeWidgetMain = new QTreeWidget(widget);
        treeWidgetMain->setObjectName(QStringLiteral("treeWidgetMain"));

        verticalLayout->addWidget(treeWidgetMain);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        treeWidgetFull = new QTreeWidget(widget);
        treeWidgetFull->setObjectName(QStringLiteral("treeWidgetFull"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidgetFull->sizePolicy().hasHeightForWidth());
        treeWidgetFull->setSizePolicy(sizePolicy);
        treeWidgetFull->setMaximumSize(QSize(16777215, 240));
        treeWidgetFull->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        treeWidgetFull->setAlternatingRowColors(false);
        treeWidgetFull->setAnimated(false);
        treeWidgetFull->setWordWrap(true);
        treeWidgetFull->header()->setDefaultSectionSize(200);
        treeWidgetFull->header()->setMinimumSectionSize(33);
        treeWidgetFull->header()->setStretchLastSection(true);

        verticalLayout_2->addWidget(treeWidgetFull);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(2, 5);

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
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetMain->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("CardView", "Description", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("CardView", "Name", 0));
        label->setText(QApplication::translate("CardView", "Search", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetFull->headerItem();
        ___qtreewidgetitem2->setText(1, QApplication::translate("CardView", "Description", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("CardView", "Name", 0));
    } // retranslateUi

};

namespace Ui {
    class CardView: public Ui_CardView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDVIEW_H
