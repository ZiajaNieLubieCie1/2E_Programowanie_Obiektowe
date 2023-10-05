#include <iostream>

using namespace std;

int main()
{
    int x;
    
    cout << "Podaj rok " << endl;
    cin >> x;
    
    bool y = (x%4==0) || x%400==0;
    
    if(y)
    {
        cout << "W roku: " << x << " luty ma 29 dni " << endl;
    }
    else
    {
        cout << "W roku: " << x << " luty ma 28 dni " << endl;
    }
}
