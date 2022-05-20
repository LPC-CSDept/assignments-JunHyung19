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

    ifs.open("student.txt");//to open the txt file
    if (!ifs)
    {
        cout<<"Error"<<endl;
        exit(0);//if error is present, it will stop running the code
    }
    ifs>>num;//looks at the first value, which is the number of students

    for(int i=0;i<num;i++)//looks through the students
    {
        ifs>>name>>score1>>score2;
        sum=score1+score2;
        avg=sum/2;
        cout<<"Name: "<<name<<"\t"<<"Score 1: "<<score1<<"\t"<<"Score 2: "<<score2<<"\t"<<"Sum: "<<sum<<"\t"<<"Avg: "<<avg<<endl;
    }
}