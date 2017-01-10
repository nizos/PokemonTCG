#include "album.h"

// Default Constructor
Album::Album(CardsManager *cardsManager)
{
    this->m_albumId = 100;
    this->m_albumName = " ";
    m_cardsManager = cardsManager;
}

// Overloaded Constructor
Album::Album(QString albumName, int albumId, CardsManager *cardsManager)
{
    this->m_albumName = albumName;
    this->m_albumId = albumId;
    this->m_cardsManager = cardsManager;
}

// ALBUM GETTERS
QString Album::getAlbumName() const
{
    return m_albumName;
}

int Album::getAlbumId() const
{
    return m_albumId;
}

int Album::getNrOfCards() const
{
    return this->m_cards.count();
}

int Album::count() const
{
    return this->m_cards.count();
}

// ALBUM SETTERS
void Album::setAlbumName(const QString albumName)
{
    this->m_albumName = albumName;
}

void Album::setAlbumId(const int albumId)
{
    this->m_albumId = albumId;
}


// CARDS IN ALBUM
QString Album::getURLForCardOne() const
{
    if(m_cards.count()< 1)
    {
        return "0";
    }
    else
    {
        return m_cardsManager->card(m_cards[0]).getImageURL();
    }
}

QString Album::getURLForCardTwo() const
{
    if(m_cards.count()< 2)
    {
        return "0";
    }
    else
    {
        return m_cardsManager->card(m_cards[1]).getImageURL();
    }
}

QString Album::getURLForCardThree() const
{
    if(m_cards.count()< 3)
    {
        return "0";
    }
    else
    {
        return m_cardsManager->card(m_cards[2]).getImageURL();
    }
}

QString Album::getURLForCardFour() const
{
    if(m_cards.count()< 4)
    {
        return "0";
    }
    else
    {
        return m_cardsManager->card(m_cards[3]).getImageURL();
    }
}


void Album::addCard(int cMID)
{
    m_cards.append(cMID);
}

void Album::removeCard(int cMID)
{
    for(int i = 0; i < this->m_cards.count(); i++)
    {
        if(m_cards[i] == cMID)
        {
            this->m_cards.removeAt(i);
        }
    }
}


int Album::getCard(const int index) const
{
    return m_cards[index];
}

QVector<int> Album::getCards() const
{
    return m_cards;
}

// Destructor
Album::~Album()
{
    m_cardsManager = nullptr;
//    if(!m_cards.isEmpty())
//    {
//        qDeleteAll(m_cards);
//        m_cards.clear();
//    }
    qDebug() << "[Album] [called] [albumId:" << m_albumId << "] [Destructor]";
}
