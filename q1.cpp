#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

void    getData(float &weight, float &height)
{
    cout << "Please enter your weight in kg: ";
    cin >> weight;
    cin.get();
    cout << "Please enter your height in metres: ";
    cin >> height;
    cin.get();
}

float    calcBMI(float weight, float height)
{
    float TotalBMI;
    TotalBMI = weight/((height * height));
    return TotalBMI;
}

void    displayfitnessresults(float Total)
{
    if (Total < 18.5)
        cout << "Underweight";
    else if (Total >= 18.5 && Total < 25.0)
        cout << "Healty";
    else if (Total >= 25.0 && Total < 30.0)
        cout << "Overweight";
    else
        cout << "Obese";
}

int main()
{
    float weight, height;
    float TotalBMI;

    getData(weight, height);
    TotalBMI = calcBMI(weight, height);
    displayfitnessresults(TotalBMI);
    return 0;
}

