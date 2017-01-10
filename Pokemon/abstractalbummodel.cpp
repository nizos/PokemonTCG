#include "abstractalbummodel.h"

// Default Constructor
AbstractAlbumModel::AbstractAlbumModel(QObject* parent): QAbstractListModel(parent)
{
    m_albumsManager = nullptr;
}

// Overloaded Constructor
AbstractAlbumModel::AbstractAlbumModel(AlbumsManager *albumsManager, QObject *parent): QAbstractListModel(parent)
{
    this->m_albumsManager = albumsManager;
}

void AbstractAlbumModel::setAlbumsManager(AlbumsManager *albumsManager)
{
    this->m_albumsManager = albumsManager;
}


QVariant AbstractAlbumModel::data(const QModelIndex &index, int role)  const
{
    if (index.row() < 0 || index.row() >= this->m_albumsManager->count())
        return QVariant();
    Album &album = albumForIndex(index);
    if (role == AlbumNameRole)
        return album.getAlbumName();
    else if (role == AlbumIDRole)
        return album.getAlbumId();
    else if (role == CardsInAlbumRole)
        return album.getNrOfCards();
    else if (role == CardOneInAlbumRole)
        return album.getURLForCardOne();
    else if (role == CardTwoInAlbumRole)
        return album.getURLForCardTwo();
    else if (role == CardThreeInAlbumRole)
        return album.getURLForCardThree();
    else if (role == CardFourInAlbumRole)
        return album.getURLForCardFour();
    return QVariant();
}

// Role names
QHash<int, QByteArray> AbstractAlbumModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[AlbumNameRole] = "albumName";
    roles[AlbumIDRole] = "albumId";
    roles[CardsInAlbumRole] = "nrOfCards";
    roles[CardOneInAlbumRole] = "cardOneInAlbum";
    roles[CardTwoInAlbumRole] = "cardTwoInAlbum";
    roles[CardThreeInAlbumRole] = "cardThreeInAlbum";
    roles[CardFourInAlbumRole] = "cardFourInAlbum";
    return roles;
}

// Default Destructor
AbstractAlbumModel::~AbstractAlbumModel()
{
    m_albumsManager = nullptr;
    // For debugging purposes
    qDebug() << "[AbstractAlbumModel] [called] [Default Destructor]";
}
