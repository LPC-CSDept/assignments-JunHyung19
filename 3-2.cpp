//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include<string>
#include <cmath> 

using namespace std;


int main()
{
    int numM;
    int numF;

    cout << "Enter number of male students in class: ";
    cin >> numM;
    cout << "Enter number of female students in class: ";
    cin >> numF;

    int total;
    total = numM+numF;

    float perM;
    float perF;
    perM = (numM/total)*100;
    perF = (numF/total)*100;
    
    cout << "Percentage of male students: " << perM;
    cout << "%.\n";
    cout << "Percentage of female students: " << perF;
    cout << "%.\n";
   
    return 0; 

}

