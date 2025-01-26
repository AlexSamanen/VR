#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{/*
    Chef c_olio("Gordon");

    int annoksia = c_olio.makeSalad(11);
    cout << "Annoksia tehtiin"
         << annoksia
         << endl;
    */
    ItalianChef i_olio("Mario");

    bool salasanaOk = i_olio.askSecret("vaara",1, 1);
    cout << "oliko salasana ok"
         << salasanaOk
         << endl;
    return 0;
}
