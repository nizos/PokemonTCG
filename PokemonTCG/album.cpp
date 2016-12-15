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

    // Save file information in QString fileText
    QTextStream in(&file);
    QString fileText = in.readAll();

    // Close file
    file.close();

    // Create json document from fileText information
    QJsonDocument jsonDocument = QJsonDocument::fromJson(fileText.toUtf8());
    QJsonObject rootObject = jsonDocument.object();
    QJsonValue value = rootObject.value(QString("card"));


    //qWarning() << value;
    QJsonObject cardRootValues = value.toObject();

    // Abilities
    QJsonValue abilitiesValue = cardRootValues.value(QString("ability"));
    QJsonObject abilityObject = abilitiesValue.toObject();
    qDebug() << "Ability name: " << abilityObject.value("name").toString();
    qDebug() << "Ability text: " << abilityObject.value("text").toString();
    qDebug() << "Ability type: " << abilityObject.value("type").toString();

    // Attacks
    QJsonValue attacksValue = cardRootValues.value("attacks");
    QJsonArray attacksArray = attacksValue.toArray();
    int nrOfAtk = 0;
    for(int i = 0; i < attacksArray.count(); i++)
    {
        QJsonObject attackObject = attacksArray.at(i).toObject();
        qDebug() << "Attack name :" << attackObject.value("name").toString();
        qDebug() << "Attack text: " << attackObject.value("text").toString();
        qDebug() << "Attack damage: " << attackObject.value("damage").toString();
        qDebug() << "Attack converted energy cost: " << attackObject.value("convertedEnergyCost").toString();
        nrOfAtk++;
    }
    qDebug() << "Nr of attacks: " << QString::number(nrOfAtk);

    // Resistances
    QJsonValue resistancesValue = cardRootValues.value("resistances");
    QJsonArray resistancesArray = resistancesValue.toArray();
    int nrOfRs = 0;
    for(int i = 0; i < resistancesArray.count(); i++)
    {
        QJsonObject resistanceObject = resistancesArray.at(i).toObject();
        qDebug() << "Resistance type: " << resistanceObject.value("type").toString();
        qDebug() << "Resistance value: " << resistanceObject.value("value").toString();
        nrOfRs++;
    }
    qDebug() << "Nr of resistances: " << QString::number(nrOfRs);

    // Retreat costs
    QJsonValue retreatCostsValue = cardRootValues.value("retreatCost");
    QJsonArray retreatCostsArray = retreatCostsValue.toArray();
    int nrOfRC = 0;
    qDebug() << "Retreat costs: " << retreatCostsArray;
    for(int i = 0; i < retreatCostsArray.count(); i++)
    {
        QJsonValue retreatCostValue = retreatCostsArray.at(i).toString();
        qDebug() << "Retreat costs array: " << retreatCostValue.toString();
        nrOfRC++;
    }
    qDebug() << "Nr of retreat costs: " << QString::number(nrOfRC);

    // Types
    QJsonValue typesValue = cardRootValues.value("types");
    QJsonArray typesArray = typesValue.toArray();
    int nrOfTp = 0;
    qDebug() << "Types: " << typesArray;
    for(int i = 0; i < typesArray.count(); i++)
    {
        QJsonValue typeValue = typesArray.at(i).toString();
        qDebug() << "Types array: " << typeValue.toString();
        nrOfTp++;
    }
    qDebug() << "Nr of types: " << QString::number(nrOfTp);


    // Weaknesses
    QJsonValue weaknessesValue = cardRootValues.value("weaknesses");
    QJsonArray weaknessesArray = weaknessesValue.toArray();
    int nrOfWk = 0;
    for(int i = 0; i < weaknessesArray.count(); i++)
    {
        QJsonObject weaknessObject = weaknessesArray.at(i).toObject();
        qDebug() << "Weakness type: " << weaknessObject.value("type").toString();
        qDebug() << "Weakness value: " << weaknessObject.value("value").toString();
        nrOfWk++;
    }
    qDebug() << "Nr of weaknesses: " << QString::number(nrOfWk);

    // Main info
    QString Name = cardRootValues["name"].toString();
    QString ID = cardRootValues["id"].toString();
    QString Subtype = cardRootValues["subtype"].toString();
    QString Supertype = cardRootValues["supertype"].toString();
    QString HP = cardRootValues["hp"].toString();
    QString Number = cardRootValues["number"].toString();
    QString Artist = cardRootValues["artist"].toString();
    QString Rarity = cardRootValues["rarity"].toString();
    QString Series = cardRootValues["series"].toString();
    QString Set = cardRootValues["set"].toString();
    QString SetCode = cardRootValues["setCode"].toString();
    QString imgUrl = cardRootValues["imageUrl"].toString();
    int nrOfAbilities = 1;
    int nrOfRetreatCosts = 1;
    int nrOfTypes = 1;
    int nrOfAttacks = 1;
    int nrOfWeaknesses = 1;
    int nrOfResistances = 1;
    int hp = 200;
    QString cardDd = cardRootValues["id"].toString();
    QString name = cardRootValues["name"].toString();
    QString imageURL = cardRootValues["imageUrl"].toString();
    QString subtype = cardRootValues["subtype"].toString();
    QString supertype = cardRootValues["supertype"].toString();
    int number = 55;
    QString artist = cardRootValues["artist"].toString();
    QString rarity = cardRootValues["artist"].toString();
    QString series = cardRootValues["series"].toString();
    QString set = cardRootValues["set"].toString();
    QString setCode = cardRootValues["setCode"].toString();
    QString condition = "condition";
    QString status = "status";


    Card* pokePntr = new PokemonCard(hp, nrOfAbilities, nrOfRetreatCosts, nrOfTypes,  nrOfAttacks, nrOfWeaknesses, nrOfResistances, cardDd, name, imageURL, subtype, supertype, number, artist, rarity, series, set, setCode, condition, status);
    cardsInAlbum[0] = pokePntr;


    QString retreatTypeName = "temp retreatTypeName";
    QString abilityName = "temp abilityName";
    QString abilityText = "temp abilityText";
    QString abilityType = "temp abilityType";
    QString typeName = "temp typeName";
    QString attackCost = "temp attackCost";
    QString attackName = "temp attackName";
    QString attackText = "temp attackText";
    QString attackDamage = "temp attackDamage";
    QString attackConvertedEnergyCost = "temp attackConvertedEnergyCost";
    QString weaknessType = "temp weaknessType";
    QString weaknessValue = "temp weaknessValue";
    QString resistanceType = "temp resistanceType";
    QString resistanceValue = "temp resistanceValue";


    dynamic_cast<PokemonCard*>(pokePntr)->addAbility(abilityName, abilityText, abilityType);
    dynamic_cast<PokemonCard*>(pokePntr)->addType(typeName);

