#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Wprowadz liczbe" << endl;
    cin >> x;
    if (x < 0)
    cout << "Liczba jest mniejsza niz 0" << endl;
    else if (x > 0)
    cout << "Liczba jest wieksza niz 0" << endl;
    else if (x == 0)
    cout << "Liczba jest rowna 0" << endl;
}
