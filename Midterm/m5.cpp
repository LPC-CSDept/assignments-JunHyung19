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

double intDivision(int&n1,int&n2)//to see which number should be divided by the other number
{
    if(n1>n2)
        return n1/n2;
    else
        return n2/n1;
}

void fileWrite(double result)//function to put the division result into a file
{
    ofstream ofs;
}

int main()
{
    ofstream ofs;
    int n1,n2;
    double result;

    ofs.open("question5.txt");
    if (!ofs)
    {
        cout<<"Error"<<endl;
        exit(0);
    }

    getInput(n1,n2);

}