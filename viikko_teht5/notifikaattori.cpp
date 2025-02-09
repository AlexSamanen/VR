#include "notifikaattori.h"
#include "seuraaja.h"

Notifikaattori::Notifikaattori()
{

}

void Notifikaattori::lisaa(Seuraaja *uusSeur)
{
    adsf =  seuraajat
    seuraajat = sadas
}

void Notifikaattori::poista(Seuraaja *poistSeur)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        cout << "Seuraaja "
             << alku->getNimi()
             << endl;

        alku = alku->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        cout << "Seuraaja "
             << alku->getNimi()
             << endl;

        alku = alku->next;
    }
}

void Notifikaattori::postita(string viesti)
{

}
