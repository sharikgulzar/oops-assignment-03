#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 4, c = 2;

    cout << "a + b * c = " << a + b * c << endl;

    cout << "(a + b) * c = " << (a + b) * c << endl;

    cout << "a - b - c = " << a - b - c << endl;

    cout << "a / b * c = " << a / b * c << endl;

    cout << "a % b + c = " << a % b + c << endl;

    cout << "a + b / c - a % b = "
         << a + b / c - a % b << endl;

    cout << "-a / b = " << -a / b << endl;

    return 0;
}