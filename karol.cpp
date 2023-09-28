#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    int x,y,z;

do{
    cout << "1  dodawanie" << endl;
    cout << "2  odejmowanie" << endl;
    cout << "3  mnozenie" << endl;
    cout << "4  dzielenie" << endl;
    cout << "0  Koniec programu" << endl;
    cout << "--------------------" << endl;
    cout << "Wybierz sposob rozwiazania" << endl;
    cin >> z;
        if(z==0)
      exit;
    else if(z!=0){
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> x;
    cout << "Podaj druga liczbe" << endl;
    cin >> y;
    }
    else if (z==1)
        cout << x+y << endl;
    else if(z==2)
        cout << x-y << endl;
    else if (z==3)
        cout << x*y << endl;
    else if (z==4)
        cout << x/y << endl;

   }while(z!=0);

}
