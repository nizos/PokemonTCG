#include "albumcardsmodel.h"
AlbumCardsModel::AlbumCardsModel(QObject *parent)
    : AbstractCardModel(parent)
{
    m_albumsManager = nullptr;
    m_cardsManager = nullptr;
}


AlbumCardsModel::AlbumCardsModel(AlbumsManager *albumsManager, CardsManager *cardsManager, QObject *parent)
    : AbstractCardModel(cardsManager, parent)
{
    this->m_albumsManager = albumsManager;
    this->m_cardsManager = cardsManager;

    connect(m_albumsManager, SIGNAL(albumAdded(int)),
            this, SLOT(onAlbumAdded(int)));

    connect(m_albumsManager, SIGNAL(albumRemoved(int)),
            this, SLOT(onAlbumRemoved(int)));

    connect(m_albumsManager, SIGNAL(cardAdded(int,int)),
            this, SLOT(onCardAdded(int, int)));

    connect(m_albumsManager, SIGNAL(cardRemoved(int,int)),
            this, SLOT(onCardRemoved(int, int)));

}

void AlbumCardsModel::setAlbumsManager(AlbumsManager *albumsManager)
{
    this->m_albumsManager = albumsManager;
}

void AlbumCardsModel::setCardsManager(CardsManager *cardsManager)
{
    this->m_cardsManager = cardsManager;
    this->AbstractCardModel::setCardsManager(m_cardsManager);
}

void AlbumCardsModel::showAlbum(const int albumId)
{
    this->AbstractCardModel::setAbstractAlbum(&m_album);
    beginResetModel();
    m_album = m_albumsManager->album(albumId);
    endResetModel();
}

// Get the number of Cards in the Active Album
int AlbumCardsModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_album.getCards().count();
}
Card AlbumCardsModel::cardForIndex(const QModelIndex &index) const
{

   return m_cardsManager->card(m_album.getCards().at(index.row()));


//    QVector<int> cards = m_album.getCards();
//    int pos = cards.at(index.row())-1;
//    int cMID = m_album.getCard(index);
//    return m_cardsManager->card(cMID);
}

void AlbumCardsModel::onAlbumAdded(const int albumId)
{
    if (albumId != m_album.getAlbumId()) return;
    beginResetModel();
    m_album = m_albumsManager->album(m_album.getAlbumId());
    endResetModel();
}


void AlbumCardsModel::onAlbumRemoved(const int albumId)
{
    if (albumId != m_album.getAlbumId()) return;
    beginResetModel();
    m_album = Album();
    endResetModel();
}

void AlbumCardsModel::onCardAdded(const int albumId, const int cMID)
{
    if (albumId != m_album.getAlbumId()) return;

    Album updatedAlbum = m_albumsManager->album(albumId);
    const int row = updatedAlbum.getCards().indexOf(cMID);

    beginInsertRows(QModelIndex(), row, row);
    m_album = updatedAlbum;
    endInsertRows();
}

void AlbumCardsModel::onCardRemoved(const int albumId, const int cMID)
{
    if (albumId != m_album.getAlbumId()) return;
    Album updatedAlbum = m_albumsManager->album(albumId);
    const int row = updatedAlbum.getCards().indexOf(cMID);
    beginRemoveRows(QModelIndex(), row, row);
    m_album = updatedAlbum;
    endRemoveRows();
}

AlbumCardsModel::~AlbumCardsModel()
{
    m_albumsManager = nullptr;
    m_cardsManager = nullptr;

}
