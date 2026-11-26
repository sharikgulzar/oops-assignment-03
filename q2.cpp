#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a = 0.1;
    double b = 0.2;

    double sum = a + b;

    cout << setprecision(17);

    cout << "Sum = " << sum << endl;

    if (sum == 0.3)
        cout << "Equal to 0.3" << endl;
    else
        cout << "Not equal to 0.3" << endl;

    double tolerance = 0.0000001;

    if (fabs(sum - 0.3) < tolerance)
        cout << "Approximately equal to 0.3" << endl;
    else
        cout << "Not approximately equal" << endl;

    return 0;
}