#include <iostream>
#include <string>
 using namespace std;

int main()
{
	string haslo;
	string login;

	cout << "Podaj login: " << endl;
	cin >> login;
	cout << "Podaj haslo: " << endl;
	cin >> haslo;
	if (login == "admin" && haslo == "ktos")
	cout << "Zostales zalogowany" << endl;
	else
		cout << "Bledny login lub haslo" << endl;

	return 0;
}