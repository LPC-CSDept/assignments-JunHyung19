//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()

{
    int num1, num2, num3;
    int max, mid, min;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    
    {
        if (num1>num2 && num1>num3)
        max=num1;
        else if (num1<num2 && num1<num3)
        min=num1;
        else 
        mid=num1;
    }
    
    {
        if (num2>num1 && num2>num3)
        max=num2;
        else if (num2<num1 && num2<num3)
        min=num2;
        else 
        mid=num2;
    }

    {
        if (num3>num1 && num3>num2)
        max=num3;
        else if (num3<num1 && num3<num2)
        min=num3;
        else 
        mid=num3;
    }

    cout<<"Your numbers in ascending order: ("<<min<<" "<<mid<<" "<<max<<")"<<endl;
}