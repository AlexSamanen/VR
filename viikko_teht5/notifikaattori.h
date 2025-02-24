#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include <iostream>
#include "seuraaja.h"

class Notifikaattori
{
public:
    Notifikaattori();

    void lisaa(Seuraaja *s);
    void poista(Seuraaja *s);
    void tulosta();
    void postita(string viesti);

private:
    Seuraaja *seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
