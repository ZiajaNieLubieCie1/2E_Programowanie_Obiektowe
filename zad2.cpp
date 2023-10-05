#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> x;
    cout << "Podaj druga liczbe" << endl;
    cin >> y;
    
    if (x%y==0)
    cout << " Liczba: " <<  x << " jest podzielna przez: " << y << endl;
    else
    cout << " Liczba: " <<  x << " nie jest podzielna bez reszty " << endl;
}
