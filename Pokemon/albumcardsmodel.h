#ifndef ALBUMCARDSMODEL_H
#define ALBUMCARDSMODEL_H
#include <QObject>
#include <QString>
#include <QVariant>
#include <QDebug>
#include <QVector>
#include <QAbstractListModel>
#include <QQmlListProperty>
#include <QModelIndex>
#include "abstractcardmodel.h"
#include "albumsmanager.h"


class AlbumCardsModel : public AbstractCardModel
{
    Q_OBJECT
public:
    // Album name role
    enum AlbumRoles { AlbumNameRole = Qt::UserRole + 1};

    // Default Constructor
    AlbumCardsModel(QObject *parent = 0);
    ~AlbumCardsModel();
    AlbumCardsModel(AlbumsManager *albumsManager, CardsManager *cardsManager, QObject *parent = 0);

    void setAlbumsManager(AlbumsManager *albumsManager);
    void setCardsManager(CardsManager *cardsManager);

    // Show a specific Album
    Q_INVOKABLE void showAlbum(const int albumId);

    // Get the
    int rowCount(const QModelIndex &parent) const;

protected:
    // Get the card object at the specified position in the Album
    Card cardForIndex(const QModelIndex &index) const;

private slots:
    // gets connected to m_albumManager's albumRemoved() signal
    void onAlbumAdded(const int albumId);
    void onAlbumRemoved(const int albumId);
    void onCardAdded(const int albumId, const int cMID);
    void onCardRemoved(const int albumId, const int cMID);

private:
    AlbumsManager *m_albumsManager; // Points to the Album's AlbumsManager
    CardsManager *m_cardsManager;
    Album m_album; // Holds the Album it provides the View with
};

#endif // ALBUMCARDSMODEL_H
