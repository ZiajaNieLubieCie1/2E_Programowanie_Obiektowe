#include <iostream>

using namespace std;

double dodawanie(double liczba1, double liczba2) {
    cout << liczba1 + liczba2;
    return 0;
}
double odejmowanie(double liczba1, double liczba2) {
    cout << liczba1 - liczba2;
    return 0;
}
double mnozenie(double liczba1, double liczba2) {
    cout << liczba1 * liczba2;
    return 0;
}
double dzielenie(double liczba1, double liczba2) {
    cout << liczba1 / liczba2;
    return 0;
}

void sposob(int kalkulator) {

    switch (kalkulator) {
        double liczba1, liczba2;
    case 1:
        cout << "Podaj pierwsza liczbe: "; cin >> liczba1;
        cout << "Podaj druga liczbe: "; cin >> liczba2;
        cout << "Wynik dodawania: " << endl;
        dodawanie(liczba1, liczba2);
        break;
    case 2:
        cout << "Podaj pierwsza liczbe: "; cin >> liczba1;
        cout << "Podaj druga liczbe: "; cin >> liczba2;
        cout << "Wynik dodejmowania: " << endl;
        odejmowanie(liczba1, liczba2);
        break;
    case 3:
        cout << "Podaj pierwsza liczbe: "; cin >> liczba1;
        cout << "Podaj druga liczbe: "; cin >> liczba2;
        cout << "Wynik mnozenia: " << endl;
        mnozenie(liczba1, liczba2);
        break;
    case 4:
        cout << "Podaj pierwsza liczbe: "; cin >> liczba1;
        cout << "Podaj druga liczbe: "; cin >> liczba2;
        cout << "Wynik dzielenia: " << endl;
        dzielenie(liczba1, liczba2);
        break;
    }

}

int main()
{
    int kalkulator;
    cout << "Podaj jaki sposob kalkulatora chcesz uzyc: " << endl;
    cout << "1 = dodawanie: " << endl;
    cout << "2 = odejmowanie:  " << endl;
    cout << "3 = mnozenie: " << endl;
    cout << "4 = dzielenie: " << endl;
    cin >> kalkulator;
    sposob(kalkulator);
}
