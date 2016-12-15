#include "card.h"

// Default constructor
Card::Card()
{
    this->id = "Default ID";
    this->name = "Default Name";
    this->imageURL = "Default ImageURL";
    this->subtype = "Default Subtype";
    this->supertype = "Default Supertype";
    this->number = 0;
    this->artist = "Default Artist";
    this->rarity = "Default Rarity";
    this->series = "Default Series";
    this->set = "Default Set";
    this->setCode = "Default SetCode";
}

// Overloaded constructor
Card::Card(QString id, QString name, QString imageURL, QString subtype, QString supertype, int number, QString artist, QString rarity, QString series, QString set, QString setCode)
{
    this->id = id;
    this->name = name;
    this->imageURL = imageURL;
    this->id = id;
    this->name = name;
    this->imageURL = imageURL;
    this->subtype = subtype;
    this->supertype = supertype;
    this->number = number;
    this->artist = artist;
    this->rarity = rarity;
    this->series = series;
    this->set = set;
    this->setCode = setCode;
}

// Copy constructor
Card::Card(const Card& source)
{
    this->id = source.id;
    this->name = source.name;
    this->imageURL = source.imageURL;
    this->subtype = source.subtype;
    this->supertype = source.supertype;
    this->number = source.number;
    this->artist = source.artist;
    this->rarity = source.rarity;
    this->series = source.series;
    this->set = source.set;
    this->setCode = source.setCode;
}

// Assignment operator
Card& Card::operator=(const Card& source)
{
    if (this != &source)
    {
    this->id = source.id;
    this->name = source.name;
    this->imageURL = source.imageURL;
    this->subtype = source.subtype;
    this->supertype = source.supertype;
    this->number = source.number;
    this->artist = source.artist;
    this->rarity = source.rarity;
    this->series = source.series;
    this->set = source.set;
    this->setCode = source.setCode;
    }
    return *this;
}

// Setters
void Card::setID(QString id)
{
    this->id = id;
}

void Card::setName(QString name)
{
    this->name = name;
}

void Card::setImageURL(QString imageURL)
{
    this->imageURL = imageURL;
}

void Card::setSubtype(QString subtype)
{
    this->subtype = subtype;
}

void Card::setSupertype(QString supertype)
{
    this->supertype = supertype;
}

void Card::setNumber(int number)
{
    this->number = number;
}

void Card::setArtist(QString artist)
{
    this->artist = artist;
}

void Card::setRarity(QString rarity)
{
    this->rarity = rarity;
}

void Card::setSeries(QString series)
{
    this->series = series;
}

void Card::setSet(QString set)
{
    this->set = set;
}

void Card::setSetCode(QString setCode)
{
    this->setCode = setCode;
}

// Getters
QString Card::getID()
{
    return this->id;
}

QString Card::getName()
{
    return this->name;
}

QString Card::getImageURL()
{
    return this->imageURL;
}

QString Card::getSubtype()
{
    return this->subtype;
}

QString Card::getSupertype()
{
    return this->supertype;
}

int Card::getNumber()
{
    return this->number;
}

QString Card::getArtist()
{
    return this->artist;
}

QString Card::getRarity()
{
    return this->rarity;
}

QString Card::getSeries()
{
    return this->series;
}

QString Card::getSet()
{
    return this->set;
}

QString Card::getSetCode()
{
    return this->setCode;
}

// toString
QString Card::toString()
{
    QString toReturn = "ID: " + this->id + ". \nName: " + this->name + ". \nImage link: " + this->imageURL + ". \nSubtype: " + this->subtype + ". \nSupertype: " + this->supertype + ". \nNumber: " + this->number + ". \nArtist: " + this->artist + ". \nRarity: " + this->rarity + ". \nSeries: " + this->rarity + ". \nSeries: " + this->series + ". \nSet: " + this->set + ". \nSet code: " + this->setCode + ".";
    return toReturn;
}

QString Card::toStringSpec()
{
    QString toReturn;
    toReturn = "toStringSpec from Card class";
    return toReturn;
}

// Destructors
Card::~Card()
{

}
