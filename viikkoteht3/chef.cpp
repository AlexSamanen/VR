#include <iostream>
#include "chef.h"

using namespace std;

Chef::Chef(string n)
{
    chefName = n;
    cout << "Chef " << chefName << " konstruktori"
         << endl;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " destruktori"
         << endl;
}

int Chef::makeSalad(int items)
{
    int portions = items / 5;
    cout << "Chef " << chefName << " with " << items
         << " items can make salad " << portions
         << " portions"
         << endl;
    return portions;
}

int Chef::makeSoup(int items)
{
    int portions = items / 3;
    cout << "Chef " << chefName << " with " << items
         << " items can make soup " << portions
         << " portions"
         << endl;
    return portions;
}

string Chef::getName()
{
    return chefName;
}
