#ifndef ALBUM_H
#define ALBUM_H
#include <QString>
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
    void addCard();
    void moveCard();
    void removeCard();

    // Setters
    void setNrOfCards(int nrOfCards);
    void setAlbumName(QString albumName);

    // Getters
    int getNrOfCards();
    QString getAlbumName();

    //toString
    QString toString();

    // Default constructor
    ~Album();
};

#endif // ALBUM_H
