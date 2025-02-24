#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef c("Gordon");
    c.makeSalad(11);
    c.makeSoup(14);

    cout << endl;

    ItalianChef ic("Mario");
    ic.makeSalad(9);
    ic.askSecret("pizza",12,12);
}
