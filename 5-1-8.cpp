//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int begin, end;
    int i,n;

    cout<<"Input the first and last number of your range: ";
    cin>>begin>>end;
    {
        if (begin<0||end>1300)
            cout<<"Not found"<<endl;
    }
    for (i=begin;i<=end;i++)
    {
        cout<<pow(2,i)<<endl;
    }
}