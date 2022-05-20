//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int getRdnum()
{
    srand(time(NULL));
    return rand()%101;//to get a random number from 1 to 100
}

int getRdnum(int n1)
{
    srand(time(NULL));
    return rand()%(101-n1)+n1;//to get a random number from 1 to n2
}

int getRdnum(int n1,int n2)
{
    srand(time(NULL));
    return rand()%(n2-n1)+n1;//to get a random number from n1+1 to n2
}

int main()//spits out results
{
    int n1,n2;
    cout<<getRdnum()<<endl;
    cout<<getRdnum(n1)<<endl;
    cout<<getRdnum(n1,n2)<<endl;    
}
//numbers are randomized but first two match