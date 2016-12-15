#include "pokemonCard.h"

PokemonCard::PokemonCard() : Card()
{
    // Health
    this->hp = 10;

    // Abilities
    this->nrOfAbilities = 0;
    this->abilitiesCapacity = 2;
    this->abilities = new Ability*[abilitiesCapacity];

    // Types
    this->nrOfTypes = 0;
    this->typesCapacity = 2;
    this->types = new Type*[typesCapacity];

    // Attacks
    this->nrOfAttacks = 0;
    this->attacksCapacity = 2;
    this->attacks = new Attack*[attacksCapacity];

    // Weaknesses
    this->nrOfWeaknesses = 0;
    this->weaknessesCapacity = 2;
    this->weaknesses = new Weakness*[weaknessesCapacity];

    // Resistances
    this->nrOfResistances = 0;
    this->resistancesCapacity = 2;
    this->resistances = new Resistance*[resistancesCapacity];

    // Retreat costs
    this->nrOfRetreatCosts = 0;
    this->retreatCostsCapacity = 2;
    this->retreatCosts = new Type*[retreatCostsCapacity];
}

PokemonCard::PokemonCard(QString id, QString name, QString imageURL, QString subtype, QString supertype, int number, QString artist, QString rarity, QString series, QString set, QString setCode)
    : Card(id, name, imageURL, subtype, supertype, number, artist, rarity, series, set, setCode)
{
    // Health
    this->hp = 0;

    // Abilities
    this->nrOfAbilities = 0;
    this->abilitiesCapacity = 2;
    this->abilities = new Ability*[abilitiesCapacity];

    // Types
    this->nrOfTypes = 0;
    this->typesCapacity = 2;
    this->types = new Type*[typesCapacity];

    // Attacks
    this->nrOfAttacks = 0;
    this->attacksCapacity = 2;
    this->attacks = new Attack*[attacksCapacity];

    // Weaknesses
    this->nrOfWeaknesses = 0;
    this->weaknessesCapacity = 2;
    this->weaknesses = new Weakness*[weaknessesCapacity];

    // Resistances
    this->nrOfResistances = 0;
    this->resistancesCapacity = 2;
    this->resistances = new Resistance*[resistancesCapacity];

    // Retreat costs
    this->nrOfRetreatCosts = 0;
    this->retreatCostsCapacity = 2;
    this->retreatCosts = new Type*[retreatCostsCapacity];
}

// Copy constructor
PokemonCard::PokemonCard(PokemonCard& source)
{

    this->setID(source.getID());
    this->setName(source.getName());
    this->setImageURL(source.getImageURL());
    this->setSubtype(source.getSubtype());
    this->setSupertype(source.getSupertype());
    this->setNumber(source.getNumber());
    this->setArtist(source.getArtist());
    this->setRarity(source.getRarity());
    this->setSeries(source.getSeries());
    this->setSet(source.getSet());
    this->setSetCode(source.getSetCode());
    this->hp = source.getHP();

    // Abilities
    this->nrOfAbilities = source.nrOfAbilities;
    this->abilitiesCapacity = source.abilitiesCapacity;
    this->abilities = new Ability*[abilitiesCapacity];
    for(int i = 0; i < nrOfAbilities; i++)
    {
        this->abilities[i] = new Ability(*source.abilities[i]);
    }

    // Attacks
    this->nrOfAttacks = source.nrOfAttacks;
    this->attacksCapacity = source.attacksCapacity;
    this->attacks = new Attack*[attacksCapacity];
    for(int i = 0; i < nrOfAttacks; i++)
    {
        this->attacks[i] = new Attack(*source.attacks[i]);
    }

    // Retreat costs
    this->nrOfRetreatCosts = source.nrOfRetreatCosts;
    this->retreatCostsCapacity = source.retreatCostsCapacity;
    this->retreatCosts = new Type*[retreatCostsCapacity];
    for(int i = 0; i < nrOfRetreatCosts; i++)
    {
        this->retreatCosts[i] = new Type(*source.retreatCosts[i]);
    }

    // Resistances
    this->nrOfResistances = source.nrOfResistances;
    this->resistancesCapacity = source.resistancesCapacity;
    this->resistances = new Resistance*[resistancesCapacity];
    for(int i = 0; i < nrOfResistances; i++)
    {
        this->resistances[i] = new Resistance(*source.resistances[i]);
    }

    // Types
    this->nrOfTypes = source.nrOfTypes;
    this->typesCapacity = source.typesCapacity;
    this->types = new Type*[typesCapacity];
    for(int i = 0; i < nrOfTypes; i++)
    {
        this->types[i] = new Type(*source.types[i]);
    }

    // Weaknesses
    this->nrOfWeaknesses = source.nrOfWeaknesses;
    this->weaknessesCapacity = source.weaknessesCapacity;
    this->weaknesses = new Weakness*[weaknessesCapacity];
    for(int i = 0; i < nrOfWeaknesses; i++)
    {
        this->weaknesses[i] = new Weakness(*source.weaknesses[i]);
    }
}

