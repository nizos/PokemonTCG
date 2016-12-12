#ifndef LIBRARY_H
#define LIBRARY_H
#include <QString>
#include "album.h"

class Library
{
private:
    Album** albumsInLibrary;
    int nrOfAlbums;

public:
    // Default constructor
    Library();

    // Overloaded constructor
    Library(int nrOfAlbums);

    // Modifiers
    void addAlbum();
    void removeAlbum();

    // toString
    QString toString();

    // Destructor
    ~Library();
};

#endif // LIBRARY_H
