#include "ability.h"

// Default constructor
Ability::Ability()
{
    this->abilityName = "Ability name";
    this->abilityText = "Ability text";
    this->abilityType = "Ability type";
}

// Overloaded constructor
Ability::Ability(QString abilityName, QString abilityText, QString abilityType)
{
    this->abilityName = abilityName;
    this->abilityText = abilityText;
    this->abilityType = abilityType;
}

// Setters
void Ability::setAbilityName(QString name)
{
    this->abilityName = abilityName;
}

void Ability::setAbilityText(QString text)
{
    this->abilityText = abilityText;
}

void Ability::setAbilityType(QString type)
{
    this->abilityType = abilityType;
}


// Getters
QString Ability::getAbilityName()
{
    return this->abilityName;
}

QString Ability::getAbilityText()
{
    return this->abilityText;
}

QString Ability::getAbilityType()
{
    return this->abilityType;
}


// toString
QString Ability::toString()
{
    return "toString from Ability";
}

// Destructor
Ability::~Ability()
{

}