// Assignment operator
PokemonCard& PokemonCard::operator=(PokemonCard& source)
{

    if (this != &source)
    {
        // Abilities
        for (int i = 0; i < this->nrOfAbilities; i++)
        {
            delete this->abilities[i];
        }
        delete[] this->abilities;

        // Attacks
        for (int i = 0; i < this->nrOfAttacks; i++)
        {
            delete this->attacks[i];
        }
        delete[] this->attacks;

        // Retreat costs
        for (int i = 0; i < this->nrOfRetreatCosts; i++)
        {
            delete this->retreatCosts[i];
        }
        delete[] this->retreatCosts;

        // Resistances
        for (int i = 0; i < this->nrOfResistances; i++)
        {
            delete this->resistances[i];
        }
        delete[] this->resistances;

        // Types
        for (int i = 0; i < this->nrOfTypes; i++)
        {
            delete this->types[i];
        }
        delete[] this->types;

        // Weaknesses
        for (int i = 0; i < this->nrOfWeaknesses; i++)
        {
            delete this->weaknesses[i];
        }
        delete[] this->weaknesses;

        this->setID(source.getID());
        this->setName(source.getName());
        this->setImageURL(source.getImageURL());
        this->setSubtype(source.getSubtype());
        this->setSupertype(source.getSupertype());
        this->setNumber(source.getNumber());
        this->setArtist(source.getArtist());
        this->setRarity(source.getRarity());
        this->setSeries(source.getSeries());
        this->setSet(source.getSet());
        this->setSetCode(source.getSetCode());
        this->hp = source.getHP();
        this->hp = source.hp;

        // Abilities
        this->nrOfAbilities = source.nrOfAbilities;
        this->abilitiesCapacity = source.abilitiesCapacity;
        this->abilities = new Ability*[abilitiesCapacity];
        for(int i = 0; i < nrOfAbilities; i++)
        {
            this->abilities[i] = new Ability(*source.abilities[i]);
        }

        // Attacks
        this->nrOfAttacks = source.nrOfAttacks;
        this->attacksCapacity = source.attacksCapacity;
        this->attacks = new Attack*[attacksCapacity];
        for(int i = 0; i < nrOfAttacks; i++)
        {
            this->attacks[i] = new Attack(*source.attacks[i]);
        }

        // Retreat costs
        this->nrOfRetreatCosts = source.nrOfRetreatCosts;
        this->retreatCostsCapacity = source.retreatCostsCapacity;
        this->retreatCosts = new Type*[retreatCostsCapacity];
        for(int i = 0; i < nrOfRetreatCosts; i++)
        {
            this->retreatCosts[i] = new Type(*source.retreatCosts[i]);
        }

        // Resistances
        this->nrOfResistances = source.nrOfResistances;
        this->resistancesCapacity = source.resistancesCapacity;
        this->resistances = new Resistance*[resistancesCapacity];
        for(int i = 0; i < nrOfResistances; i++)
        {
            this->resistances[i] = new Resistance(*source.resistances[i]);
        }

        // Types
        this->nrOfTypes = source.nrOfTypes;
        this->typesCapacity = source.typesCapacity;
        this->types = new Type*[typesCapacity];
        for(int i = 0; i < nrOfTypes; i++)
        {
            this->types[i] = new Type(*source.types[i]);
        }

        // Weaknesses
        this->nrOfWeaknesses = source.nrOfWeaknesses;
        this->weaknessesCapacity = source.weaknessesCapacity;
        this->weaknesses = new Weakness*[weaknessesCapacity];
        for(int i = 0; i < nrOfWeaknesses; i++)
        {
            this->weaknesses[i] = new Weakness(*source.weaknesses[i]);
        }

    }
    return *this;
}

