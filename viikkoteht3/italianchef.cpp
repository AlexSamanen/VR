#include "italianchef.h"

ItalianChef::ItalianChef(string n)
    : Chef(n)
{
    cout << "ItalianChef " << chefName << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << chefName << " destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    if (password.compare(pw) == 0) {
        cout << "Password ok for secret food!" << endl;
        flour = f;
        water = w;
        makePizza();
        return true;
    }
    cout << "Wrong password!" << endl;
    return false;
}

int ItalianChef::makePizza()
{
    int portions_f = flour / 5;
    int portions_w = water / 5;
    int pizzas = min(portions_f,portions_w);

    cout << "ItalianChef " << chefName << " with "
         << flour << " flour and " << water
         << " water can make " << pizzas
         << " pizzas" << endl;

    return pizzas;
}
