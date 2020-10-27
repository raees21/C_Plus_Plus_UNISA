#include <string>
#include <iostream>
using namespace std;

int main()
{
    string word1, word2, spoonerism;
    char letter1, letter2;
    cout << "Input 2 words: ";
    cin >> letter1 >> word1 >> letter2 >> word2;

    spoonerism = word2 + ' ' + word1;
    cout << "Spoonerised " << spoonerism;

    return 0;
}
