#ifndef ALBUM_H
#define ALBUM_H
#include <QString>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include "pokemoncard.h"
#include "card.h"

class Album
{
private:
    Card** cardsInAlbum;
    QString albumName;
    int nrOfCards;

public:
    // Default constructor
    Album();

    // Overloaded constructor
    Album(QString albumName);

    // Modifiers
    void addCard(QString id);
    void moveCard();
    void removeCard();

    // Setters
    void setNrOfCards(int nrOfCards);
    void setAlbumName(QString albumName);

    // Getters
    int getNrOfCards();
    QString getAlbumName();

    Card* getCard(int pos);

    //toString
    QString toString();

    // Default constructor
    ~Album();
};

#endif // ALBUM_H
