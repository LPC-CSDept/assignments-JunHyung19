//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

int main()
{
    int numM;
    int numF;
    int total;

    int perM;
    int perF;

    cout << "Enter number of male students in class: ";
    cin >> numM;
    cout << "Enter number of female students in class: ";
    cin >> numF;

    total = numM + numF;
    perM = (numM/total)*100;
    perF = (numF/total)*100;
    
    cout << "Percentage of male students: " << total << endl;
    cout << "Percentage of female students: " << total << endl;
    return 0;
}