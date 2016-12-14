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

    explicit CardView(QWidget *parent = 0, PokemonCard* poke = 0);


    void AddRoot(QString name, QString description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString description);

    void AddMain(QString name, QString description);
    void AddUser(QString name, QString description);

    void AddAbility(QTreeWidgetItem *parent, Ability* abilityPntr, int i);
    void AddAttack(QTreeWidgetItem *parent, Attack* attackPntr, int i);
    void AddResistance(QTreeWidgetItem *parent, Resistance* resistancePntr, int i);
    void AddType(QTreeWidgetItem *parent, Type* typePntr, int i);
    void AddWeakness(QTreeWidgetItem *parent, Weakness* weaknessPntr, int i);

    ~CardView();

private:
    Ui::CardView *ui;
};

#endif // CARDVIEW_H
