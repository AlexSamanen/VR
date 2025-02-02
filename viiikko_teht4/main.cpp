#include <iostream>
#include "pankkitili.h"
using namespace std;

int main()
{
    Asiakas A("Aa", 1000);
    Asiakas C("Ce", 1000);
    Asiakas B("Be", 1000);

    A.tilisiirto(50,B);
    B.tilisiirto(100,C);

    return 0;
}

