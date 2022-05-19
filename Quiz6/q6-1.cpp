//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <iomanip>
using namespace std;

void swapTwoValues(int &n1, int &n2);
void swapTwoValues(float &f1, float &f2);

int main()

{
    int n1,n2;
    float f1,f2;

    cout<<"Input n1 and n2: "<<endl;
    cin>>n1>>n2;
    cout<<"Input f1 and f2: "<<endl;
    cin>>f1>>f2;
    swap(n1,n2);
    swap(f1,f2);

    cout<<"n1="<<n1<<" "<<"n2="<<n2<<endl;
    cout<<"f1="<<f1<<" "<<"f2="<<f2<<endl;

}