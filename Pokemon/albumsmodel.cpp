#include "albumsmodel.h"

AlbumsModel::AlbumsModel(QObject *parent)
    : AbstractAlbumModel(parent)
{
    m_albumsManager = nullptr;
    m_cardsManager = nullptr;
}


AlbumsModel::AlbumsModel(AlbumsManager *albumsManager, CardsManager *cardsManager, QObject *parent)
    : AbstractAlbumModel(albumsManager, parent)
{
    this->m_albumsManager = albumsManager;
    this->m_cardsManager = cardsManager;

    connect(albumsManager, SIGNAL(albumAdded(int)), this, SLOT(onAlbumAdded(int)));

    connect(albumsManager, SIGNAL(albumRemoved(int)), this, SLOT(onAlbumRemoved(int)));

    connect(albumsManager, SIGNAL(cardAdded(int,int)), this, SLOT(onCardAdded(int, int)));

    connect(albumsManager, SIGNAL(cardRemoved(int,int)), this, SLOT(onCardRemoved(int, int)));

    beginResetModel();
    m_albums = m_albumsManager->albums();
    endResetModel();
}

void AlbumsModel::setAlbumsManager(AlbumsManager *albumsManager)
{
    this->AbstractAlbumModel::setAlbumsManager(albumsManager);
    this->m_albumsManager = albumsManager;
}

void AlbumsModel::setCardsManager(CardsManager *cardsManager)
{
    this->m_cardsManager = cardsManager;
}

// Show a specific Album
void AlbumsModel::showAlbums()
{
    beginResetModel();
    m_albums = m_albumsManager->albums();
    endResetModel();
}

// Get the number of Cards in the Active Album
int AlbumsModel::rowCount(const QModelIndex& parent) const
{
    Q_UNUSED(parent);
    return m_albums.count();
}

// Get the card object at the specified position in the Album
Album AlbumsModel::albumForIndex(const QModelIndex &index) const
{
    return m_albums.at(index.row());
}
// Receives a signal from the AlbumsManager when an Album is removed
void AlbumsModel::onAlbumAdded(const int &albumId)
{
    beginResetModel();
    m_albums << m_albumsManager->album(albumId);
    endResetModel();
}

// Receives a signal from the AlbumsManager when an Album is removed
void AlbumsModel::onAlbumRemoved(const int &albumId)
{
    beginResetModel();
    m_albums = m_albumsManager->albums();
    endResetModel();
}

// Receives a signal from the AlbumsManager when a Card is added to an Album
void AlbumsModel::onCardAdded(const int &albumId, const int &cMID)
{
    for(int i = 0; i < m_albums.count(); i++)
    {
        if(m_albums[i].getAlbumId() == albumId)
        {
            beginResetModel();
            m_albums[i] = m_albumsManager->album(albumId);
            endResetModel();
        }
    }
}

// Receives a signal from the AlbumsManager when a Card is removed from an Album
void AlbumsModel::onCardRemoved(const int &albumId, const int &cMID)
{
    beginResetModel();
    m_albums = m_albumsManager->albums();
    endResetModel();
}

AlbumsModel::~AlbumsModel()
{
    m_albumsManager = nullptr;
    m_cardsManager = nullptr;
//    if(!m_albums.isEmpty())
//    {
//        qDeleteAll(m_albums);
//        m_albums.clear();
//    }
}
