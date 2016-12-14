#include "cardview.h"
#include "ui_cardview.h"

CardView::CardView(QWidget *parent, PokemonCard* poke) :
    QDialog(parent),
    ui(new Ui::CardView)
{
    ui->setupUi(this);
    ui->treeWidgetFull->setColumnCount(2);

    // Display card image
    QString imgPath = ":/cards/Images/1.png";
    QPixmap pokePic = (imgPath);
    ui->labelCardImage->setPixmap(pokePic);

    // Display data
    AddMain("ID", poke->getID());
    AddMain("Name", poke->getName());
    AddMain("Subtype", poke->getSubtype());
    AddMain("Supertype", poke->getSupertype());
    AddMain("Number", QString::number(poke->getNumber()));
    AddMain("Artist", poke->getArtist());
    AddMain("Rarity", poke->getRarity());
    AddMain("Series", poke->getSeries());
    AddMain("Set", poke->getSet());
    AddMain("Set code", poke->getSetCode());
    AddUser("Status", poke->getStatus());
    AddUser("Condition", poke->getCondition());
    AddUser("Album", "pokeAlbum");


    QTreeWidgetItem *abilitiesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    abilitiesPntr->setText(0,"Abilities");
    abilitiesPntr->setText(1,QString::number(poke->getNrOfAbilities()));
    ui->treeWidgetFull->addTopLevelItem(abilitiesPntr);

    QTreeWidgetItem *attacksPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    attacksPntr->setText(0,"Attacks");
    attacksPntr->setText(1,QString::number(poke->getNrOfAttacks()));
    ui->treeWidgetFull->addTopLevelItem(attacksPntr);

    QTreeWidgetItem *resistancesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    resistancesPntr->setText(0,"Resistances");
    resistancesPntr->setText(1,QString::number(poke->getNrOfResistances()));
    ui->treeWidgetFull->addTopLevelItem(resistancesPntr);

    QTreeWidgetItem *typesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    typesPntr->setText(0,"Types");
    typesPntr->setText(1,QString::number(poke->getNrOfTypes()));
    ui->treeWidgetFull->addTopLevelItem(typesPntr);

    QTreeWidgetItem *weaknessesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    weaknessesPntr->setText(0,"Weaknesses");
    weaknessesPntr->setText(1,QString::number(poke->getNrOfWeaknesses()));
    ui->treeWidgetFull->addTopLevelItem(weaknessesPntr);

    // Abilities
    for(int i = 0; i < poke->getNrOfAbilities();i++)
    {
        Ability* abilityPntr = poke->getAbility(i);
        AddAbility(abilitiesPntr,abilityPntr,i);
    }

    // Attacks
    for(int i = 0; i < poke->getNrOfAttacks();i++)
    {
        Attack* attackPntr = poke->getAttack(i);
        AddAttack(attacksPntr,attackPntr,i);
    }

    // Resistances
    for(int i = 0; i < poke->getNrOfResistances();i++)
    {
        Resistance* resistancePntr = poke->getResistance(i);
        AddResistance(resistancesPntr,resistancePntr,i);
    }

    // Types
    for(int i = 0; i < poke->getNrOfTypes();i++)
    {
        Type* typePntr = poke->getType(i);
        AddType(typesPntr,typePntr,i);
    }

    // Weaknesses
    for(int i = 0; i < poke->getNrOfWeaknesses();i++)
    {
        Weakness* weaknessPntr = poke->getWeakness(i);
        AddWeakness(weaknessesPntr,weaknessPntr,i);
    }


}

void CardView::AddRoot(QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidgetFull);
    itm->setText(0,name);
    itm->setText(1,description);
    ui->treeWidgetFull->addTopLevelItem(itm);
}

void CardView::AddChild(QTreeWidgetItem *parent, QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0,name);
    itm->setText(1,description);
    parent->addChild(itm);

}


void CardView::AddMain(QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidgetMain);
    itm->setText(0,name);
    itm->setText(1,description);
    ui->treeWidgetFull->addTopLevelItem(itm);
}

void CardView::AddUser(QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidgetUser);
    itm->setText(0,name);
    itm->setText(1,description);
    ui->treeWidgetFull->addTopLevelItem(itm);
}

void CardView::AddAbility(QTreeWidgetItem *parent, Ability* abilityPntr, int i)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    QString title = "Ability " + QString::number(i+1);
    itm->setText(0,title);
    itm->setText(1," ");
    parent->addChild(itm);
    AddChild(itm, "Name", abilityPntr->getAbilityName());
    AddChild(itm, "Type", abilityPntr->getAbilityType());
    AddChild(itm, "Text", abilityPntr->getAbilityText());
}

void CardView::AddAttack(QTreeWidgetItem *parent, Attack* attackPntr, int i)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    QString title = "Attack " + QString::number(i+1);
    itm->setText(0,title);
    itm->setText(1," ");
    parent->addChild(itm);
    AddChild(itm, "Name", attackPntr->getAttackName());
    AddChild(itm, "Damage", attackPntr->getAttackDamage());
    AddChild(itm, "Cost", attackPntr->getAttackCost());
    AddChild(itm, "Converted Energy Cost", attackPntr->getAttackConvertedEnergyCost());
    AddChild(itm, "Text", attackPntr->getAttackText());
}

void CardView::AddResistance(QTreeWidgetItem *parent, Resistance* resistancePntr, int i)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    QString title = "Resistance " + QString::number(i+1);
    itm->setText(0,title);
    itm->setText(1," ");
    parent->addChild(itm);
    AddChild(itm, "Type", resistancePntr->getResistanceType());
    AddChild(itm, "Value", resistancePntr->getResistanceValue());
}

void CardView::AddType(QTreeWidgetItem *parent, Type* typePntr, int i)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    QString title = "Type " + QString::number(i+1);
    itm->setText(0,title);
    itm->setText(1," ");
    parent->addChild(itm);
    AddChild(itm, "Name", typePntr->getTypeName());
}

void CardView::AddWeakness(QTreeWidgetItem *parent, Weakness* weaknessPntr, int i)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    QString title = "Weakness " + QString::number(i+1);
    itm->setText(0,title);
    itm->setText(1," ");
    parent->addChild(itm);
    AddChild(itm, "Type", weaknessPntr->getWeaknessType());
    AddChild(itm, "Value", weaknessPntr->getWeaknessValue());
}


CardView::~CardView()
{
    delete ui;
}
