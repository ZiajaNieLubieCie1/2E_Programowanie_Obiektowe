#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int kostka;
    cout << "Podaj liczbę rzutów kostką: ";
    cin >> kostka;

    srand(time(0));

    for (int i = 0; i < kostka; i++) {
        int rzuty = rand() % 6 + 1;
        cout << "Rzut kostka " << (i + 1) << ": " << rzuty << endl;
    }

    return 0;
}