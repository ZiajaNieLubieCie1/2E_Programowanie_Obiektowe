#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string const nazwaPliku("C:/Users/Uczen/source/repos/ConsoleApplication4/ConsoleApplication4/plik3.txt");
	//ofstream mojStrumien(nazwaPliku.c_str());
	ofstream mojStrumien("C:/Users/Uczen/source/repos/ConsoleApplication4/ConsoleApplication4/plik3.txt", ios::app);

	if (mojStrumien)
	{
		mojStrumien << "Witaj jestem zdaniem zapisanym w pliku." << endl;
		mojStrumien << 42.1337 << endl;
		int age(23);
		mojStrumien << "Mam " << age << " lata" << endl;
	}
	else
	{
		cout << "B£¥D: nie mo¿na otworzyæ pliku." << endl;
	}

	return 0;
}