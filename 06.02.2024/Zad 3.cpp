#include <iostream>

using namespace std;

double trasa(int mile ) {
	double kilometr;
	kilometr = mile * 1.609;
	cout << "Po przemianie mil na kilometry wychodzi: " << kilometr << endl;

	return 0;
}

int main()
{
	int mile;
	cout << "Podaj ilosc mil: " << endl;
	cin >> mile;
	trasa(mile);
}

