//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    double seed = time(0);
    srand(seed);

    double num1, num2, num3;
    num1=rand();
    num2=rand();
    num3=rand();

    double sum;
    sum=num1+num2+num3;

    double avg;
    avg=sum/3;

    cout << "First random number: " << num1 << endl;
    cout << "Second random number: " << num2 << endl;
    cout << "Third random number: " <<num3 << endl;
    cout << "Sumnation of the three random numbers: " << sum << endl;
    cout << "Average of the three random numbers: " << setprecision(5) << avg << endl;
    
    return 0;
}