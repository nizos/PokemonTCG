#include "pokemonCard.h"

PokemonCard::PokemonCard() : Card()
{
    // Health
    this->hp = 10;

    // Abilities
    this->nrOfAbilities = 0;
    this->abilities = new Ability*[nrOfAbilities];

    // Types
    this->nrOfTypes = 0;
    this->types = new Type*[nrOfTypes];

    // Attacks
    this->nrOfAttacks = 0;
    this->attacks = new Attack*[nrOfAttacks];

    // Weaknesses
    this->nrOfWeaknesses = 0;
    this->weaknesses = new Weakness*[nrOfWeaknesses];

    // Resistances
    this->nrOfResistances = 0;
    this->resistances = new Resistance*[nrOfResistances];
}

PokemonCard::PokemonCard(int hp, QString id, QString name, QString imageURL, QString subtype, QString supertype, int number, QString artist, QString rarity, QString series, QString set, QString setCode)
    : Card(id, name, imageURL, subtype, supertype, number, artist, rarity, series, set, setCode, condition, status)
{
    // Health
    this->hp = hp;

    // Abilities
    this->nrOfAbilities = 0;
    this->abilities = new Ability*[nrOfAbilities];

    // Types
    this->nrOfTypes = 0;
    this->types = new Type*[nrOfTypes];

    // Attacks
    this->nrOfAttacks = 0;
    this->attacks = new Attack*[nrOfAttacks];

    // Weaknesses
    this->nrOfWeaknesses = 0;
    this->weaknesses = new Weakness*[nrOfWeaknesses];

    // Resistances
    this->nrOfResistances = 0;
    this->resistances = new Resistance*[nrOfResistances];
}


// Setters
void PokemonCard::setHP(int hp)
{
    this->hp = hp;
}

void PokemonCard::setNrOfAbilities(int nrOfAbilities)
{
    this->nrOfAbilities = nrOfAbilities;
}

void PokemonCard::setNrOfRetreatCosts(int nrOfRetreatCosts)
{
    this->nrOfRetreatCosts = nrOfRetreatCosts;
}

void PokemonCard::setNrOfTypes(int nrOfTypes)
{
    this->nrOfTypes = nrOfTypes;
}

void PokemonCard::setNrOfAttacks(int nrOfAttacks)
{
    this->nrOfAttacks = nrOfAttacks;
}

void PokemonCard::setNrOfWeaknesses(int nrOfWeaknesses)
{
    this->nrOfWeaknesses = nrOfWeaknesses;
}

void PokemonCard::setNrOfResistances(int nrOfResistances)
{
    this->nrOfResistances = nrOfResistances;
}

// Getters
int PokemonCard::getHP()
{
    return this->hp;
}

int PokemonCard::getNrOfAbilities()
{
    return this->nrOfAbilities;
}

int PokemonCard::getNrOfRetreatCosts()
{
    return this->nrOfRetreatCosts;
}

int PokemonCard::getNrOfTypes()
{
    return this->nrOfTypes;
}

int PokemonCard::getNrOfAttacks()
{
    return this->nrOfAttacks;
}

int PokemonCard::getNrOfWeaknesses()
{
    return this->nrOfWeaknesses;
}

int PokemonCard::getNrOfResistances()
{
    return this->nrOfResistances;
}

Type* PokemonCard::getRetreatCost(int pos)
{
    return this->retreatCosts[pos];
}

Ability* PokemonCard::getAbility(int pos)
{
    return this->abilities[pos];
}

Type* PokemonCard::getType(int pos)
{
    return this->types[pos];
}

Attack* PokemonCard::getAttack(int pos)
{
    return this->attacks[pos];
}

Weakness* PokemonCard::getWeakness(int pos)
{
    return this->weaknesses[pos];
}

Resistance* PokemonCard::getResistance(int pos)
{
    return this->resistances[pos];
}




