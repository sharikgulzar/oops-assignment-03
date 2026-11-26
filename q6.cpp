#include <iostream>
using namespace std;

int main()
{
    int a = 7, b = 2;

    cout << "a / b = " << a / b << endl;

    cout << "(double)a / b = "
         << (double)a / b << endl;

    cout << "(double)(a / b) = "
         << (double)(a / b) << endl;

    cout << "a / b * 1.0 = "
         << a / b * 1.0 << endl;

    cout << "1.0 * a / b = "
         << 1.0 * a / b << endl;

    return 0;
}