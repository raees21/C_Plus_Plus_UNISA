#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Enter a floating point number: ";

    cin >> x;

    cout.setf(ios::fixed);
    cout.precision(4);
    cout << "The Number is " << x << endl;

    return 0;
}
