#include <iostream>
using namespace std;

int main()
{
    const int number = 40;
    int answer;
    cout << "Think of a number between 30 and 50. Write it down" << endl;
    cout << "Then do the following calculations on paper:" << endl << endl;
    cin.get();
    answer = number * 2;
    cout << "Add 29 to this" << endl;
    cin.get();
    answer += 29;

}
