//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    int num;
    int id;
    string nam;
    string dep;
    double sal,tot,avg;//tot=total, avg=average

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