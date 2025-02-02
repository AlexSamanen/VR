#include "luottotili.h"

Luottotili::Luottotili()
{

}

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    luottoRaja = lr;
    cout << "luottoraja"
         << luottoRaja
         << endl;
}

bool Luottotili::withdraw(double summa)
{

}

bool Luottotili::deposit(double summa)
{

}
