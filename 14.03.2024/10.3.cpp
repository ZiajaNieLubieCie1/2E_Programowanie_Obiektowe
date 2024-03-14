#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const char* napisI = "3";
    const char* napisF = "3.14159";
    const char* napisE = "2.71828182845904523536";

    cout << atol(napisI) << endl;
    cout << strtol(napisI, NULL, 0) << endl;

    cout << atof(napisF) << endl;
    cout << strtod(napisF, NULL) << endl;

    cout << strtof(napisF, NULL) << endl;

    cout << strtod(napisE, NULL) << endl;
    cout << atof(napisE) << endl;

    return 0;
}
