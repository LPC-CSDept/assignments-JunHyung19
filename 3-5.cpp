#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


int main()
{
    double seed = time(0);
    srand(seed);

    double num1, num2, num3;
    num1=rand()%100;
    num2=rand()%100;
    num3=rand()%100;

    double sum;
    sum=num1+num2+num3;

    double avg;
    avg=sum/3;

    cout << setprecision(2) << fixed << avg << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl; 

    return 0;

}