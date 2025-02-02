#include "asiakas.h"



Asiakas::Asiakas(string n, double lr)
    : kayttotili(nimi), luottotili(nimi, lr)
{
    nimi=n;
    cout << "nimi="
         << nimi;
}

bool Asiakas::talletus(double summa)
{
    cout << "asiakas "
         << nimi
         << " tallettaa"
    bool onnistuiko = käyttötili.deposit(summa);
    if (onnistuiko == false){
        cout << "meni pieleen"
             << endl;
    }
    return onnistuiko;
}

bool Asiakas::tilisiirto(double summa, Asiakas &saaja)
{
    bool onnistuiko = nosto();
}

string Asiakas::getNimi() const
{
    return nimi;
}