// Setters

// Setters
void PokemonCard::setID(QString id)
{
    Card::setID(id);
}

void PokemonCard::setName(QString name)
{
    Card::setName(name);
}

void PokemonCard::setImageURL(QString imageURL)
{
    Card::setImageURL(imageURL);
}

void PokemonCard::setSubtype(QString subtype)
{
    Card::setSubtype(subtype);
}

void PokemonCard::setSupertype(QString supertype)
{
    Card::setSupertype(supertype);
}

void PokemonCard::setNumber(int number)
{
    Card::setNumber(number);
}

void PokemonCard::setArtist(QString artist)
{
    Card::setArtist(artist);
}

void PokemonCard::setRarity(QString rarity)
{
    Card::setRarity(rarity);
}

void PokemonCard::setSeries(QString series)
{
    Card::setSeries(series);
}

void PokemonCard::setSet(QString set)
{
    Card::setSet(set);
}

void PokemonCard::setSetCode(QString setCode)
{
    Card::setSetCode(setCode);
}

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

//// Getters
//QString PokemonCard::getID()
//{
//    return this->Card::getID();
//}

//QString PokemonCard::getName()
//{
//    return this->Card::getName();
//}

//QString PokemonCard::getImageURL()
//{
//    return this->Card::getImageURL();
//}

//QString PokemonCard::getSubtype()
//{
//    return this->Card::getSubtype();
//}

//QString PokemonCard::getSupertype()
//{
//    return this->Card::getSupertype();
//}

//int PokemonCard::getNumber()
//{
//    return this->Card::getNumber();
//}

//QString PokemonCard::getArtist()
//{
//    return this->Card::getArtist();
//}

//QString PokemonCard::getRarity()
//{
//    return this->Card::getRarity();
//}

//QString PokemonCard::getSeries()
//{
//    return this->Card::getSeries();
//}

//QString PokemonCard::getSet()
//{
//    return this->Card::getSet();
//}

//QString PokemonCard::getSetCode()
//{
//    return this->Card::getSetCode();
//}

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
    if(retreatCostsCapacity > nrOfRetreatCosts)
    {
        retreatCosts[nrOfRetreatCosts] = new Type(retreatTypeName);
    }
    else
    {
        Type** tempRetreatCosts = new Type*[nrOfRetreatCosts+1];
        for (int i = 0; i < nrOfRetreatCosts; i++)
        {
            Type* retrPntr = new Type(retreatCosts[i]->getTypeName());
            tempRetreatCosts[i] = retrPntr;
        }
        retreatCosts = tempRetreatCosts;
        retreatCosts[nrOfRetreatCosts] = new Type(retreatTypeName);
        retreatCostsCapacity++;
    }
    nrOfRetreatCosts++;
}

