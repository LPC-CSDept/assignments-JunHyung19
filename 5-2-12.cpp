//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <string>
using namespace std;

int main()

{
    int score,numstud,numsco;
    int i=0,j=0,sum=0;
    string namestud;
    float avg;

    cout<<"Input the number of students and scores: ";
    cin>>numstud>>numsco;

    {
    while (numstud<0||numsco<0)
        {
            cout<<"Input the number of students and scores: ";
            cin>>numstud>>numsco;
        }
    }
    {
    for (i=0;i<numstud;i++)
        {
            cout<<"Input the student's name: ";
            cin>>namestud;
                {
                    sum=0;
                    for(j=0;j<numsco;j++)
                    {
                        cout<<"Input a score: ";
                        cin>>score;
                        sum+=score;
                    }    
                }
                avg=sum/numsco;
                cout<<"Name: "<<namestud<<" | Sum: "<<sum<<" | Average: "<<avg<<endl;
        }
        
    }
    
}