#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char tekst[100];

	ifstream mojStrumien("C:/Users/Uczen/source/repos/ConsoleApplication4/ConsoleApplication4/plik3.txt");
	
	if (mojStrumien)
	{	
		while(!mojStrumien.eof()) {
			mojStrumien.getline(tekst, 100);
			cout << tekst << endl;
		}
	}
	else
	{
		cout << "B£¥D: nie mo¿na otworzyæ pliku." << endl;
	}

	return 0;
}