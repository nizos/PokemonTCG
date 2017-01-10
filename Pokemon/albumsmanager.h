#ifndef ALBUMSMANAGER_H
#define ALBUMSMANAGER_H
#include "album.h"
#include "card.h"
#include "cardsmanager.h"
#include <QObject>
#include <QString>
#include <QVariant>
#include <QVector>
#include <QDebug>
#include <QAbstractListModel>
#include <QQmlListProperty>
#include <QModelIndex>


class AlbumsManager: public QObject
{
    Q_OBJECT

public:
    AlbumsManager(CardsManager* cardsManager = 0, QObject* parent = 0);
    ~AlbumsManager();
    void setCardsManager(CardsManager *cardsManager);

    Album album(const int id) const;
    QVector<Album> albums() const;
    int count() const;

    Q_INVOKABLE void createAlbum(const QString name);
    Q_INVOKABLE void addCardById(const int albumId, const QString cardId);
    Q_INVOKABLE void addCardByName(const int albumId, const QString cardName);
    Q_INVOKABLE void removeCard(const int albumId, const int cMID);

signals:
    void albumAdded(const int id);
    void albumRemoved(const int id);
    void cardAdded(const int albumId, const int cMID);
    void cardRemoved(const int albumId, const int cMID);

private:
    int m_albumId;
    Album noIdAlbum;

    QVector<Album> m_albums;
    CardsManager *m_cardsManager;
};

#endif // ALBUMSMANAGER_H
