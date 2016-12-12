#include "attack.h"

// Default constructor
Attack::Attack()
{
    this->attackCost = "Attack cost";
    this->attackName = "Attack name";
    this->attackText = "Attack text";
    this->attackDamage = "Attack damage";
    this->attackConvertedEnergyCost = "Attack converted energy cost";
}

// Overloaded constructor
Attack::Attack(QString attackCost, QString attackName, QString attackText, QString attackDamage, QString attackConvertedEnergyCost)
{
    this->attackCost = attackCost;
    this->attackName = attackName;
    this->attackText = attackText;
    this->attackDamage = attackDamage;
    this->attackConvertedEnergyCost = attackConvertedEnergyCost;
}

// Setters
void Attack::setAttackCost(QString attackCost)
{
    this->attackCost = attackCost;
}

void Attack::setAttackName(QString attackName)
{
    this->attackName = attackName;
}
void Attack::setAttackText(QString attackText)
{
    this->attackText = attackText;
}
void Attack::setAttackDamage(QString attackDamage)
{
    this->attackDamage = attackDamage;
}
void Attack::setAttackConvertedEnergyCost(QString attackConvertedEnergyCost)
{
    this->attackConvertedEnergyCost = attackConvertedEnergyCost;
}

// Getters
QString Attack::getAttackCost()
{
    return this->attackCost;
}

QString Attack::getAttackName()
{
    return this->attackName;
}

QString Attack::getAttackText()
{
    return this->attackText;
}

QString Attack::getAttackDamage()
{
    return this->attackDamage;
}

QString Attack::getAttackConvertedEnergyCost()
{
    return this->attackConvertedEnergyCost;
}

// toString
QString Attack::toString()
{
    QString toReturn;
    toReturn = "toString from Attack class";
    return toReturn;
}

// Destructor
Attack::~Attack()
{

}
