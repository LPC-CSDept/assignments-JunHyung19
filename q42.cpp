//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double pw, d;
    double r1, r2, r3, r4;
    double rate;
    double price;

    r1=1.10;
    r2=2.20;
    r3=3.70;
    r4=4.80;

    cout<<"Enter the package weight in kilograms: ";
    cin>>pw;//weight of package
        if (pw<=0||pw>20)
            exit(0);
    cout<<"Enter the shipping distance in miles: ";
    cin>>d;//distance
        if (d<10||d>3000)
            exit(0);

    if (pw<=2)
        rate=r1;
    else if (pw<=6)
        rate=r2;
    else if (pw<=10)
        rate=r3;
    else
        rate=r4;

    if (d<=500)
        price=rate;
    else
        price=d/500*rate;

    cout<<"Price: $"<<price<<endl;
    cout<<"Distance: "<<d<<" miles"<<endl;
    cout<<"Weight: "<<pw<<" kilograms"<<endl;
}