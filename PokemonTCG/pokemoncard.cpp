#include "pokemonCard.h"

PokemonCard::PokemonCard() : Card()
{
    // Health
    this->hp = 10;

    // Abilities
    this->nrOfAbilities = 1;
    this->abilities = new Ability*[nrOfAbilities];

    // Retreat costs
    this->nrOfRetreatCosts = 1;
    this->retreatCosts = new Type*[nrOfRetreatCosts];

    // Types
    this->nrOfTypes = 1;
    this->types = new Type*[nrOfTypes];

    // Attacks
    this->nrOfAttacks = 1;
    this->attacks = new Attack*[nrOfAttacks];

    // Weaknesses
    this->nrOfWeaknesses = 1;
    this->weaknesses = new Weakness*[nrOfWeaknesses];

    // Resistances
    this->nrOfResistances = 1;
    this->resistances = new Resistance*[nrOfResistances];
}

PokemonCard::PokemonCard(int hp, int nrOfAbilities,int nrOfRetreatCosts, int nrOfTypes, int nrOfAttacks, int nrOfWeaknesses, int nrOfResistances, QString id, QString name, QString imageURL, QString subtype, QString supertype, int number, QString artist, QString rarity, QString series, QString set, QString setCode, QString condition, QString status)
    : Card(id, name, imageURL, subtype, supertype, number, artist, rarity, series, set, setCode, condition, status)
{
    // Health
    this->hp = hp;

    // Abilities
    this->nrOfAbilities = nrOfAbilities;
    this->abilities = new Ability*[nrOfAbilities];

    // Retreat costs
    this->nrOfRetreatCosts = nrOfRetreatCosts;
    this->retreatCosts = new Type*[nrOfRetreatCosts];

    // Types
    this->nrOfTypes = nrOfTypes;
    this->types = new Type*[nrOfTypes];

    // Attacks
    this->nrOfAttacks = nrOfAttacks;
    this->attacks = new Attack*[nrOfAttacks];

    // Weaknesses
    this->nrOfWeaknesses = nrOfWeaknesses;
    this->weaknesses = new Weakness*[nrOfWeaknesses];

    // Resistances
    this->nrOfResistances = nrOfResistances;
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


// Add
void PokemonCard::addRetreatCost()
{

}

void PokemonCard::addAbility()
{

}

void PokemonCard::addType()
{

}

void PokemonCard::addAttack()
{

}

void PokemonCard::addWeakness()
{

}

void PokemonCard::addResistance()
{

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
