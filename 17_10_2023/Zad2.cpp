#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int z;
    cout << "Podaj pierwsza liczbe parzysta" << endl;
    cin >> x;
    do {
        if (x % 2 == 0) {

        }
        else {
            cout << "Podales liczbe nieparzysta" << endl;
            cout << "Podaj pierwsza liczbe parzysta jeszcze raz" << endl;
            cin >> x;
        }
        cout << "Podaj druga liczbe parzysta" << endl;
        cin >> y;
        if (y % 2 == 0) {

        }
        else {
            cout << "Podales liczbe nieparzysta" << endl;
            cout << "Podaj jeszcze raz druga liczbe parzysta" << endl;
            cin >> y;
        }
        if (x % 2 == 0 && y % 2 == 0)
        {
            z = y * x;
            cout << "Wynik to: " << z << endl;
            break;
        }
    } while (false);

    return 0;
}

