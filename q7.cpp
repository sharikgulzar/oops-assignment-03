#include <iostream>
using namespace std;

int main()
{
    int pairs[4][2] = {
        {17, 5},
        {-17, 5},
        {17, -5},
        {-17, -5}
    };

    for (int i = 0; i < 4; i++)
    {
        int a = pairs[i][0];
        int b = pairs[i][1];

        int q = a / b;
        int r = a % b;

        cout << "\na = " << a << ", b = " << b << endl;
        cout << "Quotient = " << q << endl;
        cout << "Remainder = " << r << endl;

        cout << "(a/b)*b + a%b = "
             << q * b + r << endl;
    }

    return 0;
}