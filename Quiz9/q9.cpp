//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct date
{
    int month;
    int day;
    int year;
};

struct employee
{
    int id;//ID number
    string name;//employee name
    double sal;//annual salaries
    string dep;//department name
    date screcord;//starting work date
};

void printemployee(employee s);
int makeStructArray(employee s[]);
void findusername(employee s[],int numrec, string username);

int main()
{
    int numrec;
    employee s[50];
    string username;

    numrec = makeStructArray(s);
    for(int i=0;i<numrec;i++)
    {
        printemployee(s[i]);
    }
}

int makeStructArray(employee s[])
{
    ifstream ifs;
    int idx;

    ifs.open("employee.txt");
        if (!ifs)
        {
            cout<<"Error"<<endl;
            exit(0);
        }
        ifs>>num;

        for(int i=0;i<num;i++)
        {
            ifs>>id>>nam>>dep>>sal;
            tot+=sal;
            cout<<id<<"\t"<<nam<<"\t"<<dep<<"\t"<<sal<<endl;
        }
        avg=tot/num;
        cout<<"Total Amount:\t"<<tot<<"\t"<<"Salary Average:\t"<<avg<<endl;
}