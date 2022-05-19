//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void gerRandnum(int &n1, int &n2, int &n3)
    {
    unsigned seed = time(0);
    srand(seed);
    int n1=rand()%100;
    int n2=rand()%100;
    int n3=rand()%100;
    }

int  findMin(int n1, int n2, int n3)
    {
        if (n1<n2 && n1<n3)
            return n1;
        else if (n2<n1 && n2<n3)
            return n2;
        else
            return n3;
    }

void printResult(int n1, int n2, int n3, int min)
    {
        cout<<"n1="<<n1<<endl;
        cout<<"n2="<<n2<<endl;
        cout<<"n3="<<n3<<endl;
        cout<<"Minimum value: "<<min<<endl;
    }
    

int main()

{

}