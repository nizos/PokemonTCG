#ifndef ALBUMSMODEL_H
#define ALBUMSMODEL_H
#include <QObject>
#include <QString>
#include <QVariant>
#include <QDebug>
#include <QVector>
#include <QAbstractListModel>
#include <QQmlListProperty>
#include <QModelIndex>
#include "abstractAlbummodel.h"
#include "albumsmanager.h"


class AlbumsModel : public AbstractAlbumModel
{
    Q_OBJECT
public:
    // Album name role
    enum AlbumRoles { AlbumNameRole = Qt::UserRole + 1};

    // Default Constructor
    AlbumsModel(QObject *parent = 0);
    ~AlbumsModel();

    AlbumsModel(AlbumsManager *albumsManager, CardsManager *cardsManager, QObject *parent = 0);

    void setAlbumsManager(AlbumsManager *albumsManager);
    void setCardsManager(CardsManager *cardsManager);

    // Show a specific Album
    Q_INVOKABLE void showAlbums();

    // Get the
    int rowCount(const QModelIndex &parent) const;

protected:
    // Get the card object at the specified position in the Album
    Album albumForIndex(const QModelIndex &index) const;

private slots:
    // gets connected to m_albumManager's albumRemoved() signal
    void onAlbumAdded(const int &albumId);
    void onAlbumRemoved(const int &albumId);
    void onCardAdded(const int &albumId, const int &cMID);
    void onCardRemoved(const int &albumId, const int &cMID);

private:
    AlbumsManager *m_albumsManager; // Points to the Album's AlbumsManager
    CardsManager *m_cardsManager;
    QVector<Album> m_albums; // Holds the Album it provides the View with
};

#endif // ALBUMSMODEL_H
