#ifndef ABILITY_H
#define ABILITY_H
#include <QString>

class Ability
{
private:
    QString abilityName;
    QString abilityText;
    QString abilityType;

public:
    // Default constructor
    Ability();

    // Overloaded constructor
    Ability(QString abilityName, QString abilityText, QString abilityType);

    // Setters
    void setAbilityName(QString abilityName);
    void setAbilityText(QString abilityText);
    void setAbilityType(QString abilityType);

    // Getters
    QString getAbilityName();
    QString getAbilityText();
    QString getAbilityType();

    // toString
    QString toString();

    // Destructor
    ~Ability();
};

#endif // ABILITY_H
