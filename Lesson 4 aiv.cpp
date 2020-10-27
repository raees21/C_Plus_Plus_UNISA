#include <iostream>
using namespace std;

int main()
{
    int secs, totalMins, totalSecs;

    cout << "enter the large number of seconds: ";
    cin >> secs;
    totalMins = secs / 60;
    totalSecs = secs % 60;
    cout << "This is " << totalMins << " minutes";
    cout << " and " << totalSecs << " seconds" << endl;
    return 0;
}
