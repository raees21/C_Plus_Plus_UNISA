#include <iostream>
using namespace std;

int main()
{
    char letter;
    int position;

    cout << "Enter an Upper Case Letter: ";
    cin >> letter;

    position = letter - 'A' +1;

    cout << letter << " is in position " << position << " in the alphabet. " << endl;
    return 0;
}
