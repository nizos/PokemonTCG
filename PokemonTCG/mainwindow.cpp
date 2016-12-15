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
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonFindPokemon_clicked()
{
    QString pokeID = ui->lineEditFindPokemon->text();
    pokeAlbum->addCard(pokeID);
    poke = pokeAlbum->getCard(0);
    cv = new CardView(this, poke);
    cv->show();
}
