#ifndef CARDSMANAGER_H
#define CARDSMANAGER_H
#include <QObject>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QAbstractListModel>
#include <QEventLoop>
#include <qnetworkaccessmanager.h>
#include "mainnetworkmanager.h"
#include "card.h"

class CardsManager : public QObject
{
    Q_OBJECT

public:
    CardsManager(QObject* parent = 0);
    ~CardsManager();

    Card card(const int cMID) const;
    QVector<Card> cards() const;
    int count() const;

    int addCardById(const QString id);
    int addCardByName(const QString cardName);

signals:
    void cardAdded(const int cMID);
    void cardRemoved(const int cMID);

public slots:
    void dataFromNetwork(const QByteArray data);

protected:
    QHash<QString, int> nameToId() const;

private:
    int m_cardMID;
    QVector<Card> m_cards;
    Card noIDCard;

    MainNetworkManager m_networkManager;
    QByteArray m_data;
};

#endif // CARDSMANAGER_H
