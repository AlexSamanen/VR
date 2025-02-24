#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *s)
{
    cout << "Notifikaattori lisaa seuraajan " << s->getNimi() << endl;
    s->next = seuraajat;
    seuraajat = s;
}

void Notifikaattori::poista(Seuraaja *s)
{
    cout << "Notifikaattori poistaa seuraajan " << s->getNimi() << endl;
    if (seuraajat == s) {
        seuraajat = s->next;
    } else {
        Seuraaja *l = seuraajat;
        while (l != nullptr) {
            if (l->next == s) {
                l->next = s->next;
            }
            l = l->next;
        }
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *l = seuraajat;

    cout << "Notifikaattorin seuraajat: " << endl;
    while (l != nullptr) {
        cout << "Seuraaja " << l->getNimi() << endl;
        l = l->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *s = seuraajat;

    cout << "Notifikaattori postaa viestin " << viesti << endl;
    while (s != nullptr) {
        s->paivitys(viesti);
        s = s->next;
    }
}
