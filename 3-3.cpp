//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double Celcius, Fahrenheit;

    cout << "Enter the temperature by Celcius: ";
    cin >> Celcius;

    Fahrenheit = 9/5.0*Celcius+32;

    cout << Celcius << " Celcius" << " is " << Fahrenheit << " Fahrenheit.";
 
    return 0;
}