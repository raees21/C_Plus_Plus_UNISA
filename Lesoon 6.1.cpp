#include <iostream>
#include <stdlib.h>


int main()
{
    int r;

    for (int i = 0; i < 10; i++)
    {
        r = rand();
        cout << "The Number is: " << r << endl;
    }
    return 0;
}
