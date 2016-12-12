#include "pokemonCard.h"

PokemonCard::PokemonCard() : Card()
{
    this->hp = 0;
    this->nrOfAbilities = 1;
    this->nrOfRetreatCosts = 1;
    this->nrOfTypes = 1;
    this->nrOfAttacks = 1;
    this->nrOfWeaknesses = 1;
    this->nrOfResistances = 1;

    Type* rtrcPntr = new Type();
    this->retreatCosts[nrOfRetreatCosts] = rtrcPntr;

    this->abilities[nrOfAbilities] = new Ability();

    this->types[nrOfTypes] = new Type();

    this->attacks[nrOfAttacks] = new Attack();

    this->weaknesses[nrOfWeaknesses] = new Weakness();

    this->resistances[nrOfResistances] = new Resistance();

}

PokemonCard::PokemonCard(int hp, int nrOfAbilities,int nrOfRetreatCosts, int nrOfTypes, int nrOfAttacks, int nrOfWeaknesses, int nrOfResistances, QString id, QString name, QString imageURL, QString subtype, QString supertype, int number, QString artist, QString rarity, QString series, QString set, QString setCode, QString condition, QString status)
    : Card(id, name, imageURL, subtype, supertype, number, artist, rarity, series, set, setCode, condition, status)
{
//    this->id = id;
//    this->name = name;
//    this->imageURL = imageURL;
//    this->subtype = subtype;
//    this->supertype = supertype;
//    this->number = number;
//    this->artist = artist;
//    this->rarity = rarity;
//    this->series = series;
//    this->set = set;
//    this->setCode = setCode;
//    this->condition = condition;
//    this->status = status;

    // Health
    this->hp = hp;

    // Abilities
    for(int i = 0; i < nrOfAbilities; i++)
    {
        Ability* abPntr = new Ability();
        this->abilities[i] = abPntr;
        this->nrOfAbilities++;
    }

    // Retreat costs
    for(int i = 0; i < nrOfRetreatCosts; i++)
    {
        Type* retrPntr = new Type();
        this->retreatCosts[i] = retrPntr;
        this->nrOfRetreatCosts++;
    }

    // Types
    for(int i = 0; i < nrOfTypes; i++)
    {
        Type* typPntr = new Type();
        this->types[i] = typPntr;
        this->nrOfTypes++;
    }

    // Attacks
    for(int i = 0; i < nrOfAttacks; i++)
    {
        Attack* atkPntr = new Attack();
        this->attacks[i] = atkPntr;
        this->nrOfAttacks++;
    }

    // Weaknesses
    for(int i = 0; i < nrOfWeaknesses; i++)
    {
        Weakness* wknsPntr = new Weakness();
        this->weaknesses[i] = wknsPntr;
        this->nrOfWeaknesses++;
    }

    // Resistances
    for(int i = 0; i < nrOfResistances; i++)
    {
        Resistance* rsstPntr = new Resistance();
        this->resistances[i] = rsstPntr;
        this->nrOfResistances++;
    }
}
