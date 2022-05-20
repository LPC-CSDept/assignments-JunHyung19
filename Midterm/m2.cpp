//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream ifs;
    int num;//number of students
    string name;//student name
    int score;//student score
    int sum,avg;

    ifs.open("student.txt");
    if (!ifs)
    {
        cout<<"Error"<<endl;
        exit(0);
    }
    ifs>>num;

    

}