#include <iostream>

using namespace std;

void pobierzLancuch(string& lancuch) {
    cin >> lancuch;
}

void sumaLancuchow(string lancuch1, string lancuch2, string lancuch3, string& lancuch4) {
    lancuch4 = lancuch1 + " " + lancuch2 + " " + lancuch3;
}

void wyswietlLancuch(string lancuch) {
    cout << lancuch << endl;
}

int main() {
    string pierwszyCzlon = "", drugiCzlon = "", trzeciCzlon = "";
    string jezyk = "";

    cout << "Podaj 1 czlon ";
    pobierzLancuch(pierwszyCzlon);

    cout << "Podaj 2 czlon ";
    pobierzLancuch(drugiCzlon);

    cout << "Podaj 3 czlon: ";
    pobierzLancuch(trzeciCzlon);

    sumaLancuchow(pierwszyCzlon, drugiCzlon, trzeciCzlon, jezyk);

    cout << "Jezyk programowania: ";
    wyswietlLancuch(jezyk);

    return 0;
}