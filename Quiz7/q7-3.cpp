//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>

int findmax(int number[], int from, int to)
{
    int max=number[from];
    for(int i=from+1;i<=to;i++)
    {
        if(max<number[i])
        {
            max=number[i];
        }
    }
    return max;
}



int main()
{
    const int N = 10;
    int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

    for(i=0;i<N;i++)
    {
        
    }
}