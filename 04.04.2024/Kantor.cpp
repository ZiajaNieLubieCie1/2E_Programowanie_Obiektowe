#include <iostream>
#include <string>

using namespace std;

double U(char waluta, char walutadootrzymania, double kwota)
{
	if (walutadootrzymania == 'U')
	{
		return kwota * 1;
	}
	else if (walutadootrzymania == 'G')
	{
		return kwota * 0.77;
	}
	else if (walutadootrzymania == 'P')
	{
		return kwota * 3.95;
	}
	else if (walutadootrzymania == 'E')
	{
		return kwota * 0.92;
	}
	else if (walutadootrzymania == 'T')
	{
		return kwota * 31.89;
	}
}

double G(char waluta, char walutadootrzymania, double kwota)
{
	if (walutadootrzymania == 'U')
	{
		return kwota * 1.26;
	}
	else if (walutadootrzymania == 'G')
	{
		return kwota * 1;
	}
	else if (walutadootrzymania == 'P')
	{
		return kwota * 4.99;
	}
	else if (walutadootrzymania == 'E')
	{
		return kwota * 1.16;
	}
	else if (walutadootrzymania == 'T')
	{
		return kwota * 40.20;
	}
}

double P(char waluta, char walutadootrzymania, double kwota)
{
	if (walutadootrzymania == 'U')
	{
		return kwota * 0.25;
	}
	else if (walutadootrzymania == 'G')
	{
		return kwota * 0.19;
	}
	else if (walutadootrzymania == 'P')
	{
		return kwota * 1;
	}
	else if (walutadootrzymania == 'E')
	{
		return kwota * 0.23;
	}
	else if (walutadootrzymania == 'T')
	{
		return kwota * 8.02;
	}
}

double E(char waluta, char walutadootrzymania, double kwota)
{
	if (walutadootrzymania == 'U')
	{
		return kwota * 1.08;
	}
	else if (walutadootrzymania == 'G')
	{
		return kwota * 0.85;
	}
	else if (walutadootrzymania == 'P')
	{
		return kwota * 4.28;
	}
	else if (walutadootrzymania == 'E')
	{
		return kwota * 1;
	}
	else if (walutadootrzymania == 'T')
	{
		return kwota * 34.46;
	}
}

double T(char waluta, char walutadootrzymania, double kwota)
{
	if (walutadootrzymania == 'U')
	{
		return kwota * 0.03;
	}
	else if (walutadootrzymania == 'G')
	{
		return kwota * 0.02;
	}
	else if (walutadootrzymania == 'P')
	{
		return kwota * 0.12;
	}
	else if (walutadootrzymania == 'E')
	{
		return kwota * 0.02;
	}
	else if (walutadootrzymania == 'T')
	{
		return kwota * 1 ;
	}
}

double kantor(char waluta, char walutadootrzymania, double kwota)
{
	switch (waluta)
	{
	case 'U':
		return U(waluta, walutadootrzymania, kwota);

	case 'G':
		return G(waluta, walutadootrzymania, kwota);

	case 'P':
		return P(waluta, walutadootrzymania, kwota);

	case 'E':
		return E(waluta, walutadootrzymania, kwota);

	case 'T':
		return T(waluta, walutadootrzymania, kwota);

	}

}

int main()
{
	char waluta, walutadootrzymania;
	double kwota;

	cout << "Podaj jaka walute chcesz zamienic: " << endl; cin >> waluta;
	cout << "Podaj jaka kwote posiadasz: " << endl; cin >> kwota;
	if (kwota < 0)
	{
		cout << "Podana kwota nie moze byæ zamieniona" << endl;
	}
	cout << "Podaj jaka walute chcesz otrzymac: " << endl; cin >> walutadootrzymania;
	cout << "Oto otrzymana kwota po przewalutowaniu: " << kantor(waluta, walutadootrzymania, kwota ) << walutadootrzymania << endl;
}


