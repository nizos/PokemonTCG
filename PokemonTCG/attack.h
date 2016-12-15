#ifndef ATTACK_H
#define ATTACK_H
#include <QString>

class Attack
{
private:
    QString attackCost;
    QString attackName;
    QString attackText;
    QString attackDamage;
    QString attackConvertedEnergyCost;

public:
    // Default constructor
    Attack();

    // Overloaded constructor
    Attack(QString attackCost, QString attackName, QString attackText, QString attackDamage, QString attackConvertedEnergyCost);

    // Copy constructor
    Attack(Attack& source);

    // Assignment operator
    Attack& operator=(Attack& source);


    // Setters
    void setAttackCost(QString attackCost);
    void setAttackName(QString attackName);
    void setAttackText(QString attackText);
    void setAttackDamage(QString attackDamage);
    void setAttackConvertedEnergyCost(QString attackConvertedEnergyCost);

    // Getters
    QString getAttackCost();
    QString getAttackName();
    QString getAttackText();
    QString getAttackDamage();
    QString getAttackConvertedEnergyCost();

    // toString
    QString toString();

    // Destructor
    ~Attack();


};

#endif // ATTACK_H
