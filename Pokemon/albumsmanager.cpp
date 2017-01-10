#include "albumsmanager.h"

// Default Constructor
AlbumsManager::AlbumsManager(CardsManager* cardsManager, QObject* parent): QObject(parent)
{
    this->m_albumId = 1000;
    this->m_cardsManager = cardsManager;
    m_cardsManager = nullptr;
}

void AlbumsManager::setCardsManager(CardsManager *cardsManager)
{
    this->m_cardsManager = cardsManager;
}

// Retreives a specific Album from it's list
Album AlbumsManager::album(const int id) const
{
    int albumMatch;
    bool albumFound = false;
    for(int i = 0; i < this->m_albums.count(); i++)
    {
        if(m_albums[i].getAlbumId() == id)
        {
            albumFound = true;
            albumMatch = i;
        }
    }
    if(albumFound == true)
    {
        return m_albums[albumMatch];
    }
    else
    {
        qDebug() << "[AlbumsManager] [ERROR] No matching album found: " + id;
        return noIdAlbum;
    }
}

// Retreives an Album Objects list of all the Albums in it's list
QVector<Album> AlbumsManager::albums() const
{
    return m_albums;
}

// Gets the nr. of Albums in it's list
int AlbumsManager::count() const
{
    return this->m_albums.size();
}

// Create new Album and Add it to the Album list this class manages
void AlbumsManager::createAlbum(const QString name)
{
    this->m_albumId++;
    Album newAlbum(name, m_albumId, m_cardsManager);

    m_albums.append(newAlbum);
    qDebug() << "[AlbumsManager] [update] New album added: " + name;
    emit albumAdded(newAlbum.getAlbumId());
}

// Add a specific Card to a specified Album
void AlbumsManager::addCardById(const int albumId, const QString cardId)
{
    // Find if an album in the list matches the provided Album ID
    bool albumFound = false;
    int albumMatch;
    for(int i = 0; i < this->count(); i++)
    {
        if(m_albums[i].getAlbumId() == albumId)
        {
            albumFound = true;
            albumMatch = i;
        }
    }
    if(albumFound == true)
    {
        int newId = this->m_albums[albumMatch].getNrOfCards();
        this->m_albums[albumMatch].addCard(m_cardsManager->addCardById(cardId));

        emit cardAdded(albumId, m_albums[albumMatch].getCard(newId));
    }
    else
    {
        qDebug() << "[AlbumsManager] [ERROR] No matching Albums were found. Couldn't add card " + cardId + " to album " + albumId;
    }
}



// Add a specific Card to a specified Album
void AlbumsManager::addCardByName(const int albumId, const QString cardName)
{
    // Find if an album in the list matches the provided Album ID
    bool albumFound = false;
    int albumMatch;
    for(int i = 0; i < this->count(); i++)
    {
        if(m_albums[i].getAlbumId() == albumId)
        {
            albumFound = true;
            albumMatch = i;
        }
    }
    if(albumFound == true)
    {
        int newId = this->m_albums[albumMatch].getNrOfCards();
        this->m_albums[albumMatch].addCard(m_cardsManager->addCardByName(cardName));
        emit cardAdded(albumId, m_albums[albumMatch].getCard(newId));
    }
    else
    {
        qDebug() << "[AlbumsManager] [ERROR] No matching Albums were found. Couldn't add card " + cardName + " to album " + albumId;
    }
}


// Remove a specific Card from a specified Album
void AlbumsManager::removeCard(const int albumId, int cMID)
{
    // Find if an album in the list matches the provided Album ID
    bool albumFound = false;
    int albumMatch;
    for(int i = 0; i < this->count(); i++)
    {
        if(m_albums[i].getAlbumId() == albumId)
        {
            albumFound = true;
            albumMatch = i;
        }
    }
    if(albumFound == true)
    {
        this->m_albums[albumMatch].removeCard(cMID);
        emit cardRemoved(albumId, cMID);
    }
    else
    {
        qDebug() << "[AlbumsManager] [ERROR] >> removeCard(const int &albumId, const QString &cardId) || No matching Albums were found";
    }
}

// Default Destructor
AlbumsManager::~AlbumsManager()
{
    m_cardsManager = nullptr;

    qDebug() << "[AlbumsManager] [called] [Destructor].";
}
