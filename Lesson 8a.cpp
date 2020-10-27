#include <iostream>
using namespace std;

int main()
{
    float price, discountamount, fnalprice;
    int discount;
    const int normaldisc = 10;
    const float cval = 200.00;

    cout << "Enter old Price: ";
    cin >> price;

    //determine discount
    if (price >= cval)
    {
        cout << "Enter a special discount: ";
        cin >> discount;
    }
    else
        discount = normaldisc;



}
