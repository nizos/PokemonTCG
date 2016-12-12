#ifndef PROGRAMMANAGER_H
#define PROGRAMMANAGER_H
#include <QString>
#include "library.h"

class ProgramManager
{
private:
    Library* library;

public:
    ProgramManager();

    void importFromFile();
    void exportToFile();

    ~ProgramManager();
};

#endif // PROGRAMMANAGER_H
