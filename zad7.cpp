#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> x;
    cout << "Podaj druga liczbe" << endl;
    cin >> y;
    cout << "Podaj trzecia liczbe" << endl;
    cin >> z;
    
    if (x < y && x < z)
    cout << "Liczba: " <<  x << " jest najmniejsza" << endl;
    else if (y < x && y < z)
    cout << "Liczba: " <<  y << " jest najmniejsza" << endl;
    else if (z < x && z < y)
    cout << "Liczba: " <<  z << " jest najmniejsza" << endl;
}
