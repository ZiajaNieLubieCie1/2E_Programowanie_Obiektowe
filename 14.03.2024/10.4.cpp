#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float bok1, bok2, pole, obwod;

    printf("Podaj ddlugosc prostokata: \n");

    printf("Pierwszy bok = ");
    scanf_s("%i", &bok1);

    printf("Drugi bok = ");
    scanf_s("%i", &bok2);

    pole = bok1 * bok2;
    printf("Pole wynosi: %6.2i\n", pole);

    obwod = 2 * bok1 + 2 * bok2;
    printf("Obwod wynosi: %6.2i\n", obwod);

    return 0;
}

