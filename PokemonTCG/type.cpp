#include "type.h"

// Default constructor
Type::Type()
{
    this->typeName = "Type name";
}

// Overloaded constructor
Type::Type(QString typeName)
{
    this->typeName = typeName;
}

// Setters
void Type::setTypeName(QString typeName)
{
    this->typeName = typeName;
}

// Getters
QString Type::getTypeName()
{
    return this->typeName;
}

// toString
QString Type::toString()
{
    QString toReturn;
    toReturn = "toString from Type class";
    return toReturn;
}

// Destructors
Type::~Type()
{

}
