#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj wiek" << endl;
    cin >> x;
    if (x < 11)
    cout << "Dziecko" << endl;
    else if (x >= 11 && x < 18)
    cout << "Nastolatek" << endl;
    else if (x >=18)
    cout << "Dorosly" << endl;
}
