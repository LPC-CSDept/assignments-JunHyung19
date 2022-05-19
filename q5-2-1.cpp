//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int n1,n2,n3,n4,n5;
    int min;

    n1=rand()%100;
    n2=rand()%100;
    n3=rand()%100;
    n4=rand()%100;
    n5=rand()%100;

    {
        if (n1>n2,n3,n4,n5)
        min=n1;
        else if (n2>n1,n3,n4,n5)
        min=n2;
        else if (n3>n1,n2,n4,n5)
        min=n2;
        else if (n4>n2,n3,n1,n5)
        min=n2;
        else 
        min=n5;
    }
    

    cout<<n1<<", "<<n2<<", "<<n3<<", "<<n4<<", "<<n5<<endl;
    cout<<"Minimum number: "<<min;
}