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
    n1=rand()%100;
    n2=rand()%100;
    n3=rand()%100;
    

int main()

{

    cout<<n1<<" "<<n2<<" "<<n3;
}