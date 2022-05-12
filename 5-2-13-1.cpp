//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()

{
    int i, j;

    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i>=j)
                cout<<'{'<<i<<','<<j<<'}'<<endl;
            }
        }
    }
}