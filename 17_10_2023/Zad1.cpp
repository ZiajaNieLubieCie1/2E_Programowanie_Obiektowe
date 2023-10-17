#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i = 0;
	string haslo = "haslo1";
	string login = "login1";
	do 
	{
		cout << "Podaj login: " << endl;
		cin >> login;
		cout << "Podaj haslo: " << endl;
		cin >> haslo;

		if (login == "login1" && haslo == "haslo1") {
			cout << "Zostales zalogowany" << endl;
			break;
		}
		else
		{
			cout << "Bledny login lub haslo " << endl;
			i++;
		}

		if (i == 3) {
			cout << "Zaduza liczba powtorzen" << endl;
			break;
		}
	} while (i < 3);

	return 0;
}