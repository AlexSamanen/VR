#include <iostream>
#include <ctime>

using namespace std;
int satunnaisluku = 0;
int game(int maxinum);

int main()
{
    int arvausten_lkm =0;
    int maxinum = 40;
    arvausten_lkm = game(maxinum);
    cout << "Arvauksia: "
         <<arvausten_lkm
         <<endl;

    return 0;
}
int game(int maxnum){
    int arvausten_lkm = 0;
    int arvaus = 0;

    cout << "maxnum="
         << maxnum
         << endl;

    srand(time(NULL));
    satunnaisluku = rand() % maxnum;

    while (true) {
        cout << "anna luku"
             << endl;
        cin >> arvaus;
        arvausten_lkm++;
        if (arvaus == satunnaisluku){
            cout << "oikein"
                 << endl;
            break;
        }
        if (arvaus < satunnaisluku){
            cout << "luku on suurempi"
                 << endl;
        }
        if (arvaus > satunnaisluku){
            cout << "luku on pienempi"
                 << endl;
        }
    }
    return arvausten_lkm;
}
