#include "seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << "luodaan seuraaja "
         << nimi
         << endl;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi
         << " sai viestin "
         << endl;
}
string Seuraaja::getNimi () const
{
    return nimi;
}
