#include <iostream>
#include <cmath>

using namespace std;

int KWADRAT(int liczba1)
{
	int pierwiastek = sqrt(liczba1);

	if (liczba1 == pow(pierwiastek, 2))
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int liczba1;
	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> liczba1;
	cout << "Wartosc funkcji jest rowna: " << KWADRAT(liczba1);
}