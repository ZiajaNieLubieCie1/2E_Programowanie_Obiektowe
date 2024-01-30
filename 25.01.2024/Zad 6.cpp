#include <iostream>
#include <cmath>

using namespace std;

double obwodOk(const double*);
double poleOk(const double*);

int main()
{
    double promien;
    cout << "Podaj promien kola: " << endl; 
    cin >> promien;

    double* w_promien = &promien ;

    cout << "Oto twoj obwod:" << obwodOk(w_promien) << endl;
    cout << "Oto twoje pole:" << poleOk(w_promien) << endl;
}

double obwodOk(const double *promien)
{
    double obwodOk;
    obwodOk = 2 * 3.14 * *promien;

    return obwodOk;

}
double poleOk(const double *promien)
{
    double poleOk;
    poleOk = 3.14 * pow(*promien, 2);

    return poleOk;

}