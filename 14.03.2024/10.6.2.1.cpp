#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int liczba, potega;
    printf("Podaj liczbe ktora chcesz podniesc do potegi = ");
    scanf_s("%i", &liczba);
    potega = pow(liczba, 2);
    printf("Potega wynosi: %6.2i\n", potega);

    return 0;
}

