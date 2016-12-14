#include "cardview.h"
#include "ui_cardview.h"

CardView::CardView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CardView)
{
    ui->setupUi(this);

    ui->treeWidgetFull->setColumnCount(2);

    // Create default Pokemon card
    PokemonCard* poke = new PokemonCard();

    // Declare variables for card
    QString pokeID;
    QString pokeName;
    QString pokeSubtype;
    QString pokeSupertype;
    int pokeNumber;
    QString pokeArtist;
    QString pokeRarity;
    QString pokeSeries;
    QString pokeSet;
    QString pokeSetCode;
    QString pokeCondition;
    QString pokeStatus;
    QString imgPath;
    QPixmap pokePic;
    int pokeNrOfAbilities;
    int pokeNrOfAttacks;
    int pokeNrOfResistances;
    int pokeNrOfTypes;
    int pokeNrOfWeaknesses;

    // Set card data
    pokeID = poke->getID();
    pokeName = poke->getName();
    pokeSubtype = poke->getSubtype();
    pokeSupertype = poke->getSupertype();
    pokeNumber = poke->getNumber();
    pokeArtist = poke->getArtist();
    pokeRarity = poke->getRarity();
    pokeSeries = poke->getSeries();
    pokeSet = poke->getSet();
    pokeSetCode = poke->getSetCode();
    pokeCondition = poke->getCondition();
    pokeStatus = poke->getStatus();
    pokeNrOfAbilities = poke->getNrOfAbilities();
    pokeNrOfAttacks = poke->getNrOfAttacks();
    pokeNrOfResistances = poke->getNrOfResistances();
    pokeNrOfTypes = poke->getNrOfTypes();
    pokeNrOfWeaknesses = poke->getNrOfWeaknesses();

    imgPath = ":/cards/Images/1.png";
    pokePic = (imgPath);

    //
    poke->getNrOfAbilities();

    QTreeWidgetItem *abilitiesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    abilitiesPntr->setText(0,"Abilities");
    abilitiesPntr->setText(1,QString::number(pokeNrOfAbilities));
    ui->treeWidgetFull->addTopLevelItem(abilitiesPntr);

    QTreeWidgetItem *attacksPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    attacksPntr->setText(0,"Attacks");
    attacksPntr->setText(1,QString::number(pokeNrOfAttacks));
    ui->treeWidgetFull->addTopLevelItem(attacksPntr);

    QTreeWidgetItem *resistancePntr = new QTreeWidgetItem(ui->treeWidgetFull);
    resistancePntr->setText(0,"Resistances");
    resistancePntr->setText(1,QString::number(pokeNrOfResistances));
    ui->treeWidgetFull->addTopLevelItem(resistancePntr);

    QTreeWidgetItem *typesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    typesPntr->setText(0,"Types");
    typesPntr->setText(1,QString::number(pokeNrOfTypes));
    ui->treeWidgetFull->addTopLevelItem(typesPntr);

    QTreeWidgetItem *weaknessesPntr = new QTreeWidgetItem(ui->treeWidgetFull);
    weaknessesPntr->setText(0,"Weaknesses");
    weaknessesPntr->setText(1,QString::number(pokeNrOfWeaknesses));
    ui->treeWidgetFull->addTopLevelItem(weaknessesPntr);


    // Display card image
    ui->labelCardImage->setPixmap(pokePic);
}

void CardView::AddRoot(QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidgetFull);
    itm->setText(0,name);
    itm->setText(1,description);
    ui->treeWidgetFull->addTopLevelItem(itm);

//    AddChild(itm, "Name", "Forest storm");
//    AddChild(itm, "Type", "Wind");
//    AddChild(itm, "Damage", "60");
//    AddChild(itm, "Description", "This attack does 60 damage points to active opponent on deck.");
}

void CardView::AddChild(QTreeWidgetItem *parent, QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0,name);
    itm->setText(1,description);
    parent->addChild(itm);

}

void CardView::AddAbility(QTreeWidgetItem *parent, QString abilityName, QString abilityText, QString abilityType)
{



}

void CardView::AddAttack(QTreeWidgetItem *parent, QString attackCost, QString attackName, QString attackText, QString attackDamage, QString attackConvertedEnergyCost)
{

}

void CardView::AddResistance(QTreeWidgetItem *parent, QString resistanceType, QString resistanceValue)
{

}

void CardView::AddType(QTreeWidgetItem *parent, QString typeName)
{

}

void CardView::AddWeakness(QTreeWidgetItem *parent, QString weaknessType, QString weaknessValue)
{

}


CardView::~CardView()
{
    delete ui;
}
