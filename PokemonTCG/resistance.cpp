#include "resistance.h"

// Default constructor
Resistance::Resistance()
{
    this->resistanceType = "Resistance type";
    this->resistanceValue = "Resistance value";
}

// Overloaded constructor
Resistance::Resistance(QString resistanceType, QString resistanceValue)
{
    this->resistanceType = resistanceType;
    this->resistanceValue = resistanceValue;
}


// Copy constructor
Resistance::Resistance(Resistance& source)
{
    this->resistanceType = source.resistanceType;
    this->resistanceValue = source.resistanceValue;
}

// Assignment operator
Resistance& Resistance::operator=(Resistance& source)
{
    if (this != &source)
    {
        this->resistanceType = source.resistanceType;
        this->resistanceValue = source.resistanceValue;
    }
    return *this;
}

// Setters
void Resistance::setResistanceType(QString resistanceType)
{
    this->resistanceType = resistanceType;
}

void Resistance::setResistanceValue(QString resistanceValue)
{
    this->resistanceValue;
}

// Getters
QString Resistance::getResistanceType()
{
    return this->resistanceType;
}

QString Resistance::getResistanceValue()
{
    return this->resistanceValue;
}

// toString
QString Resistance::toString()
{
    QString toReturn;
    toReturn = "toString from Resistance class";
    return toReturn;
}

// Destructors
Resistance::~Resistance()
{

}
