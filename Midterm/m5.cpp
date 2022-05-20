//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <fstream>
using namespace std;

void getInput(int&n1,int&n2)//to get the two user input numbers
{
    cout<<"Input your first number: ";
    cin>>n1;
    cout<<"Input your second number: ";
    cin>>n2;
}

int isSame(int&n1,int&n2)//to check if the numbers are the same, which shouldn't be the case
{
    if(n1=n2)
    return 1;
}

double intDivision(int&n1,int&n2)
{
    if(n1>n2)
        return n1/n2;
    else
        return n2/n1;
}

int main()
{
    int n1,n2;
    double result;
    
}