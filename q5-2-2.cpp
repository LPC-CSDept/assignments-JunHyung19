//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()
{
    int n,m,num,np=1;
    int i;
    float inp;

    cout<<"Input the n value: ";
    cin>>n;
    cout<<"Input the m value: ";
    cin>>m;

    {
        if (m>0)
            num=m;
        else if (m<0)
            num=m*-1;
        else
            num=0;
    }
    for (i=0;i<num;i++)
    {
        cout<<np<<endl;
        np*=n;
    }

}