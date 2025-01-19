#include "game.h"

game::game(int mn)
{
    maxNumber = mn;
    cout << "game konstruktori"
        << "maxNumber on "
        <<maxNumber
         << endl;
}

game::~game()
{
    cout << "Game destruktori"
         << endl;
}

void game::play()
{
    cout << "game play"
         << endl;
    numOfGuesses = 7;
    printGameResult();

}

void game::printGameResult()
{
    cout << "game printGame result"
         << endl;
}
