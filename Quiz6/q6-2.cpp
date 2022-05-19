//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void gerRandnum(int &n1, int &n2, int &n3);
    double seed = time(0);
    srand(seed);
    int n1=rand()%100;
    int n2=rand()%100;
    int n3=rand()%100;

int  findMin(int n1, int n2, int n3);
    {
        if (n1<n2 && n1<n3)
        min=num1;
        else if (n2<n1 && n2<n3)
        min=num2;
        else if (n3<n1 && n3<n2)
        min=num3;
    }
    

int main()

{

    cout<<n1<<" "<<n2<<" "<<n3;
}