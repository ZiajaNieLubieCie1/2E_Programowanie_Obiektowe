#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    double liczba;
    srand(time(NULL));

    liczba = (double)rand() / RAND_MAX * 9 + 1;
    cout << "liczba wylosowana " << liczba << endl;
    cout << "liczba po zaokragleniu " << round(liczba) << endl;

    return 0;
}