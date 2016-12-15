#include "album.h"

// Default constructor
Album::Album()
{
    this->albumName = "ALbum name";
    this->nrOfCards = 1;
    this->cardsInAlbum = new Card*[nrOfCards];
    this->cardsInAlbum[0] = new Card();

}

// Overloaded constructor
Album::Album(QString albumName)
{
    this->albumName = albumName;
    Card* cardPntr = new Card();
    this->cardsInAlbum[0]= cardPntr;
    this->nrOfCards = 1;
}

// Modifiers
void Album::addCard(QString id)
{
    // Card info
    QString name;
    QString iD;
    QString subtype;
    QString supertype;
    QString hP;
    QString number;
    QString artist;
    QString rarity;
    QString series;
    QString set;
    QString setCode;
    QString imgUrl;

    // User info
    QString status;
    QString condition;
    QString album;

    // Pokemon info
    int hp;
    QString retreatTypeName;
    QString abilityName;
    QString abilityText;
    QString abilityType;
    QString typeName;
    QString attackCost;
    QString attackName;
    QString attackText;
    QString attackDamage;
    QString attackConvertedEnergyCost;
    QString weaknessType;
    QString weaknessValue;
    QString resistanceType;
    QString resistanceValue;

    // Build file name
    QString fileName = ":/cards/JSON/xy7-";
    fileName.append(id);
    fileName.append(".json");

    // Open file
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Error: Could not open file for reading";
        return;
    }

    // Save file information in fileText
    QTextStream in(&file);
    QString fileText = in.readAll();

    // Close file
    file.close();

    // Create card jsonObject from fileText
    QJsonDocument jsonDocument = QJsonDocument::fromJson(fileText.toUtf8());
    QJsonObject rootObject = jsonDocument.object();
    QJsonValue value = rootObject.value(QString("card"));
    QJsonObject cardRootValues = value.toObject();

    // Set values for card variables
    name = cardRootValues.value("name").toString();
    iD = cardRootValues.value("id").toString();
    subtype = cardRootValues.value("subtype").toString();
    supertype = cardRootValues.value("supertype").toString();
    number = cardRootValues.value("number").toString();
    artist = cardRootValues.value("artist").toString();
    rarity = cardRootValues.value("rarity").toString();
    series = cardRootValues.value("series").toString();
    set = cardRootValues.value("set").toString();
    setCode = cardRootValues.value("setCode").toString();
    imgUrl = cardRootValues.value("imageURL").toString();

    // Create Card instance from variables
    Card* pokePntr = new PokemonCard(hp, cardDd, name, imageURL, subtype, supertype, number, artist, rarity, series, set, setCode);

    // Add Card to Album
    cardsInAlbum[0] = pokePntr;

    /// TODO: Add if PokemonCard condition
    // Add PokemonCard values to card
    // Abilities
    QJsonValue abilitiesValue = cardRootValues.value(QString("ability"));
    QJsonObject abilityObject = abilitiesValue.toObject();
    /// TODO: Add if has value
    abilityName = abilityObject.value("name").toString();
    abilityText = abilityObject.value("text").toString();
    abilityType << abilityObject.value("type").toString();
    dynamic_cast<PokemonCard*>(pokePntr)->addAbility(abilityName, abilityText, abilityType);

    // Attacks
    QJsonValue attacksValue = cardRootValues.value("attacks");
    QJsonArray attacksArray = attacksValue.toArray();
    for(int i = 0; i < attacksArray.count(); i++)
    {
        QJsonObject attackObject = attacksArray.at(i).toObject();
        /// TODO: Add attackCost
        attackName = attackObject.value("name").toString();
        attackText = attackObject.value("text").toString();
        attackDamage = attackObject.value("damage").toString();
        attackConvertedEnergyCost = attackObject.value("convertedEnergyCost").toString();
        dynamic_cast<PokemonCard*>(pokePntr)->addAttack(attackCost, attackName, attackText, attackDamage, attackConvertedEnergyCost);
    }

    // Resistances
    QJsonValue resistancesValue = cardRootValues.value("resistances");
    QJsonArray resistancesArray = resistancesValue.toArray();
    for(int i = 0; i < resistancesArray.count(); i++)
    {
        QJsonObject resistanceObject = resistancesArray.at(i).toObject();
        resistanceType = resistanceObject.value("type").toString();
        resistanceValue = resistanceObject.value("value").toString();
        dynamic_cast<PokemonCard*>(pokePntr)->addResistance(resistanceType, resistanceValue);
    }

    // Retreat costs
    QJsonValue retreatCostsValue = cardRootValues.value("retreatCost");
    QJsonArray retreatCostsArray = retreatCostsValue.toArray();
    for(int i = 0; i < retreatCostsArray.count(); i++)
    {
        QJsonValue retreatCostValue = retreatCostsArray.at(i).toString();
        retreatTypeName = retreatCostValue.toString();
        /// TODO: Add dynamic_cast<PokemonCard*>(pokePntr)->addRetreatCost(retreatTypeName);
    }

    // Types
    QJsonValue typesValue = cardRootValues.value("types");
    QJsonArray typesArray = typesValue.toArray();
    for(int i = 0; i < typesArray.count(); i++)
    {
        QJsonValue typeValue = typesArray.at(i).toString();
        typeName = typeValue.toString();
        dynamic_cast<PokemonCard*>(pokePntr)->addType(typeName);
    }


    // Weaknesses
    QJsonValue weaknessesValue = cardRootValues.value("weaknesses");
    QJsonArray weaknessesArray = weaknessesValue.toArray();
    for(int i = 0; i < weaknessesArray.count(); i++)
    {
        QJsonObject weaknessObject = weaknessesArray.at(i).toObject();
        weaknessType = weaknessObject.value("type").toString();
        weaknessValue = weaknessObject.value("value").toString();
        dynamic_cast<PokemonCard*>(pokePntr)->addWeakness(weaknessType, weaknessValue);
    }
}

void Album::moveCard()
{


}

void Album::removeCard()
{

}

// Setters
void Album::setAlbumName(QString albumName)
{
    this->albumName = albumName;
}

void Album::setNrOfCards(int nrOfCards)
{
    this->nrOfCards = nrOfCards;
}

// Getters
QString Album::getAlbumName()
{
    return this->albumName;
}

int Album::getNrOfCards()
{
    return this->nrOfCards;
}

Card* Album::getCard(int pos)
{
    return this->cardsInAlbum[pos];
}

// toString
QString Album::toString()
{
    QString toReturn;
    toReturn = "toString from Album class";
    return toReturn;
}

// Destructor
Album::~Album()
{

}

