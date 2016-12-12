#include "album.h"

// Default constructor
Album::Album()
{
    this->albumName = "ALbum name";
    Card* cardPntr = new Card();
    this->cardsInAlbum[0]= cardPntr;
    this->nrOfCards = 1;
}

// Overloaded constructor
Album::Album(QString albumName)
{
    this->albumName = albumName;
    Card* cardPntr = new Card();
    this->cardsInAlbum[0]= cardPntr;
    this->nrOfCards = 1;
}

// Modifiers
void Album::addCard()
{

}

void Album::moveCard()
{


}

void Album::removeCard()
{

}

// Setters
void Album::setAlbumName(QString albumName)
{
    this->albumName = albumName;
}

void Album::setNrOfCards(int nrOfCards)
{
    this->nrOfCards = nrOfCards;
}

// Getters
QString Album::getAlbumName()
{
    return this->albumName;
}

int Album::getNrOfCards()
{
    return this->nrOfCards;
}

// toString
QString Album::toString()
{
    QString toReturn;
    toReturn = "toString from Album class";
    return toReturn;
}

// Destructor
Album::~Album()
{

}

