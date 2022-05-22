//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cmath>
using namespace std;

const int N=10;//amount of elements/array size
bool check(int n[],int i)
{
    if(abs(n[i] - n[i + 1]) < 10)
	    cout << " less than 10\n";
        return true;
    if(abs(n[i] - n[i - 1]) < 10)
    	cout << " more than 10\n";
        return true;
    return false;
}

int main()
{
    int number[N]={10,15,0.-25,19,20,25,30,45,20};
    for (int i=0;i<N;i++)//must identify i and j before doing nested loops
    {
        if(check(number,i))
        cout<<number[i]<<endl;
    }
}