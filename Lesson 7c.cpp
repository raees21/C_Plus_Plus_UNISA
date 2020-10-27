#include <iostream>
using namespace std;

int main()
{
    string title, name, surname, fullname;
    char initial;

    cout << "Enter the title: ";
    cin >> title;

    cout << "Enter the first name: ";
    cin >> initial >> name;

    cin.get();
    cout << "Enter the surname: ";
    getline(cin, surname, '\n');

    fullname = surname + ", " + title + ", " + initial + ", ";
    cout << "The rearranged name is " << fullname << endl;

    return 0;
}
