#include "library.h"

// Default constructor
Library::Library()
{
    Album* albmPntr = new Album();
    this->albumsInLibrary[0]= albmPntr;
    this->nrOfAlbums = 1;
}

// Overloaded constructor
Library::Library(int nrOfAlbums)
{
    this->nrOfAlbums = nrOfAlbums;
    for(int i = 0; i < nrOfAlbums; i++)
    {
        Album* albmPntr = new Album();
        this->albumsInLibrary[i]= albmPntr;
    }
}

// Modifiers
void Library::addAlbum()
{

}

void Library::removeAlbum()
{

}

// toString
QString Library::toString()
{
    QString toReturn;
    toReturn = "toString from Library class";
    return toReturn;
}

// Destructor
Library::~Library()
{

}
