#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream mojStrumien("plik3.txt");
	mojStrumien.seekg(0, ios::end);

	int dlugosc;
	dlugosc = mojStrumien.tellg();

	cout << "Dlugosc pliku w bajtach wynosi: " << dlugosc << "." << endl;
	return 0;
}
