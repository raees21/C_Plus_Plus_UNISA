#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;
    cout << "The remainder of " << a << " divided by " << b << " is ";
    cout << a - ((a/b) * b);
    return 0;
}
