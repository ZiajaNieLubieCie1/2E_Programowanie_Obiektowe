#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>


using namespace std;


string mieszajLitery(string slowo)
{
	string mieszanka;
	int pozycja(0);

	while (slowo.size() != 0)
	{
		pozycja = rand() % slowo.size();
		mieszanka += slowo[pozycja];
		slowo.erase(pozycja, 1);
	}
	return mieszanka;
}
string LosojSlowoPlik(string nazwaPliku)
{
	ifstream moje(nazwaPliku);
	vector<string>slowa;
	if (moje)
	{
		string slowo;
		while (moje >> slowo)
		{
			slowa.push_back(slowo);
		}
	}
	else
	{
		cout << "BLAD, Nie da sie otworzyc pliku." << endl;
	}
	int indeks = rand() % slowa.size();
	return slowa[indeks];
}

int main()
{
	string sekretneSlowo, pomieszaneSlowo, slowoUzytkownika, kolejnaPartia;
	int punkty = 0;
	srand(time(0));

	while (true)
	{
		string wybor;
		cout << "Chcesz wpisac nowe slowa do programu? \nTAK \nNIE" << endl; cin >> wybor;
		if (wybor == "TAK")
		{
			string const nazwaPliku("plik3.txt");
			ofstream mojStrumien("plik3.txt", ios::trunc);
			
			if (mojStrumien)
			{
				while (true)
				{
					string noweslowo, wybor2;
					cout << "Podaj nowe slowo: " << endl;
					cin >> noweslowo;
					mojStrumien << noweslowo << endl;
					cout << "Chcesz podac jeszcze jakies slowa? \nTAK \nNIE" << endl;
					cin >> wybor2;
					if (wybor2 == "NIE")
					{
						wybor = "NIE";
						system("cls");
						break;
					}
				}
			}
			else
			{
				cout << "BLAD. program nie programuje" << endl;
			}
		}
		else if (wybor == "NIE")
		{
			int proby = 5;

			int upunkty = 0;
			sekretneSlowo = LosojSlowoPlik("plik3.txt");
			do
			{
				pomieszaneSlowo = mieszajLitery(sekretneSlowo);
				cout << endl << "Co to za slowo? " << pomieszaneSlowo << endl;
				cin >> slowoUzytkownika;

				if (slowoUzytkownika == sekretneSlowo)
				{
					cout << "Brawo!" << endl;
					punkty = punkty + (5 - upunkty);
				}
				else
				{
					cout << "Zle!" << endl;
					proby--;
					upunkty++;
					cout << "Zostalo ci: " << proby << " prob" << endl;
					if (proby == 0)
					{
						cout << "Nie masz już wiecej prob" << endl;
						break;
					}
				}
			} while (slowoUzytkownika != sekretneSlowo);
			cout << "Czy chcesz zakonczyc gre? \n TAK/NIE" << endl; cin >> kolejnaPartia;
			if (kolejnaPartia == "TAK")
			{
				break;
			}
		}
	}

	cout << "Zdobyte punkty: " << punkty << endl;
	return 0;
}

