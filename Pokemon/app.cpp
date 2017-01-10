#include "app.h"

// Default Constructor
App::App(QObject *parent): QObject(parent)
{
    this->m_albumsManager.setCardsManager(&m_cardsManager);
    this->m_albumsModel.setAlbumsManager(&m_albumsManager);
    this->m_albumsModel.setCardsManager(&m_cardsManager);
    this->m_albumCardsModel.setAlbumsManager(&m_albumsManager);
    this->m_albumCardsModel.setCardsManager(&m_cardsManager);
    qmlRegisterType<AlbumsManager>("PokeApp.Classes.Core", 1, 0, "AlbumsManager");
    qmlRegisterType<CardsManager>("PokeApp.Classes.Core", 1, 0, "CardsManager");
    qmlRegisterType<AlbumCardsModel>("PokeApp.Classes.Core", 1, 0, "AlbumCardsModel");
    qmlRegisterType<AlbumsModel>("PokeApp.Classes.Core", 1, 0, "AlbumsModel");

    connect(&m_albumsManager, SIGNAL(albumAdded(int)),
                         &m_albumCardsModel, SLOT(onAlbumAdded(int)));
    connect(&m_albumsManager, SIGNAL(albumRemoved(int)),
                         &m_albumCardsModel, SLOT(onAlbumRemoved(int)));
    connect(&m_albumsManager, SIGNAL(cardAdded(int,int)),
                         &m_albumCardsModel, SLOT(onCardAdded(int, int)));
    connect(&m_albumsManager, SIGNAL(cardRemoved(int,int)),
                         &m_albumCardsModel, SLOT(onCardRemoved(int, int)));

    connect(&m_albumsManager, SIGNAL(albumAdded(int)),
                         &m_albumsModel, SLOT(onAlbumAdded(int)));
    connect(&m_albumsManager, SIGNAL(albumRemoved(int)),
                         &m_albumsModel, SLOT(onAlbumRemoved(int)));
    connect(&m_albumsManager, SIGNAL(cardAdded(int,int)),
                         &m_albumsModel, SLOT(onCardAdded(int, int)));
    connect(&m_albumsManager, SIGNAL(cardRemoved(int,int)),
                         &m_albumsModel, SLOT(onCardRemoved(int, int)));


    connect(&m_networkManager,SIGNAL(readyData(QByteArray)),this,SLOT(dataFromNetwork(QByteArray)));

    m_albumsManager.createAlbum("My Cards");
    m_albumsManager.createAlbum("My Favorites");

    m_albumsManager.addCardById(1001,"xy7-5");
    m_albumsManager.addCardById(1001,"xy7-6");
    m_albumsManager.addCardById(1001,"xy7-7");
    m_albumsManager.addCardById(1001,"xy7-8");

    m_albumsManager.addCardById(1002,"xy7-13");
    m_albumsManager.addCardById(1002,"xy7-14");

    m_albumCardsModel.showAlbum(1001);
    m_albumsModel.showAlbums();
}

// Getters
AlbumsManager* App::getAlbumsManagerPointer()
{
    return &m_albumsManager;
}

CardsManager* App::getCardsManagerPointer()
{
    return &m_cardsManager;
}

AlbumCardsModel* App::getAlbumCardsModelPointer()
{
    return &m_albumCardsModel;
}

AlbumsModel* App::getAlbumsModelPointer()
{
    return &m_albumsModel;
}

void App::dataFromNetwork(QByteArray data)
{
    QString val = data;
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject sett2 = d.object();
    QJsonValue value = sett2.value(QString("card"));
    QJsonObject item = value.toObject();
    QString imgUrl = item["imageUrl"].toString();
    imgUrl = ("http://s3.amazonaws.com/pokemontcg/xy7/54.png");

    m_networkManager.makeRequest(imgUrl);
    QPixmap img;
    if(img.loadFromData(data,"PNG"))
    {
         qDebug() << "Image loaded";
    }
}

// Destructor
App::~App()
{
    // For debugging purposes
    qDebug() << "[App] [called] [Default Destructor]";
}
