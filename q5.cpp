#include <iostream>
using namespace std;

int main()
{
    char a = 200;
    short b = 40000;

    int c = 7.9;
    int d = -7.9;

    unsigned int e = -5;

    cout << "char value: " << (int)a << endl;
    cout << "short value: " << b << endl;
    cout << "7.9 stored in int: " << c << endl;
    cout << "-7.9 stored in int: " << d << endl;
    cout << "-5 stored in unsigned int: " << e << endl;

    return 0;
}