#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Surname, Title, Name;
    cout << "Enter your Title: ";
    cin >> Title;
    cin.get();
    cout << "Enter your Name: ";
    cin >> Name;
    cin.get();
    cout << "Enter your Surname: ";
    getline(cin, Surname,'\n');
    cout << "Hello " << Surname << " " << Title  << " " << Name << endl;
    return 0;
}
