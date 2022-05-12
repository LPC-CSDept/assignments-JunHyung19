//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()

{
    int i, j;

    {
        for(i=0;i<1;i++)
        {
            for(j=2;j<3;j++)
            {
                cout<<'{'<<i<<','<<j<<'}'<<endl;
            }
        }
    }
    {
        for(i=1;i<2;i++)
        {
            for(j=1;j<3;j++)
            {
                cout<<'{'<<i<<','<<j<<'}'<<endl;
            }
        }
    }
    {
        for(i=2;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<'{'<<i<<','<<j<<'}'<<endl;
            }
        }
    }
}