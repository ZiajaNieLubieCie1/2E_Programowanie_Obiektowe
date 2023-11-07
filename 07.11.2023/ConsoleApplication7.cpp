#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	int number;
	int computer;
	int score;
	int win = 0;
	int cwin = 0;
	int draw = 0;

	cout << "Wybierz umiejetnosc: " << endl;
		cout << "1 -> Nozyce "	<< endl;
		cout << "2 -> Papier " << endl;
		cout << "3 -> Kamien " << endl;
		cout << "4 -> Jaszczurka" << endl;
		cout << "5 -> Spock" << endl;
		cout << "-------------------------------" << endl;
		do {
			cin >> number;

			srand(time(0));
			computer = rand() % 5 + 1;

			if (number == 0)
			{
				cout << "Koniec tej zabawy " << endl;
				return 0;
			}

			if (computer == number) {
				cout << "Remis " << endl;
				draw++;
			}

			if (number == 1) {
				cout << "Wybrales umiejetnosc Nozyc " << endl;
			}
			else if (number == 2) {
				cout << "Wybrales umiejetnosc Papieru " << endl;
			}
			else if (number == 3) {
				cout << "Wybrales umiejetnosc Kamienia " << endl;
			}
			else if (number == 4) {
				cout << "Wybrales umiejetnosc Jaszczurki " << endl;
			}
			else if (number == 5) {
				cout << "Wybrales umiejetnosc Spocka " << endl;
			}

			if (computer == 1) {
				cout << "Komputer wybral umiejetnosc Nozyc " << endl;
			}
			else if (computer == 2) {
				cout << "Komputer wybral umiejetnosc Papieru " << endl;
			}
			else if (computer == 3) {
				cout << "Komputer wybral umiejetnosc Kamienia " << endl;
			}
			else if (computer == 4) {
				cout << "Komputer wybral umiejetnosc Jaszczurki " << endl;
			}
			else if (computer == 5) {
				cout << "Komputer wybral umiejetnosc Spocka " << endl;
			}

			if (computer == 1 && number == 2) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 1 && number == 4) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 2 && number == 3) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 2 && number == 5) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 3 && number == 1) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 3 && number == 4) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 4 && number == 2) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 4 && number == 5) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 5 && number == 1) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}
			else if (computer == 5 && number == 3) {
				cout << "Komputer wygral " << endl;
				cwin++;
			}

			if (number == 1 && computer == 2) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 1 && computer == 4) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 2 && computer == 3) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 2 && computer == 5) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 3 && computer == 1) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 3 && computer == 4) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 4 && computer == 2) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 4 && computer == 5) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 5 && computer == 1) {
				cout << "Wygrales " << endl;
				win++;
			}
			else if (number == 5 && computer == 3) {
				cout << "Wygrales " << endl;
				win++;
			}

			cout << "Liczba twoich zwyciest wynosi: " << win << endl;
			cout << "Liczba zwyciest komputera wynosi: " << cwin << endl;
			cout << "Liczba remisow wynosi: " << draw << endl;
	
		}while (true);
}
