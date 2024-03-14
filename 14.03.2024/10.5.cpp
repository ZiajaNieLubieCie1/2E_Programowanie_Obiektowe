#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));

    cout << RAND_MAX << endl;

    cout << (rand() % 900 + 100) << endl;

    return 0;
}
