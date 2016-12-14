#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pokemonCard.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    imgPath = ":/cards/Images/1.png";
    pokePic = (imgPath);
// ui->treeWidgetCardData->addTopLevelItem();

//    // Display card main data
//    ui->TextLabelID->setText("<i>pokeID</i>");
//    ui->TextLabelName->setText(pokeName);
//    ui->TextLabelSubtype->setText(pokeSubtype);
//    ui->TextLabelSupertype->setText(pokeSupertype);
//    ui->TextLabelNumber->setText(QString::number(pokeNumber));
//    ui->TextLabelArtist->setText(pokeArtist);
//    ui->TextLabelRarity->setText(pokeRarity);
//    ui->TextLabelSeries->setText(pokeSeries);
//    ui->TextLabelSet->setText(pokeSet);
//    ui->TextLabelSetCode->setText(pokeSetCode);
//    ui->TextLabelCondition->setText(pokeCondition);
//    ui->TextLabelStatus->setText(pokeStatus);

//    // Display card image
//    ui->PokemonImage->setPixmap(pokePic);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonFindPokemon_clicked()
{
    cv = new CardView(this);
    cv->show();
}
