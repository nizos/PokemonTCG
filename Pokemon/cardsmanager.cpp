#include "cardsmanager.h"

CardsManager::CardsManager(QObject* parent): QObject(parent)
{
    this->m_cardMID = 1000;
    for(int i = 0; i < 50; i++)
    {
        m_cards.append(Card());
        // In case of initialization failure, throw exception from the constructor
    }


    connect(&m_networkManager,SIGNAL(readyData(QByteArray)),
            this,SLOT(dataFromNetwork(QByteArray)));
}

void CardsManager::dataFromNetwork(QByteArray data)
{
    this->m_data = data;
}

int CardsManager::addCardById(const QString id)
{
    // Request JSON for Card
    QString requestURL = "https://api.pokemontcg.io/v1/cards/";
    requestURL.append(id);
    m_networkManager.makeRequest(requestURL);

    // Wait for response
    QEventLoop loop;
    connect(&m_networkManager, SIGNAL(qnamFinished(QNetworkReply*)),&loop, SLOT(quit()));
    loop.exec();

    // Open JSON document
    QString val = m_data;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject rootObject = jsonDocument.object();
    QJsonValue value = rootObject.value(QString("card"));
    QJsonObject cardRootValues = value.toObject();

    // Set values for card variables
    m_cardMID++;
    int cardMID = m_cardMID;
    QString name = cardRootValues.value("name").toString();
    QString cardId = cardRootValues.value("id").toString();
    QString subtype = cardRootValues.value("subtype").toString();
    QString supertype = cardRootValues.value("supertype").toString();
    QString nrString = cardRootValues.value("number").toString();
    int number = nrString.toInt();
    QString artist = cardRootValues.value("artist").toString();
    QString rarity = cardRootValues.value("rarity").toString();
    QString series = cardRootValues.value("series").toString();
    QString set = cardRootValues.value("set").toString();
    QString setCode = cardRootValues.value("setCode").toString();
    QString imageUrl = cardRootValues.value("imageUrl").toString();
    QString status = "Not specified";
    QString condition = "Not specified";

    // Create Card instance from variables
    Card newCard(cardMID, cardId, name, imageUrl, subtype, supertype, number, artist, rarity, series, set, setCode, condition, status);

    // Add created Card to Card List
    m_cards.append(newCard);

    // For debugging purposes
    qDebug() << "[CardsManager] Card: " << cardMID << " added.";

    cardAdded(cardMID);
    return cardMID;
}

int CardsManager::addCardByName(const QString cardName)
{  
    // Request JSON for Card
    QString requestURL = "https://api.pokemontcg.io/v1/cards/";
    QString id = nameToId().value(cardName);
    requestURL.append(id);
    m_networkManager.makeRequest(requestURL);

    // Wait for response
    QEventLoop loop;
    connect(&m_networkManager, SIGNAL(qnamFinished(QNetworkReply*)),&loop, SLOT(quit()));
    loop.exec();

    // Open JSON document
    QString val = m_data;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject rootObject = jsonDocument.object();
    QJsonValue value = rootObject.value(QString("card"));
    QJsonObject cardRootValues = value.toObject();

    // Set values for card variables
    m_cardMID++;
    int cardMID = m_cardMID;
    QString name = cardRootValues.value("name").toString();
    QString cardId = cardRootValues.value("id").toString();
    QString subtype = cardRootValues.value("subtype").toString();
    QString supertype = cardRootValues.value("supertype").toString();
    QString nrString = cardRootValues.value("number").toString();
    int number = nrString.toInt();
    QString artist = cardRootValues.value("artist").toString();
    QString rarity = cardRootValues.value("rarity").toString();
    QString series = cardRootValues.value("series").toString();
    QString set = cardRootValues.value("set").toString();
    QString setCode = cardRootValues.value("setCode").toString();
    QString imageUrl = cardRootValues.value("imageUrl").toString();
    QString status = "Not specified";
    QString condition = "Not specified";

    // Create Card instance from variables
    Card newCard(cardMID, cardId, name, imageUrl, subtype, supertype, number, artist, rarity, series, set, setCode, condition, status);

    // Add created Card to Card List
    m_cards.append(newCard);

    // For debugging purposes
    qDebug() << "[CardsManager] Card: " << cardMID << " added.";

    cardAdded(cardMID);
    return cardMID;
}

