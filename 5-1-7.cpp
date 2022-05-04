//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()

{
    int n,num,np=1;
    int i;
    float inp;

    cout<<"Input the n value: ";
    cin>>n;
    {
        if (n>0)
            num=n;
        else if (n<0)
            num=n*-1;
        else
            num=0;
    }
    
    for (i=0;i<num;i++)
    {
        cout<<np<<endl;
        np*=2;
    }

    {
        if (n<0)
            inp=1/np;
        else 
            inp=np;
    }

    cout<<inp<<endl;
}