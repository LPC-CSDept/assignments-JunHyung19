//Jonathan Park
//Professor Lee
//CS 1
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

    cout << "First random number: " << num1 << endl;
    cout << "Second random number: " << num2 << endl;
    cout << "Third random number: " <<num3 << endl;
    cout << "Sumnation of the three random numbers: " << sum << endl;
    cout << "Average of the three random numbers: " << setprecision(5) << fixed << avg << endl;
    
    return 0;
}