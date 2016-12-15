#ifndef LIBRARY_H
#define LIBRARY_H
#include <QString>
#include "album.h"

class Library
{
private:
    Album** albumsInLibrary;
    int nrOfAlbums;
    int libraryCapacity;

public:
    // Default constructor
    Library();

    // Overloaded constructor
    Library(int nrOfAlbums);

    // Copy constructor
    Library(Library& source);

    // Assignment operator
    Library& operator=(Library& source);

    // Modifiers
    void addAlbum();
    void removeAlbum();

    // toString
    QString toString();

    // Destructor
    ~Library();
};

#endif // LIBRARY_H
