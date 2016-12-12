#ifndef RESISTANCE_H
#define RESISTANCE_H
#include <QString>

class Resistance
{
private:
    QString resistanceType;
    QString resistanceValue;

public:
    // Default constructor
    Resistance();

    // Overloaded constructor
    Resistance(QString resistanceType, QString resistanceValue);

    // Setters
    void setResistanceType(QString resistanceType);
    void setResistanceValue(QString resistanceValue);

    // Getters
    QString getResistanceType();
    QString getResistanceValue();

    // toString
    QString toString();

    // Destructors
    ~Resistance();
};

#endif // RESISTANCE_H
