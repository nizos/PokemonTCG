#ifndef ENERGY_H
#define ENERGY_H
#include <QString>

class EnergyCard
{
private:

public:
    // Default constructor
    EnergyCard();

    // toString
    QString toString();
    QString toStringSpec();

    // Destructor
    ~EnergyCard();
};

#endif // ENERGY_H
