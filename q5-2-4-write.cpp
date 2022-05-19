//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs;
    int num;//number of employees
    int id;//ID
    string nam;//employee name
    string dep;//department
    double sal;//salary

    ofs.open("employee.txt");
    if (!ofs)
    {
        cout<<"Error"<<endl;
        exit(0);
    }

    cin>>num;
    ofs<<num<<endl;
    
    for(int i=0;i<num;i++)
    {
        cin>>id>>nam>>dep>>sal;
        ofs<<id<<" "<<nam<<" "<<dep<<" "<<sal<<endl;
    }
    ofs.close( );
}