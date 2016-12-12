#ifndef CARD_H
#define CARD_H
#include <QString>

class Card
{
private:
    QString id;
    QString name;
    QString imageURL;
    QString subtype;
    QString supertype;
    int number;
    QString artist;
    QString rarity;
    QString series;
    QString set;
    QString setCode;
    QString condition;
    QString status;


public:
    // Default constructor
    Card();

    // Overloaded constructor
    Card(QString id, QString name, QString imageURL, QString subtype, QString supertype, int number, QString artist, QString rarity, QString series, QString set, QString setCode, QString condition, QString status);

    // Setters
    void setID(QString id);
    void setName(QString name);
    void setImageURL(QString imageURL);
    void setSubtype(QString subtype);
    void setSupertype(QString supertype);
    void setNumber(int number);
    void setArtist(QString artist);
    void setRarity(QString rarity);
    void setSeries(QString series);
    void setSet(QString set);
    void setSetCode(QString setCode);
    void setCondition(QString condition);
    void setStatus(QString status);

    // Getters
    QString getID();
    QString getName();
    QString getImageURL();
    QString getSubtype();
    QString getSupertype();
    int getNumber();
    QString getArtist();
    QString getRarity();
    QString getSeries();
    QString getSet();
    QString getSetCode();
    QString getCondition();
    QString getStatus();

    // toString
    QString toString();
    virtual QString toStringSpec();

    // Destructors
    ~Card();
};

#endif // CARD_H
