#include <iostream>
#include <cmath>

double Heron(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double bok_a, bok_b, bok_c;
    printf("Podaj d³ugoœæ boku a: ");
    scanf("%lf", &bok_a);
    printf("Podaj d³ugoœæ boku b: ");
    scanf("%lf", &bok_b);
    printf("Podaj d³ugoœæ boku c: ");
    scanf("%lf", &bok_c);

    double pole = Heron(bok_a, bok_b, bok_c);
    printf("Pole trójk¹ta: %lf\n", pole);

    return 0;
}