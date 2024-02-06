#include <iostream>

using namespace std;

void bit(double ilosc, int jednostka, int jednostka2)
{
    switch (jednostka2)
    {
    case 1:
        cout << "pozdro" << endl;
        break;

    case 2:
        cout << ilosc / 8 << endl;
        break;

    case 3:
        cout << ilosc / 8 / 1024 << endl;
        break;

    case 4:
        cout << ilosc / 8 / 1024 / 1024 << endl;
        break;

    case 5:
        cout << ilosc / 8 / 1024 / 1024 / 1024 << endl;
        break;

    case 6:
        cout << ilosc / 8 / 1024 / 1024 / 1024 / 1024 << endl;
        break;
    }
}
void bajt(double ilosc, int jednostka, int jednostka2)
{
    switch (jednostka2)
    {
    case 1:
        cout << ilosc * 8 << endl;
        break;

    case 2:
        cout << "pozdro" << endl;
        break;

    case 3:
        cout << ilosc / 1024 << endl;
        break;

    case 4:
        cout << ilosc / 1024 / 1024 << endl;
        break;

    case 5:
        cout << ilosc / 1024 / 1024 / 1024 << endl;
        break;

    case 6:
        cout << ilosc / 1024 / 1024 / 1024 / 1024 << endl;
        break;
    }
}
void kilobajt(double ilosc, int jednostka, int jednostka2)
{
    switch (jednostka2)
    {
    case 1:
        cout << ilosc * 8 * 1024 << endl;
        break;

    case 2:
        cout << ilosc * 1024 << endl;
        break;

    case 3:
        cout << "pozdro" << endl;
        break;

    case 4:
        cout << ilosc / 1024 << endl;
        break;

    case 5:
        cout << ilosc / 1024 / 1024 << endl;
        break;

    case 6:
        cout << ilosc / 1024 / 1024 / 1024<< endl;
        break;
    }
}
void megabajt(double ilosc, int jednostka, int jednostka2)
{
    switch (jednostka2)
    {
    case 1:
        cout << ilosc  * 8 * 1024 * 1024 << endl;
        break;

    case 2:
        cout << ilosc * 1024 * 1024 << endl;
        break;

    case 3:
        cout << ilosc * 1024 << endl;
        break;

    case 4:
        cout << "pozdro" << endl;
        break;

    case 5:
        cout << ilosc / 1024 << endl;
        break;

    case 6:
        cout << ilosc / 1024 / 1024<< endl;
        break;
    }
}
void gigabajt(double ilosc, int jednostka, int jednostka2)
{
    switch (jednostka2)
    {
    case 1:
        cout << ilosc * 8 * 1024 * 1024 * 1024 << endl;
        break;

    case 2:
        cout << ilosc * 1024 * 1024* 1024 << endl;
        break;

    case 3:
        cout << ilosc * 1024 * 1024 << endl;
        break;

    case 4:
        cout << ilosc * 1024 << endl;
        break;

    case 5:
        cout << "pozdro" << endl;
        break;

    case 6:
        cout << ilosc / 1024 << endl;
        break;
    }
}
void terabajt(double ilosc, int jednostka, int jednostka2)
{
    switch (jednostka2)
    {
    case 1:
        cout << ilosc * 8 * 1024 * 1024 * 1024 * 1024<< endl;
        break;

    case 2:
        cout << ilosc * 1024 * 1024 * 1024 * 1024 << endl;
        break;

    case 3:
        cout << ilosc * 1024 * 1024 * 1024 << endl;
        break;

    case 4:
        cout << ilosc * 1024 * 1024 << endl;
        break;

    case 5:
        cout << ilosc * 1024 << endl;
        break;

    case 6:
        cout << "pozdro" << endl;
        break;
    }
}

void zamiana(double ilosc, int jednostka, int jednostka2) 
{
    switch (jednostka)
    {
         case 1:
             bit(ilosc, jednostka, jednostka2);
             break;

         case 2:
             bajt(ilosc, jednostka, jednostka2);
             break;
             
         case 3:
             kilobajt(ilosc, jednostka, jednostka2);
             break;

         case 4:
             megabajt(ilosc, jednostka, jednostka2);
             break;

         case 5:
             gigabajt(ilosc, jednostka, jednostka2);
             break;

         case 6:
             terabajt(ilosc, jednostka, jednostka2);
             break;
    }
}


int main()
{
    double ilosc;
    cout << "Podaj ilosc jaka chcesz zamienic: " << endl;
    cin >> ilosc;
    int jednostka, jednostka2;
    cout << "Podaj jaka jednostke informatyczna chcesz zamienic:  " << endl;
    cout << "1 = bit: " << endl;
    cout << "2 = bajt:  " << endl;
    cout << "3 = kilobajt: " << endl;
    cout << "4 = megabajt: " << endl;
    cout << "5 = gigabajt: " << endl;
    cout << "6 = terabajt: " << endl;
    cin >> jednostka;
    cout << "Podaj jaka jednostke chcesz uzyskac:  " << endl;
    cout << "1 = bit: " << endl;
    cout << "2 = bajt:  " << endl;
    cout << "3 = kilobajt: " << endl;
    cout << "4 = megabajt: " << endl;
    cout << "5 = gigabajt: " << endl;
    cout << "6 = terabajt: " << endl;
    cin >> jednostka2;
    zamiana(ilosc, jednostka, jednostka2);
}