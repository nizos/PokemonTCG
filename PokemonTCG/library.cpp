#include "library.h"

// Default constructor
Library::Library()
{
    this->nrOfAlbums = 0;
    this->libraryCapacity = 4;
    this->albumsInLibrary = new Album*[libraryCapacity];

}

// Overloaded constructor
Library::Library(int nrOfAlbums)
{
    this->nrOfAlbums = nrOfAlbums;
    this->libraryCapacity = (nrOfAlbums+1);
    this->albumsInLibrary = new Album*[libraryCapacity];
    for(int i = 0; i < nrOfAlbums; i++)
    {
        Album* albmPntr = new Album();
        this->albumsInLibrary[i]= albmPntr;
    }
}

// Copy constructor
Library::Library(Library& source)
{
    this->nrOfAlbums = source.nrOfAlbums;
    this->libraryCapacity = source.libraryCapacity;
    this->albumsInLibrary = new Album*[this->libraryCapacity];
    for (int i = 0; i < this->nrOfAlbums; i++)
    {
        this->albumsInLibrary[i] = new Album(*source.albumsInLibrary[i]);
    }

}

// Assignment operator
Library& Library::operator=(Library& source)
{
    if (this != &source)
    {
        for (int i = 0; i < this->nrOfAlbums; i++)
        {
            delete this->albumsInLibrary[i];
        }
        delete[] this->albumsInLibrary;

        this->nrOfAlbums = source.nrOfAlbums;
        this->libraryCapacity = source.libraryCapacity;
        this->albumsInLibrary = new Album*[libraryCapacity];
        for (int i = 0; i < this->nrOfAlbums; i++)
        {
            this->albumsInLibrary[i] = new Album(*source.albumsInLibrary[i]);
        }
    }
    return *this;
}

// Modifiers
void Library::addAlbum()
{
    if(nrOfAlbums < libraryCapacity)
    {
        Album* albumPntr = new Album();
        this->albumsInLibrary[nrOfAlbums] = albumPntr;
    }
    else
    {
        Album** tempAlbumsInLibrary = new Album*[libraryCapacity+1];
        for(int i = 0; i < nrOfAlbums; i++)
        {
            Album* albumPntr = albumsInLibrary[i];
            tempAlbumsInLibrary[i] = albumPntr;

        }
        albumsInLibrary = tempAlbumsInLibrary;
        Album* albumPntr = new Album();
        albumsInLibrary[nrOfAlbums] = albumPntr;
        libraryCapacity++;
    }
    nrOfAlbums++;
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
