#include <iostream>
using namespace std;

int main()
{
    int celsius[] = {0, 37, 100};

    cout << "Celsius\tWrong F\tCorrect F" << endl;

    for (int i = 0; i < 3; i++)
    {
        int c = celsius[i];

        // Wrong formula: integer division
        double wrong = 9 / 5 * c + 32;

        // Correct formula: floating-point division
        double correct = 9.0 / 5.0 * c + 32;

        cout << c << "\t"
             << wrong << "\t"
             << correct << endl;
    }

    return 0;
}