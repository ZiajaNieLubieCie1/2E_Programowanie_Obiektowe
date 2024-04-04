#include <iostream>
#include <string>

using namespace std;

double U(string waluta, string walutadootrzymania, double kwota)
{
	if (walutadootrzymania == "USD")
	{
		return kwota * 1;
	}
	else if (walutadootrzymania == "GBP")
	{
		return kwota * 0.77;
	}
	else if (walutadootrzymania == "PLN")
	{
		return kwota * 3.95;
	}
	else if (walutadootrzymania == "EUR")
	{
		return kwota * 0.92;
	}
	else if (walutadootrzymania == "TRY")
	{
		return kwota * 31.89;
	}
}

double G(string waluta, string walutadootrzymania, double kwota)
{
	if (walutadootrzymania == "USD")
	{
		return kwota * 1.26;
	}
	else if (walutadootrzymania == "GBP")
	{
		return kwota * 1;
	}
	else if (walutadootrzymania == "PLN")
	{
		return kwota * 4.99;
	}
	else if (walutadootrzymania == "EUR")
	{
		return kwota * 1.16;
	}
	else if (walutadootrzymania == "TRY")
	{
		return kwota * 40.20;
	}
}

double P(string waluta, string walutadootrzymania, double kwota)
{
	if (walutadootrzymania == "USD")
	{
		return kwota * 0.25;
	}
	else if (walutadootrzymania == "GBP")
	{
		return kwota * 0.19;
	}
	else if (walutadootrzymania == "PLN")
	{
		return kwota * 1;
	}
	else if (walutadootrzymania == "EUR")
	{
		return kwota * 0.23;
	}
	else if (walutadootrzymania == "TRY")
	{
		return kwota * 8.02;
	}
}

double E(string waluta, string walutadootrzymania, double kwota)
{
	if (walutadootrzymania == "USD")
	{
		return kwota * 1.08;
	}
	else if (walutadootrzymania == "GBP")
	{
		return kwota * 0.85;
	}
	else if (walutadootrzymania == "PLN")
	{
		return kwota * 4.28;
	}
	else if (walutadootrzymania == "EUR")
	{
		return kwota * 1;
	}
	else if (walutadootrzymania == "TRY")
	{
		return kwota * 34.46;
	}
}

double T(string waluta, string walutadootrzymania, double kwota)
{
	if (walutadootrzymania == "USD")
	{
		return kwota * 0.03;
	}
	else if (walutadootrzymania == "GBP")
	{
		return kwota * 0.02;
	}
	else if (walutadootrzymania == "PLN")
	{
		return kwota * 0.12;
	}
	else if (walutadootrzymania == "EUR")
	{
		return kwota * 0.02;
	}
	else if (walutadootrzymania == "TRY")
	{
		return kwota * 1;
	}
}

double kantor(string waluta, string walutadootrzymania, double kwota)
{
	if (waluta == "USD")
	{
		return U(waluta, walutadootrzymania, kwota);
	}
	else if (waluta == "GBP")
	{
		return G(waluta, walutadootrzymania, kwota);
	}
	else if (waluta == "PLN")
	{
		return P(waluta, walutadootrzymania, kwota);
	}
	else if (waluta == "EUR")
	{
		return E(waluta, walutadootrzymania, kwota);
	}
	else if (waluta == "TRY")
	{
		return T(waluta, walutadootrzymania, kwota);
	}

}

int main()
{
	string waluta, walutadootrzymania;
	double kwota;

	cout << "Podaj jaka walute chcesz zamienic: " << endl; cin >> waluta;
	cout << "Podaj jaka kwote posiadasz: " << endl; cin >> kwota;
	if (kwota < 0)
	{
		cout << "Podana kwota nie moze byc zamieniona" << endl;
		return 0;
	}
		cout << "Podaj jaka walute chcesz otrzymac: " << endl; cin >> walutadootrzymania;

	if (kwota > 0)
	{
		cout << "Oto otrzymana kwota po przewalutowaniu: " << kantor(waluta, walutadootrzymania, kwota) << " " << walutadootrzymania << endl;
	}
}
