#include <iostream>
#include <cmath>

using namespace std;

double obwodOk(double promien)
{
    double obwodOk;
    obwodOk = 2  *3.14 * promien;
    
    return obwodOk;

}
double poleOk(double promien)
{
    double poleOk;
    poleOk = 3.14 * pow(promien ,2);

    return poleOk;

}
int main()
{
    double promien;
    cout << "Podaj promien kola: " << endl; cin >> promien;

    cout << "Oto twoj obwod:" << obwodOk(promien) << endl;
    cout << "Oto twoje pole:" << poleOk(promien) << endl;
}

