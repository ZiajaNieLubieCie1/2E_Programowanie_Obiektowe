#include <iostream>

int main() {
    const int numer_przedmiotu = 4;
    char przedmiot[numer_przedmiotu][50];

    for (int a = 0; a < numer_przedmiotu; ++a) {
        printf("Jaki przedmiot chcesz zapisac %d: ", a + 1);
        scanf("%s", przedmiot[a]);
    }

    printf("Zawartos tablicy:\n");
    for (int a = 0; a < numer_przedmiotu; ++a) {
        printf("%d. %s\n", a + 1, przedmiot[a]);
    }

    return 0;
}