#ifndef POKEMON_H
#define POKEMON_H
#include "card.h"
#include "type.h"
#include "ability.h"
#include "attack.h"
#include "weakness.h"
#include "resistance.h"

class PokemonCard
        : public Card
{
private:
    int hp;
    int nrOfAbilities;
    int nrOfRetreatCosts;
    int nrOfTypes;
    int nrOfAttacks;
    int nrOfWeaknesses;
    int nrOfResistances;

    Type** retreatCosts;
    Ability** abilities;
    Type** types;
    Attack** attacks;
    Weakness** weaknesses;
    Resistance** resistances;


public:
    // Constructors
    PokemonCard();
    PokemonCard(int hp, int nrOfAbilities, int nrOfRetreatCosts, int nrOfTypes, int nrOfAttacks, int nrOfWeaknesses, int nrOfResistances, QString id, QString name, QString imageURL, QString subtype, QString supertype, int number, QString artist, QString rarity, QString series, QString set, QString setCode, QString condition, QString status);

    // Setters
    void setHP(int hp);
    void setNrOfAbilities(int nrOfAbilities);
    void setNrOfRetreatCosts(int nrOfRetreatCosts);
    void setNrOfTypes(int nrOfTypes);
    void setNrOfAttacks(int nrOfAttacks);
    void setNrOfWeaknesses(int nrOfWeaknesses);
    void setNrOfResistances(int nrOfResistances);

    // Getters
    int getHP();
    int getNrOfAbilities();
    int getNrOfRetreatCosts();
    int getNrOfTypes();
    int getNrOfAttacks();
    int getNrOfWeaknesses();
    int getNrOfResistances();

    Type* getRetreatCost(int pos);
    Ability* getAbility(int pos);
    Type* getType(int pos);
    Attack* getAttack(int pos);
    Weakness* getWeakness(int pos);
    Resistance* getResistance(int pos);

    // Add
    void addRetreatCost();
    void addAbility();
    void addType();
    void addAttack();
    void addWeakness();
    void addResistance();

    // Remove
    void removeRetreatCost();
    void removeAbility();
    void removeType();
    void removeAttack();
    void removeWeakness();
    void removeResistance();

    // toString
    QString toString();

    // Destructor
    ~PokemonCard();


};


#endif // POKEMON_H
