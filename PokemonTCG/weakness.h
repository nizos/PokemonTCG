#ifndef WEAKNESS_H
#define WEAKNESS_H
#include <QString>

class Weakness
{
private:
    QString weaknessType;
    QString weaknessValue;

public:
    // Default constructor
    Weakness();

    // Overloaded constructor
    Weakness(QString weaknessType, QString weaknessValue);

    // Copy constructor
    Weakness(Weakness& source);

    // Assignment operator
    Weakness& operator=(Weakness& source);

    // Setters
    void setWeaknessType(QString weaknessType);
    void setWeaknessValue(QString weaknessValue);

    // Getters
    QString getWeaknessType();
    QString getWeaknessValue();

    // toString
    QString toString();

    // Destructors
    ~Weakness();
};

#endif // WEAKNESS_H