Card CardsManager::card(const int cMID) const
{
    bool matchFound = false;
    int match = -1;
    for(int i = 0; i < m_cards.size(); i++)
    {
        if(m_cards[i].getCardMID() == cMID)
        {
            matchFound = true;
            match = i;
        }
    }
    if(matchFound == true)
    {
        return m_cards[match];
    }
    else
    {
        return noIDCard;
    }
}

QVector<Card> CardsManager::cards() const
{
    return m_cards;
}

int CardsManager::count() const
{
    return this->m_cards.size();
}

QHash<QString, int> CardsManager::nameToId() const
{
    QHash<QString, int> name;
    name["Oddish"] = 1;
    name["Gloom"] = 2;
    name["Vileplume"] = 3;
    name["Bellossom"] = 4;
    name["Spinarak"] = 5;
    name["Ariados"] = 6;
    name["Sceptile-EX"] = 7;
    name["M Sceptile-EX"] = 8;
    name["Combee"] = 9;
    name["Vespiquen"] = 10;
    name["Vespiquen"] = 11;
    name["Virizion"] = 12;
    name["Flareon"] = 13;
    name["Entei"] = 14;
    name["Entei"] = 15;
    name["Larvesta"] = 16;
    name["Volcarona"] = 17;
    name["Volcarona"] = 18;
    name["Magikarp"] = 19;
    name["Gyarados"] = 20;
    name["Gyarados"] = 21;
    name["Vaporeon"] = 22;
    name["Relicanth"] = 23;
    name["Regice"] = 24;
    name["Kyurem-EX"] = 25;
    name["Jolteon"] = 26;
    name["Ampharos-EX"] = 27;
    name["M Ampharos-EX"] = 28;
    name["Rotom"] = 29;
    name["Unown"] = 30;
    name["Baltoy"] = 31;
    name["Baltoy"] = 32;
    name["Claydol"] = 33;
    name["Golett"] = 34;
    name["Golurk"] = 35;
    name["Hoopa-EX"] = 36;
    name["Machamp-EX"] = 37;
    name["Wooper"] = 38;
    name["Quagsire"] = 39;
    name["Regirock"] = 40;
    name["Golurk"] = 41;
    name["Tyranitar-EX"] = 42;
    name["M Tyranitar-EX"] = 43;
    name["Sableye"] = 44;
    name["Inkay"] = 45;
    name["Malamar"] = 46;
    name["Beldum"] = 47;
    name["Metang"] = 48;
    name["Metagross"] = 49;
    name["Metagross"] = 50;
    name["Registeel"] = 51;
    name["Ralts"] = 52;
    name["Kirlia"] = 53;
    name["Gardevoir"] = 54;
    name["Cottonee"] = 55;
    name["Whimsicott"] = 56;
    name["Giratina-EX"] = 57;
    name["Goomy"] = 58;
    name["Sliggoo"] = 59;
    name["Goodra"] = 60;
    name["Meowth"] = 61;
    name["Persian"] = 62;
    name["Eevee"] = 63;
    name["Porygon"] = 64;
    name["Porygon2"] = 65;
    name["Porygon-Z"] = 66;
    name["Porygon-Z"] = 67;
    name["Lugia-EX"] = 68;
    name["Ace Trainer"] = 69;
    name["Ampharos Spirit Link"] = 70;
    name["Eco Arm"] = 71;
    name["Energy Recycler"] = 72;
    name["Faded Town"] = 73;
    name["Forest of Giant Plants"] = 74;
    name["Hex Maniac"] = 75;
    name["Level Ball"] = 76;
    name["Lucky Helmet"] = 77;
    name["Lysandre"] = 78;
    name["Paint Roller"] = 79;
    name["Sceptile Spirit Link"] = 80;
    name["Tyranitar Spirit Link"] = 81;
    name["Dangerous Energy"] = 82;
    name["Flash Energy"] = 83;
    name["Sceptile-EX"] = 84;
    name["M Sceptile-EX"] = 85;
    name["Kyurem-EX"] = 86;
    name["Ampharos-EX"] = 87;
    name["M Ampharos-EX"] = 88;
    name["Hoopa-EX"] = 89;
    name["Machamp-EX"] = 90;
    name["Tyranitar-EX"] = 91;
    name["M Tyranitar-EX"] = 92;
    name["Giratina-EX"] = 93;
    name["Lugia-EX"] = 94;
    name["Steven"] = 95;
    name["Primal Kyogre-EX"] = 96;
    name["Primal Groudon-EX"] = 97;
    name["M Rayquaza-EX"] = 98;
    name["Energy Retrieval"] = 99;
    name["Trainers' Mail"] = 100;
    return name;
}

CardsManager::~CardsManager()
{

}
