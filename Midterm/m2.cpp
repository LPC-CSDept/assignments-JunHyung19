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
    int score1,score2;//student scores
    int sum,avg;

    ifs.open("student.txt");
    if (!ifs)
    {
        cout<<"Error"<<endl;
        exit(0);
    }
    ifs>>num;

    for(int i=0;i<num;i++)
    {
        ifs>>name>>score1>>score2;
        sum=score1+score2;
        avg=sum/2;
        cout<<"Name: "<<name<<"\t"<<"Score 1: "<<score1<<"\t"<<"Score 2: "<<score2<<"\t"<<"Sum: "<<sum<<"\t"<<"Avg: "<<avg<<endl;
    }

    
}