//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
using namespace std;

void printtriangle(int numbers[][3],int);

int main()
{
    const int SIZE=3;
    int numbers[SIZE][SIZE]={{0,1,2},{3,4,5},{6,7,8}};

    printtriangle(numbers, SIZE);
}

void printtriangle(int num[][3], int SIZE)
{
    int numbers,SIZE=3;
    for(int i=0;i<SIZE;i++)//for loop, i for column, j for row 
    {
        for(int j=0;j<=i;j++)//First (0,0). Then (1,0) and (1,1). Then (2,0),(2,1),(2,2)
        cout<<numbers[i][j]<<endl;
    }
}