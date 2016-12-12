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
