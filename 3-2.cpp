//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int numM,numF;
    int total;
    double perM,perF;

    cout << "Enter number of male students in class: ";
    cin >> numM;
    cout << "Enter number of female students in class: ";
    cin >> numF;

    total = numM+numF;

    perM = 100*numM/total;
    perF = 100*numF/total;
    
    cout << "Percentage of male students: " << perM;
    cout << "%.\n";
    cout << "Percentage of female students: " << perF;
    cout << "%.\n";
   
    return 0; 

}

