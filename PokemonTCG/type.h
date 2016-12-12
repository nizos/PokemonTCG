#ifndef TYPE_H
#define TYPE_H
#include <QString>


class Type
{

private:
    QString typeName;

public:
    // Default constructor
    Type();

    // Overloaded constructor
    Type(QString typeName);

    // Setters
    void setTypeName(QString typeName);

    // Getters
    QString getTypeName();

    // toString
    QString toString();

    // Destructors
    ~Type();
};

#endif // TYPE_H
