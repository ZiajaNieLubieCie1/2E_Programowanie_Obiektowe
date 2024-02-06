#include <iostream>

using namespace std;

int ciag(int dlugosc) {
	int k = 1;
	int sum = 0;
	if (dlugosc > 0)
		cout << sum << endl;
	if (dlugosc > 1)
		cout << k << endl;
	dlugosc = dlugosc - 2;

	for (int x = 0; x < dlugosc; x++)
	{
		sum = sum + k;
		if (sum >= 3)
			k = sum - k;

	}


	return sum;
}

int main()
{
	int a;
	cout << "Podaj dlugosc ciagu: " << endl; cin >> a;
	cout << "Twoja liczba: " << ciag(a);
}