void PokemonCard::addAbility(QString abilityName, QString abilityText, QString abilityType)
{
    if(abilitiesCapacity > nrOfAbilities)
    {
        abilities[nrOfAbilities] = new Ability(abilityName, abilityText, abilityType);
    }
    else
    {
        Ability** tempAbilities = new Ability*[nrOfAbilities+1];
        for (int i = 0; i < nrOfAbilities; i++)
        {
            Ability* abltyPntr = new Ability(abilities[i]->getAbilityName(),abilities[i]->getAbilityText(),abilities[i]->getAbilityType());
            tempAbilities[i] = abltyPntr;
        }
        abilities = tempAbilities;
        abilities[nrOfAbilities] = new Ability(abilityName,abilityText,abilityType);
        abilitiesCapacity++;;
    }
    nrOfAbilities++;
}

void PokemonCard::addType(QString typeName)
{
    if(typesCapacity > nrOfTypes)
    {
        types[nrOfTypes] = new Type(typeName);
    }
    else
    {
        Type** tempTypes = new Type*[nrOfTypes+1];
        for (int i = 0; i < nrOfTypes; i++)
        {
            Type* typePntr = new Type(types[i]->getTypeName());
            tempTypes[i] = typePntr;
        }
        types = tempTypes;
        types[nrOfTypes] = new Type(typeName);
        typesCapacity++;
    }
    nrOfTypes++;
}

void PokemonCard::addAttack(QString attackCost, QString attackName, QString attackText, QString attackDamage, QString attackConvertedEnergyCost)
{
    if(attacksCapacity > nrOfAttacks)
    {
        attacks[nrOfAttacks] = new Attack(attackCost,attackName,attackText,attackDamage,attackConvertedEnergyCost);
    }
    else
    {
        Attack** tempAttacks = new Attack*[nrOfAttacks+1];
        for (int i = 0; i < nrOfAttacks; i++)
        {
            Attack* attkPntr = new Attack(attacks[i]->getAttackCost(),attacks[i]->getAttackName(),attacks[i]->getAttackText(), attacks[i]->getAttackDamage(), attacks[i]->getAttackConvertedEnergyCost());
            tempAttacks[i] = attkPntr;
        }
        attacks = tempAttacks;
        attacks[nrOfAttacks] = new Attack(attackCost,attackName,attackText,attackDamage,attackConvertedEnergyCost);
        attacksCapacity++;
    }
    nrOfAttacks++;
}

void PokemonCard::addWeakness(QString weaknessType, QString weaknessValue)
{
    if(weaknessesCapacity > nrOfWeaknesses)
    {
        weaknesses[nrOfWeaknesses] = new Weakness(weaknessType,weaknessValue);
    }
    else
    {
        Weakness** tempWeaknesses = new Weakness*[nrOfWeaknesses+1];
        for (int i = 0; i < nrOfWeaknesses; i++)
        {
            Weakness* wknsPntr = new Weakness(weaknesses[i]->getWeaknessType(),weaknesses[i]->getWeaknessValue());
            tempWeaknesses[i] = wknsPntr;
        }
        weaknesses = tempWeaknesses;
        weaknesses[nrOfWeaknesses] = new Weakness(weaknessType,weaknessValue);
        weaknessesCapacity++;
    }
    nrOfWeaknesses++;
}

void PokemonCard::addResistance(QString resistanceType, QString resistanceValue)
{
    if(resistancesCapacity > nrOfResistances)
    {
        resistances[nrOfResistances] = new Resistance(resistanceType,resistanceValue);
    }
    else
    {
        Resistance** tempResistances = new Resistance*[nrOfResistances+1];
        for (int i = 0; i < nrOfResistances; i++)
        {
            Resistance* rstsPntr = new Resistance(resistances[i]->getResistanceType(),resistances[i]->getResistanceValue());
            tempResistances[i] = rstsPntr;
        }
        resistances = tempResistances;
        resistances[nrOfResistances] = new Resistance(resistanceType,resistanceValue);
        resistancesCapacity++;
    }
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
