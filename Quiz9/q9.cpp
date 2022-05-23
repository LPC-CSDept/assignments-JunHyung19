//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct employee
{
    int id;//ID number
    string name;//employee name
    double sal;//annual salaries
    string dep;//department name
    string date;//starting work date
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
}