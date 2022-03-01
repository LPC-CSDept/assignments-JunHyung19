#include <iostream>
#include <string>
using namespace std;


int main()
{
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "Enter the first month and its rain amount: ";
    cin >> month1 >> rain1;
    cout << "Enter the second month and its rain amount: ";
    cin >> month2 >> rain2;
    cout << "Enter the third month and its rain amount: ";
    cin >> month3 >> rain3;

    double rtotal = rain1+rain2+rain3;
    double ravg = rtotal/3;

    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << ravg << ".";

    return 0;

}