// Add
void PokemonCard::addRetreatCost(QString retreatTypeName)
{
    Type** tempRetreatCosts = new Type*[nrOfRetreatCosts+1];
    for (int i = 0; i < nrOfRetreatCosts; i++)
    {
        Type* retrPntr = new Type(retreatCosts[i]->getTypeName());
        tempRetreatCosts[i] = retrPntr;
    }
    retreatCosts = tempRetreatCosts;
    retreatCosts[nrOfRetreatCosts] = new Type(retreatTypeName);
    nrOfRetreatCosts++;
}

void PokemonCard::addAbility(QString abilityName, QString abilityText, QString abilityType)
{
    Ability** tempAbilities = new Ability*[nrOfAbilities+1];
    for (int i = 0; i < nrOfAbilities; i++)
    {
        Ability* abltyPntr = new Ability(abilities[i]->getAbilityName(),abilities[i]->getAbilityText(),abilities[i]->getAbilityType());
        tempAbilities[i] = abltyPntr;
    }
    abilities = tempAbilities;
    abilities[nrOfAbilities] = new Ability(abilityName,abilityText,abilityType);
    nrOfAbilities++;
}

void PokemonCard::addType(QString typeName)
{
    Type** tempTypes = new Type*[nrOfTypes+1];
    for (int i = 0; i < nrOfTypes; i++)
    {
        Type* typePntr = new Type(types[i]->getTypeName());
        tempTypes[i] = typePntr;
    }
    types = tempTypes;
    types[nrOfTypes] = new Type(typeName);
    nrOfTypes++;
}

void PokemonCard::addAttack(QString attackCost, QString attackName, QString attackText, QString attackDamage, QString attackConvertedEnergyCost)
{
    Attack** tempAttacks = new Attack*[nrOfAttacks+1];
    for (int i = 0; i < nrOfAttacks; i++)
    {
        Attack* attkPntr = new Attack(attacks[i]->getAttackCost(),attacks[i]->getAttackName(),attacks[i]->getAttackText(), attacks[i]->getAttackDamage(), attacks[i]->getAttackConvertedEnergyCost());
        tempAttacks[i] = attkPntr;
    }
    attacks = tempAttacks;
    attacks[nrOfAttacks] = new Attack(attackCost,attackName,attackText,attackDamage,attackConvertedEnergyCost);
    nrOfAttacks++;
}

void PokemonCard::addWeakness(QString weaknessType, QString weaknessValue)
{
    Weakness** tempWeaknesses = new Weakness*[nrOfWeaknesses+1];
    for (int i = 0; i < nrOfWeaknesses; i++)
    {
        Weakness* wknsPntr = new Weakness(weaknesses[i]->getWeaknessType(),weaknesses[i]->getWeaknessValue());
        tempWeaknesses[i] = wknsPntr;
    }
    weaknesses = tempWeaknesses;
    weaknesses[nrOfWeaknesses] = new Weakness(weaknessType,weaknessValue);
    nrOfWeaknesses++;
}

void PokemonCard::addResistance(QString resistanceType, QString resistanceValue)
{
    Resistance** tempResistances = new Resistance*[nrOfResistances+1];
    for (int i = 0; i < nrOfResistances; i++)
    {
        Resistance* rstsPntr = new Resistance(resistances[i]->getResistanceType(),resistances[i]->getResistanceValue());
        tempResistances[i] = rstsPntr;
    }
    resistances = tempResistances;
    resistances[nrOfResistances] = new Resistance(resistanceType,resistanceValue);
    nrOfResistances++;
}


// Remove
void PokemonCard::removeRetreatCost()
{

}

void PokemonCard::removeAbility()
{

}

void PokemonCard::removeType()
{

}

void PokemonCard::removeAttack()
{

}

void PokemonCard::removeWeakness()
{

}

void PokemonCard::removeResistance()
{

}

// toString
QString PokemonCard::toString()
{
    QString toReturn;
    toReturn = "toString from PokemonCard class";
    return toReturn;
}

// Destructor
PokemonCard::~PokemonCard()
{

}