//    dynamic_cast<PokemonCard*>(pokePntr)->addRetreatCost(retreatTypeName);

    dynamic_cast<PokemonCard*>(pokePntr)->addAttack(attackCost, attackName, attackText, attackDamage, attackConvertedEnergyCost);

    dynamic_cast<PokemonCard*>(pokePntr)->addWeakness(weaknessType, weaknessValue);

    dynamic_cast<PokemonCard*>(pokePntr)->addResistance(resistanceType, resistanceValue);



//    QJsonDocument d = QJsonDocument::fromJson(fileText.toUtf8());
//    QJsonObject sett2 = d.object();
//    QJsonValue value = sett2.value(QString("card"));
//    //qWarning() << value;
//    QJsonObject item = value.toObject();
//    QString Name = item["name"].toString();





//        QJsonValue  WeaknessType = item2.value(QString("type"));
//        qDebug() << WeaknessType;
//        QJsonArray  WeaknessValue = item2["value"].toArray();
//        qDebug() << WeaknessValue;



//        QFile file("main.json");
//        file.open(QIODevice::ReadOnly | QIODevice::Text);
//        QByteArray jsonData = file.readAll();
//        file.close();

//        QJsonDocument document = QJsonDocument::fromJson(jsonData);
//        QJsonObject object = document.object();

//        QJsonValue value = object.value("agentsArray");
//        QJsonArray array = value.toArray();
//        foreach (const QJsonValue & v, array)
//            qDebug() << v.toObject().value("ID").toInt();
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

