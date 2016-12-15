#include "weakness.h"

// Default constructor
Weakness::Weakness()
{
    this->weaknessType = "Weakness type";
    this->weaknessValue = "Weakness value";
}

// Overloaded constructor
Weakness::Weakness(QString weaknessType, QString weaknessValue)
{
    this->weaknessType = weaknessType;
    this->weaknessValue = weaknessValue;
}

// Copy constructor
Weakness::Weakness(Weakness& source)
{
    this->weaknessType = source.weaknessType;
    this->weaknessValue = source.weaknessValue;
}

// Assignment operator
Weakness& Weakness::operator=(Weakness& source)
{
    if (this != &source)
    {
        this->weaknessType = source.weaknessType;
        this->weaknessValue = source.weaknessValue;
    }
    return *this;
}

// Getters
QString Weakness::getWeaknessType()
{
    return this->weaknessType;
}

QString Weakness::getWeaknessValue()
{
    return this->weaknessValue;
}

// Setters
void Weakness::setWeaknessType(QString weaknessType)
{
    this->weaknessType = weaknessType;
}

void Weakness::setWeaknessValue(QString weaknessValue)
{
    this->weaknessValue = weaknessValue;
}

// ToString
QString Weakness::toString()
{
    QString toReturn;
    toReturn = "toString from weakness class";
    return toReturn;
}

// Default destructor
Weakness::~Weakness()
{

}
