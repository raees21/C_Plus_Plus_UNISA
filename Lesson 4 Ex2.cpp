#include <iostream>
using namespace std;

int main()
{
    int I, IF, boxes, LI;
    cout << "How many Items to be packed: ";
    cin >> I;
    cout << "How many Items fit into the box: ";
    cin >> IF;
    boxes = I/IF;
    LI = I % IF;
    cout << "The amount of boxes needed are " << boxes;
    cout << " The amount of items left over are " << LI << endl;

    return 0;
}
