#include <iostream>

#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Beepeli");
    Seuraaja *C = new Seuraaja("Ceepeli");
   /*
    A->next=B;
    B->next=C;

    Seuraaja *alku = A;
    while (alku != nullptr) {
        cout << alku->getNimi()
             << endl;
        alku = alku->next;
    }
    */
    Notifikaattori *N = new Notifikaattori();
    cout << endl;

    N->lisaa(A);

    //N->lisaa(A);
    //N->lisaa(B);
    //N->lisaa(C);
    //cout << endl;

    N->tulosta();

    delete A;
    delete B;
    delete C;

    return 0;
}
