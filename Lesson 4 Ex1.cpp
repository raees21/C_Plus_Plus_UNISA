#include <iostream>
using namespace std;

int main()
{
    int F, C;
    cout << "Enter the tempreture in Farenheit: ";
    cin >> F;
    C = 5 *(F - 32)/9;
    cout << "Celsius is " << C << endl;
    return 0;
}
