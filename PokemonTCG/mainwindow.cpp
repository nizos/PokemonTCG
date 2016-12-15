#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pokemonCard.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //poke = new PokemonCard();
    pokeAlbum = new Album();
    QString pokeID = "54";
    pokeAlbum->addCard(pokeID);
    poke = pokeAlbum->getCard(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonFindPokemon_clicked()
{
    cv = new CardView(this, poke);
    cv->show();
}
