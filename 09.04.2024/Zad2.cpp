#include <iostream>
#include <fstream>

using namespace std;



int main(void)
{
	ifstream plik("plik.txt");
	if (plik.is_open())
	{
		string linia, zawartosc;
		char znak;

		while (!plik.eof())
		{
			znak = plik.get();
			if (plik.good())
				cout << znak << endl;
		}
	}
	else
	{
		cout << "Nie mozna otworzyc pliku." << endl;
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}

