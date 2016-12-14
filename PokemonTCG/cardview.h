#ifndef CARDVIEW_H
#define CARDVIEW_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QTreeWidgetItem>
#include "pokemoncard.h"

namespace Ui {
class CardView;
}

class CardView : public QDialog
{
    Q_OBJECT

public:

    explicit CardView(QWidget *parent = 0);


    void AddRoot(QString name, QString description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString description);

    void AddAbility(QTreeWidgetItem *parent, QString abilityName, QString abilityText, QString abilityType);
    void AddAttack(QTreeWidgetItem *parent, QString attackCost, QString attackName, QString attackText, QString attackDamage, QString attackConvertedEnergyCost);
    void AddResistance(QTreeWidgetItem *parent, QString resistanceType, QString resistanceValue);
    void AddType(QTreeWidgetItem *parent, QString typeName);
    void AddWeakness(QTreeWidgetItem *parent, QString weaknessType, QString weaknessValue);

    ~CardView();

private:
    Ui::CardView *ui;
};

#endif // CARDVIEW_H
