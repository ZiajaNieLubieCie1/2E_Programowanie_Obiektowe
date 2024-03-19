#include <iostream>

using namespace std;

struct Pracownik
{
    char imie[40];
    char nazwisko[100];
    char plec;
};

int main()
{
    Pracownik pra;
    printf("Podaj dane pracownika: imie: ");
    scanf("%s", pra.imie);
    printf("Podaj dane pracownika: nazwisko: ");
    scanf("%s", pra.nazwisko);
    printf("Podaj dane pracownika: plec: ");
    scanf("%c", &pra.plec);

    printf("Imie: %s\n", pra.imie);
    printf("Nazwisko: %s\n", pra.nazwisko);
    printf("Plec: %c\n", pra.plec);

    return 0;
}
