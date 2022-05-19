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
    n1=rand()%100;
    n2=rand()%100;
    n3=rand()%100;
    n4=rand()%100;
    n5=rand()%100;

    cout<<n1<<" "<<n2<<" "<<n3<<endl;
}