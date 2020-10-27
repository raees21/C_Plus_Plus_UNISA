#include <iostream>
using namespace std;

int main()
{
    float mark1, mark2, mark3, average;

    cout << "Enter the values of 3 marks" << endl;
    cin >> mark1 >> mark2 >> mark3;

    average = (mark1 + mark2 + mark3) / 3.0;
    cout << "The average is " << average << endl;

    return 0;
}
