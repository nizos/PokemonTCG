/********************************************************************************
** Form generated from reading UI file 'viewcard.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCARD_H
#define UI_VIEWCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewCard
{
public:
    QLabel *label;

    void setupUi(QWidget *ViewCard)
    {
        if (ViewCard->objectName().isEmpty())
            ViewCard->setObjectName(QStringLiteral("ViewCard"));
        ViewCard->resize(537, 363);
        label = new QLabel(ViewCard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 150, 47, 13));

        retranslateUi(ViewCard);

        QMetaObject::connectSlotsByName(ViewCard);
    } // setupUi

    void retranslateUi(QWidget *ViewCard)
    {
        ViewCard->setWindowTitle(QApplication::translate("ViewCard", "Form", 0));
        label->setText(QApplication::translate("ViewCard", "Hello!", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewCard: public Ui_ViewCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCARD_H
