#include <iostream>
using namespace std;

int main()
{
    const float VATRATE = 0.14;
    float price1, price2, price3, totalprice1, totalprice2;

    cout << "Prices of 3 different products:";
    cin >> price1 >> price2 >> price3;

    totalprice1 = price1 + price2 + price3;
    totalprice2 = totalprice1 + (totalprice1 * VATRATE);

    cout << "The total price including VAT is: " << totalprice2 << endl;
    return 0;
}
