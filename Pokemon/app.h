#ifndef APP_H
#define APP_H
#include <QtQml>
#include <QObject>
#include <QDebug>
#include <QFile>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QVariantMap>
#include <QVariant>
#include <QPixmap>
#include <QScopedPointer>
#include "mainnetworkmanager.h"
#include "albumsmanager.h"
#include "cardsmanager.h"
#include "albumcardsmodel.h"
#include "abstractcardmodel.h"
#include "abstractalbummodel.h"
#include "albumsmodel.h"


class App: public QObject
{
    Q_OBJECT

public:
    explicit App(QObject *parent = 0);

    // Getters
    Q_INVOKABLE AlbumsManager *getAlbumsManagerPointer();
    Q_INVOKABLE CardsManager *getCardsManagerPointer();
    Q_INVOKABLE AlbumCardsModel *getAlbumCardsModelPointer();
    Q_INVOKABLE AlbumsModel *getAlbumsModelPointer();

    // Destructor
    ~App();

public slots:
    void dataFromNetwork(QByteArray data);

private:
    MainNetworkManager m_networkManager;
    AlbumsManager m_albumsManager;
    CardsManager m_cardsManager;
    AlbumsModel m_albumsModel;
    AlbumCardsModel m_albumCardsModel;
};

#endif // APP_H
