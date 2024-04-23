#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream mojStrumien("C:/Users/Uczen/source/repos/ConsoleApplication4/ConsoleApplication4/plik3.txt");
	
	if (mojStrumien)
	{	
		string linia;
		while (getline(mojStrumien, linia))
		{
			cout << linia << endl;
		}
	}
	else
	{
		cout << "B£¥D: nie mo¿na otworzyæ pliku." << endl;
	}

	return 0;
}