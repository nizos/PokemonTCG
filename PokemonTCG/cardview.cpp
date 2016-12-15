#include "cardview.h"
#include "ui_cardview.h"

CardView::CardView(QWidget *parent, Card* poke) :
    QDialog(parent),
    ui(new Ui::CardView)
{
    ui->setupUi(this);
    ui->treeWidgetFull->setColumnCount(2);

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

    // Display card image
    QString imgPath = ":/cards/Images/";
    imgPath.append(QString::number(poke->getNumber()));
    imgPath.append(".png");
    QPixmap pokePic = (imgPath);
    ui->labelCardImage->setPixmap(pokePic);


    QTreeWidgetItem *abilitiesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    abilitiesPntr->setText(0,"Abilities");
    abilitiesPntr->setText(1,QString::number(dynamic_cast<PokemonCard*>(poke)->getNrOfAbilities()));
    ui->treeWidgetFull->addTopLevelItem(abilitiesPntr);

    QTreeWidgetItem *attacksPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    attacksPntr->setText(0,"Attacks");
    attacksPntr->setText(1,QString::number(dynamic_cast<PokemonCard*>(poke)->getNrOfAttacks()));
    ui->treeWidgetFull->addTopLevelItem(attacksPntr);

    QTreeWidgetItem *resistancesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    resistancesPntr->setText(0,"Resistances");
    resistancesPntr->setText(1,QString::number(dynamic_cast<PokemonCard*>(poke)->getNrOfResistances()));
    ui->treeWidgetFull->addTopLevelItem(resistancesPntr);

    QTreeWidgetItem *typesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    typesPntr->setText(0,"Types");
    typesPntr->setText(1,QString::number(dynamic_cast<PokemonCard*>(poke)->getNrOfTypes()));
    ui->treeWidgetFull->addTopLevelItem(typesPntr);

    QTreeWidgetItem *weaknessesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    weaknessesPntr->setText(0,"Weaknesses");
    weaknessesPntr->setText(1,QString::number(dynamic_cast<PokemonCard*>(poke)->getNrOfWeaknesses()));
    ui->treeWidgetFull->addTopLevelItem(weaknessesPntr);

    // Abilities
    for(int i = 0; i < dynamic_cast<PokemonCard*>(poke)->getNrOfAbilities();i++)
    {
        Ability* abilityPntr = dynamic_cast<PokemonCard*>(poke)->getAbility(i);
        AddAbility(abilitiesPntr,abilityPntr,i);
    }

    // Attacks
    for(int i = 0; i < dynamic_cast<PokemonCard*>(poke)->getNrOfAttacks();i++)
    {
        Attack* attackPntr = dynamic_cast<PokemonCard*>(poke)->getAttack(i);
        AddAttack(attacksPntr,attackPntr,i);
    }

    // Resistances
    for(int i = 0; i < dynamic_cast<PokemonCard*>(poke)->getNrOfResistances();i++)
    {
        Resistance* resistancePntr = dynamic_cast<PokemonCard*>(poke)->getResistance(i);
        AddResistance(resistancesPntr,resistancePntr,i);
    }

    // Types
    for(int i = 0; i < dynamic_cast<PokemonCard*>(poke)->getNrOfTypes();i++)
    {
        Type* typePntr = dynamic_cast<PokemonCard*>(poke)->getType(i);
        AddType(typesPntr,typePntr,i);
    }

    // Weaknesses
    for(int i = 0; i < dynamic_cast<PokemonCard*>(poke)->getNrOfWeaknesses();i++)
    {
        Weakness* weaknessPntr = dynamic_cast<PokemonCard*>(poke)->getWeakness(i);
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
    itm->setText(0, "Ability");
    itm->setText(1, QString::number(i+1));
    parent->addChild(itm);
    AddChild(itm, "Name", abilityPntr->getAbilityName());
    AddChild(itm, "Type", abilityPntr->getAbilityType());
    AddChild(itm, "Text", abilityPntr->getAbilityText());
}

void CardView::AddAttack(QTreeWidgetItem *parent, Attack* attackPntr, int i)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, "Attack");
    itm->setText(1, QString::number(i+1));
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
    itm->setText(0,"Resistance");
    itm->setText(1, QString::number(i+1));
    parent->addChild(itm);
    AddChild(itm, "Type", resistancePntr->getResistanceType());
    AddChild(itm, "Value", resistancePntr->getResistanceValue());
}

void CardView::AddType(QTreeWidgetItem *parent, Type* typePntr, int i)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0,"Type");
    itm->setText(1, QString::number(i+1));
    parent->addChild(itm);
    AddChild(itm, "Name", typePntr->getTypeName());
}

void CardView::AddWeakness(QTreeWidgetItem *parent, Weakness* weaknessPntr, int i)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0,"Weakness");
    itm->setText(1, QString::number(i+1));
    parent->addChild(itm);
    AddChild(itm, "Type", weaknessPntr->getWeaknessType());
    AddChild(itm, "Value", weaknessPntr->getWeaknessValue());
}


CardView::~CardView()
{
    delete ui;
}
