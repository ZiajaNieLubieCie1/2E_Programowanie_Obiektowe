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
    
    if (z==x && z==y && z==x)
    cout << "Wszystkie liczby sa takie same " << endl;
    else if (x==z)
    cout << "Liczba: " <<  x << " i liczba: " << z << " sa takie same" << endl;
    else if (y==x)
    cout << "Liczba: " <<  y << " i liczba: " << x << " sa takie same" << endl;
    else if (z==x)
    cout << "Liczba: " <<  z << " i liczba: " << x << " sa takie same" << endl;
    else
    cout << "Zadna liczba nie jest taka sama" << endl;
}
