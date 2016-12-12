#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pokemonCard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PokemonCard* poke = new PokemonCard();
    QString pokeArtist = poke->getArtist();
    ui->TextLabelArtist->setText(pokeArtist);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//"xy7-54", "Gardevoir", "https://s3.amazonaws.com/pokemontcg/xy7/54.png", "Stage 2", "Pokemon", 54, "TOKIYA", "Rare Holo", "XY", "Ancient Origins", "xy7", 130
