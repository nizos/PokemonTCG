#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QFile>
#include <QDebug>
#include "cardview.h"
#include "pokemoncard.h"
#include "album.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButtonFindPokemon_clicked();

private:
    Ui::MainWindow *ui;
    CardView *cv;
    Card *poke;
    Album *pokeAlbum;

};

#endif // MAINWINDOW_H
