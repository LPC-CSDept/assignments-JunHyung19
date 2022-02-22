//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()
{
    int classA;
    int classB;
    int classC;

    int priceA=15;
    int priceB=12;
    int priceC=9;

    int total;
    
    cout << "Enter number of Class A tickets sold: ";
    cin >> classA;
    cout << "Enter number of Class B tickets sold: ";
    cin >> classB;
    cout << "Enter number of Class C tickets sold: ";
    cin >> classC;

    total = (classA * priceA) + (classB * priceB) + (classC * priceC);

    cout << "Total price for tickets sold: $" << total << endl;

    return 0;
}