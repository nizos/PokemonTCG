#ifndef ABSTRACTCARDMODEL_H
#define ABSTRACTCARDMODEL_H
#include <QString>
#include <QObject>
#include <QAbstractListModel>
#include "cardsmanager.h"
#include "album.h"
#include "card.h"


class AbstractCardModel : public QAbstractListModel
{
    Q_OBJECT
public:
    // Card roles
    enum AlbumRoles { CardIDRole = Qt::UserRole + 1, CardMIDRole, NameRole, ImageURLRole, SubtypeRole, SupertypeRole, NumberRole, ArtistRole, RarityRole, SeriesRole, SetRole,  SetCodeRole, ConditionRole, StatusRole};

    // Default Constructor
    AbstractCardModel(QObject *parent = 0);

    // Overloaded Constructor
    AbstractCardModel(CardsManager *cardManagerPointer, QObject *parent = 0);

    void setCardsManager(CardsManager *cardManagerPointer);
    void setAbstractAlbum(Album *abstractAlbum);

    // this uses cardForIndex to get the card, then uses role to return the actual data
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

    // Default Destructor
    ~AbstractCardModel();

protected:
    QHash<int, QByteArray> roleNames() const;

    virtual Card cardForIndex(const QModelIndex &index) const = 0;

protected:
    CardsManager *m_cardManagerPointer;
    Album *m_abstractAlbum;
};

#endif //ABSTRACTCARDMODEL_H
