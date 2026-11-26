#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "Data Type\tSize\tMinimum\t\tMaximum\n";

    cout << "short\t\t" << sizeof(short) << "\t"
         << numeric_limits<short>::min() << "\t"
         << numeric_limits<short>::max() << endl;

    cout << "int\t\t" << sizeof(int) << "\t"
         << numeric_limits<int>::min() << "\t"
         << numeric_limits<int>::max() << endl;

    cout << "unsigned int\t" << sizeof(unsigned int) << "\t"
         << numeric_limits<unsigned int>::min() << "\t"
         << numeric_limits<unsigned int>::max() << endl;

    cout << "long long\t" << sizeof(long long) << "\t"
         << numeric_limits<long long>::min() << "\t"
         << numeric_limits<long long>::max() << endl;

    cout << "float\t\t" << sizeof(float) << "\t"
         << numeric_limits<float>::lowest() << "\t"
         << numeric_limits<float>::max() << endl;

    cout << "double\t\t" << sizeof(double) << "\t"
         << numeric_limits<double>::lowest() << "\t"
         << numeric_limits<double>::max() << endl;

    return 0;
}