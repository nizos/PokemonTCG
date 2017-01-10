#include "card.h"

// Default Constructor
Card::Card()
{
    this->cardMID = 0;
    this->cardID = " ";
    this->name = " ";
    this->imageURL = " ";
    this->subtype = " ";
    this->supertype = " ";
    this->number = 0;
    this->artist = " ";
    this->rarity = " ";
    this->series = " ";
    this->set = " ";
    this->setCode = " ";
    this->condition = " ";
    this->status = " ";
}

// Overloaded Constructor
Card::Card(const int &newCardMID, const QString &newCardID, const QString &newName, const QString &newImageURL, const QString &newSubtype, const QString &newSupertype, const int &newNumber, const QString &newArtist, const QString &newRarity, const QString &newSeries, const QString &newSet, const QString &newSetCode, const QString &newCondition, const QString &newStatus)
{
    // For debugging purposes
    qDebug() << "[Card] [called] [Overloaded Constructor]: " << newCardMID << ", " << newCardID << ", " << newName << ", " << newImageURL << ", " << newSubtype << ", " << newSupertype << ", " << newNumber << ", " << newArtist << ", " << newRarity << ", " << newSeries << ", " << newSet << ",  " << newSetCode << ", " << newCondition << ", " << newStatus;

    this->cardMID = newCardMID;
    this->cardID = newCardID;
    this->name = newName;
    this->imageURL = newImageURL;
    this->subtype = newSubtype;
    this->supertype = newSupertype;
    this->number = newNumber;
    this->artist = newArtist;
    this->rarity = newRarity;
    this->series = newSeries;
    this->set = newSet;
    this->setCode = newSetCode;
    this->condition = newCondition;
    this->status = newStatus;
}

// GETTERS
int Card::getCardMID() const
{
    return this->cardMID;
}


QString Card::getCardID() const
{
    return this->cardID;
}

QString Card::getName() const
{
    return this->name;
}

QString Card::getImageURL() const
{
    return this->imageURL;
}

QString Card::getSubtype() const
{
    return this->subtype;
}

QString Card::getSupertype() const
{
    return this->supertype;
}

int Card::getNumber() const
{
    return this->number;
}

QString Card::getArtist() const
{
    return this->artist;
}

QString Card::getRarity() const
{
    return this->rarity;
}

QString Card::getSeries() const
{
    return this->series;
}

QString Card::getSet() const
{
    return this->set;
}

QString Card::getSetCode() const
{
    return this->setCode;
}

QString Card::getCondition() const
{
    return this->condition;
}

QString Card::getStatus() const
{
    return this->status;
}

// SETTERS
void Card::setCardMID(const int newCardMID)
{
    this->cardMID = newCardMID;
}

void Card::setCardID(const QString newCardID)
{
    this->cardID = newCardID;
}

void Card::setName(const QString newName)
{
    this->name = newName;
}

void Card::setImageURL(const QString newImageURL)
{
    this->imageURL = newImageURL;
}

void Card::setSubtype(const QString newSubtype)
{
    this->subtype = newSubtype;
}

void Card::setSupertype(const QString newSupertype)
{
    this->supertype = newSupertype;
}

void Card::setNumber(const int newNumber)
{
    this->number = newNumber;
}

void Card::setArtist(const QString newArtist)
{
    this->artist = newArtist;
}

void Card::setRarity(const QString newRarity)
{
    this->rarity = newRarity;
}

void Card::setSeries(const QString newSeries)
{
    this->series = newSeries;
}

void Card::setSet(const QString newSet)
{
    this->set = newSet;
}

void Card::setSetCode(const QString newSetCode)
{
    this->setCode = newSetCode;
}

void Card::setCondition(const QString newCondition)
{
    this->condition = newCondition;
}

void Card::setStatus(const QString newStatus)
{
    this->status = newStatus;
}

// Destructor
Card::~Card()
{
    qDebug() << "[Card] [called] [cardMID:" << cardMID << "] [Destructor]";
}
