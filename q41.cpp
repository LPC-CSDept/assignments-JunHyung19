//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int selection;
    double r,r2,l,w,b,h,area;
    cout<<"Geometry Calculator\n";
    cout<<"1. Calculate the Area of a Circle\n";
    cout<<"2. Calculate the Area of a Rectangle\n";
    cout<<"3. Calculate the Area of a Triangle\n";
    cout<<"4. Quit\n";
    cout<<"Enter your choice (1-4): ";
    cin>>selection;

    switch(selection)
    {
        case 1:cout<<"Enter the radius of the circle: ";
            cin>>r;
                if (r<0)
                exit(0);
            r2=r*r;
            area=r2*3.14159;
            cout<<"The area of the circle is: "<<area<<endl;
            break;
        case 2:cout<<"Enter the length: ";
            cin>>l;
            cout<<"Enter the width: ";
            cin>>w;
                if (l<0||w<0)
                exit(0);
            area=l*w;
            cout<<"The area of the rectangle is: "<<area<<endl;
            break;
        case 3:cout<<"Enter the base: ";
            cin>>b;
            cout<<"Enter the height: ";
            cin>>h;
                if (b<0||h<0)
                exit(0);
            area=0.5*b*h;
            cout<<"The area of the triangle is: "<<area<<endl;
            break;
        case 4:cout<<"bruh";
            break;
        default:cout<<"But why tho?";
    }
}