//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()
{
    int begin,end,i,j;

    cout<<"Input the first and last number of your range: ";
    cin>>begin>>end;

    while (begin>end)
    {
        cout<<"Error try again: "<<endl;
        cin>>begin>>end;
    }
    while(begin<1||end>100)
    {
        cout<<"Error try again: "<<endl;
        cin>>begin>>end;
    }

    for(i=begin;i<end;i++)
    {
        for(j=2;j<(i/2);j++)
            if(!(i%j))break;
            if(j>(i/j))cout<<i<<endl;
    }

}