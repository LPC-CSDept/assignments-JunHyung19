//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <fstream>
using namespace std;

int getRdnum(void);

int main()
{
    ofstream ofs;
    int N=10;
    int i;

    ofs.open("numbers.txt");
    if (!ofs)
    {
        cout<<"Error"<<endl;//error pops up when unable to comply and stops code
        exit(0);
    }
    for(i=0;i<10;i++)
    {

    }
    ofs.close( );
}