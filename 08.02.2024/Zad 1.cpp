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
        cout << ilosc / 1024 / 1024 / 1024 << endl;
        break;
    }
}
void megabajt(double ilosc, int jednostka, int jednostka2)
{
    switch (jednostka2)
    {
    case 1:
        cout << ilosc * 8 * 1024 * 1024 << endl;
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
        cout << ilosc / 1024 / 1024 << endl;
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
        cout << ilosc * 1024 * 1024 * 1024 << endl;
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
        cout << ilosc * 8 * 1024 * 1024 * 1024 * 1024 << endl;
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
void mila(double ilosc, int trasa1, int trasa2)
{
    switch (trasa2)
    {
    case 1:
        cout << "pozdro" << endl;
        break;

    case 2:
        cout << ilosc * 1.609 << endl;
        break;

    }
}
void kilometr(double ilosc, int trasa1, int trasa2)
{
    switch (trasa2)
    {
    case 1:
        cout << ilosc / 1.609 << endl;
        break;

    case 2:
        cout << "pozdro" << endl;
        break;

    }
}
void zamiana_droga(double ilosc, int trasa1, int trasa2)
{
    switch (trasa1)
    {
    case 1:
        mila(ilosc, trasa1, trasa2);
        break;

    case 2:
        kilometr(ilosc, trasa1, trasa2);
        break;

    }
}
void Celcjusz(double ilosc, int trasa1, int trasa2)
{
    switch (trasa2)
    {
    case 1:
        cout << "pozdro" << endl;
        break;

    case 2:
        cout << (ilosc * 9 / 5) + 32 << endl;
        break;

    }
}
void Fahrenheit(double ilosc, int trasa1, int trasa2)
{
    switch (trasa2)
    {
    case 1:
        cout << (ilosc - 32) * 5 / 9 << endl;
        break;

    case 2:
        cout << "pozdro" << endl;
        break;

    }
}
void zamiana_temp(double ilosc, int temp1, int temp2)
{
    switch (temp1)
    {
    case 1:
        Celcjusz(ilosc, temp1, temp2);
        break;

    case 2:
        Fahrenheit(ilosc, temp1, temp2);
        break;

    }
}
void kmh(double ilosc, int predkosc1, int predkosc2)
{
    switch (predkosc2)
    {
    case 1:
        cout << "pozdro" << endl;
        break;

    case 2:
        cout << "Tyle wyjdzie m/s: " << ilosc * 0.28 << endl;
        break;

    }
}
void ms(double ilosc, int predkosc1, int predkosc2)
{
    switch (predkosc2)
    {
    case 1:
        cout << "Tyle wyjdzie km/h: " << ilosc * 3.6 << endl;
        break;

    case 2:
        cout << "pozdro" << endl;
        break;

    }
}
void zamiana_predkosc(double ilosc, int predkosc1, int predkosc2)
{
    switch (predkosc1)
    {
    case 1:
        kmh(ilosc, predkosc1, predkosc2);
        break;

    case 2:
        ms(ilosc, predkosc1, predkosc2);
        break;

    }
}



int main()
{
    double ilosc, ilosc1, ilosc2;
    int wybor;
    cout << "Podaj co ma wykonac program: " << endl;
    cout << "1 = Zamienic jednostke informatyczna: " << endl;
    cout << "2 = Zamienic droge: " << endl;
    cout << "3 = Zamienic temperature: " << endl;
    cout << "4 = Zamienic predkosc: " << endl;
    cin >> wybor;
    if (wybor == 1) {
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
    if (wybor == 2) {
        cout << "Podaj ilosc jaka chcesz zamienic: " << endl;
        cin >> ilosc;
        int trasa1, trasa2;
        cout << "Podaj jaka jednostke informatyczna chcesz zamienic:  " << endl;
        cout << "1 = mila: " << endl;
        cout << "2 = kilometr:  " << endl;
        cin >> trasa1;
        cout << "Podaj jaka jednostke chcesz uzyskac:  " << endl;
        cout << "1 = mila: " << endl;
        cout << "2 = kilometr:  " << endl;
        cin >> trasa2;
        zamiana_droga(ilosc, trasa1, trasa2);
    }
    if (wybor == 3) {
        cout << "Podaj ilosc jaka chcesz zamienic: " << endl;
        cin >> ilosc;
        int temp1, temp2;
        cout << "Podaj jaka jednostke temperatury chcesz:  " << endl;
        cout << "1 = Celcjusza: " << endl;
        cout << "2 = Fahrenheit:  " << endl;
        cin >> temp1;
        cout << "Podaj jaka temperature chcesz uzyskac:  " << endl;
        cout << "1 = Celcjusza: " << endl;
        cout << "2 = Fahrenheit:  " << endl;
        cin >> temp2;
        zamiana_temp(ilosc, temp1, temp2);
    }
    if (wybor == 4) {
        cout << "Podaj predkosc: " << endl;
        cin >> ilosc;
        int predkosc1, predkosc2;
        cout << "Podaj jaka jednostke predkosci chcesz:  " << endl;
        cout << "1 = km/h: " << endl;
        cout << "2 = m/s:  " << endl;
        cin >> predkosc1;
        cout << "Podaj jaka predkosc chcesz uzyskac:  " << endl;
        cout << "1 = km/h: " << endl;
        cout << "2 = m/s:  " << endl;
        cin >> predkosc2;
        zamiana_predkosc(ilosc, predkosc1, predkosc2);
    }

}