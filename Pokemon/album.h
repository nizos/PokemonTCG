#ifndef ALBUM_H
#define ALBUM_H
#include <QDebug>
#include <QObject>
#include <QString>
#include <QVariant>
#include <QVector>
#include <QAbstractListModel>
#include <QScopedPointer>
#include <QQmlListProperty>
#include <QModelIndex>
#include "card.h"
#include "cardsmanager.h"

class Album
{
private:
    int m_albumId; // Holds a unique Album ID given to it from the AlbumsManager
    QString m_albumName; // Holds the user specified name for the Album
    CardsManager *m_cardsManager;
    QVector<int> m_cards;
//    QVector<Card*> m_cards; // Holds list of all the card IDs that are in the Album

public:
    // Default Constructor
    Album(CardsManager *cardsManager = 0);

    // Overloaded Constructor
    Album(QString albumName, int albumId, CardsManager *cardsManager);

    // ALBUM GETTERS
    QString getAlbumName() const;
    int getAlbumId() const;
    int getNrOfCards() const;
    int count() const;

    // ALBUM SETTERS
    void setAlbumName(const QString albumName);
    void setAlbumId(const int albumId);

    // CARDS IN ALBUM
    QString getURLForCardOne() const;
    QString getURLForCardTwo() const;
    QString getURLForCardThree() const;
    QString getURLForCardFour() const;

    void addCard(const int cMID);
    void removeCard(const int cMID);

    int getCard(const int index) const;
    QVector<int> getCards() const;

    // Destructor
    ~Album();
};

#endif // ALBUM_H
