//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <fstream>
using namespace std;

int p=51;//for preceding number
int getRdnum(void)//generates the random numbers
{
    int x=rand()%50;//random number x between 1 and 50
    return x;//generated number returned
}

int isGreater(int n)//to check whether or not a number is greater than the preceding number
{
    if(n>p)
    {
        p=n;
        return 1;
    }
    else
    {
        p=n;
        return 0;
    }
    return 1;
}

int main()
{
    ofstream ofs;
    int N=10,n,i,f;

    ofs.open("numbers.txt");
    if (!ofs)
    {
        cout<<"Error"<<endl;//error pops up when unable to comply and stops code
        exit(0);
    }
    for(i=0;i<10;i++)
    {
        n=getRdnum();
        cout<<n<<" ";
        if(isGreater(n))
        
    }
    ofs.close( );
}
//initial errors due to unwanted brackets