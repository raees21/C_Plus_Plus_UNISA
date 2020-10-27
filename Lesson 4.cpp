#include <iostream>
using namespace std;

int main()
{
    int mins1, sec1, mins2, sec2, totalMins, totalSecs;
    cout << "Enter a period of time. ";
    cin >> mins1 >> sec1;
    cout << "Enter a second period of time. ";
    cin >> mins2 >> sec2;
    totalMins = (mins1 + mins2) + ((sec1 + sec2)/60);
    totalSecs = (sec1 + sec2)%60;
    cout << "The total time is " << totalMins << " minutes. ";
    cout << "and " << totalSecs << " seconds. ";
    return 0;
}
