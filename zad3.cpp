#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Wprowadz liczbe" << endl;
    cin >> x;
    if (x >= 100 && x < 150)
    cout << "Liczba miesci sie w przediale <100 do 150)" << endl;
    else 
    cout << "Liczba nie miesci sie w przedziale <100 do 150)" << endl;
}
