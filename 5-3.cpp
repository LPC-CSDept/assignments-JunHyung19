//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rnd;
    int guess;
    int TRY;
    unsigned seed=time(0);
    srand(seed);
    rnd=rand()%1000;

    {
        cout<<"Guess the random number: ";
        cin>>guess;
    }
    {
        for (int i=0;i<=10;i++)
        {
            TRY=TRY=+i;
            {
                if(TRY=10)
                    cout<<"GAME OVER"<<endl;
            }
        }
    }
        {
            if(guess=rnd)
                cout<<"You got it!"<<endl;
            while(guess<rnd||guess>rnd)
                {
                if (guess<rnd)
                cout<<"Too low, try again."<<endl;
                cin>>guess;
                }
                {
                if(guess>rnd)
                cout<<"Too high, try again."<<endl;
                cin>>guess;   
                }
       
    }
    return(0); 
}