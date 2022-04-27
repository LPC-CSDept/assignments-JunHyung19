//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()
{
    const int price=99;
    int numpack;//number of packages bought
    const double p20=0.8, p30=0.7, p40=0.6, p50=0.5;

    cout<<"Enter number of packages sold: ";
    cin>>numpack;

    if (numpack<0)
    exit(0);

    double disp, p1, p2;
    //disp=discounted percentage, p1=price before discount, p2=final price after discounted

    if (numpack>=100)
    disp=p50;
    else if (numpack>=50)
    disp=p40;
    else if (numpack>=20)
    disp=p30;
    else
    disp=p20;

    p1=price*numpack;
    p2=p1*disp;

    cout<<"The final cost after the discount is: $"<<p2<<endl;

}