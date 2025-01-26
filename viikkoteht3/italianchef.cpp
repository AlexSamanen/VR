#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "italianChef defaultkonstruktori"
         << endl;
}

ItalianChef::ItalianChef(string name)
    : Chef(name)
{
    cout << "italianChef konstruktori"
        << ", kokin nimi "
        << name
         << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "italianChef desktruktori"
         << endl;
}

bool ItalianChef::askSecret(string pw,int f, int w)
{

}

int ItalianChef::MakePizza()
{

}
