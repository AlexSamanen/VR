#include "chef.h"

Chef::Chef() {}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef defaultkonstruktori, ei nimeä"
         << chefName
         << endl;
}

Chef::~Chef()
{
    cout <<"Chef destuktori"
         << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    cout << "Aineksia "
         << aines
         << endl;
}
