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
    return rand()%101;
}

int getRdnum(int n1)
{
    srand(time(NULL));
    return rand()%(101-n1)+n1;
}

int getRdnum(int n1,int n2)
{
    srand(time(NULL));
    return rand()%(n2-n1)+n1;    
}

int main()
{

}
