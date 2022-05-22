//Jonathan Park
//Professor Lee
//CS 1
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
int main()
{
 vector<int> number;
 int size = 20;
 srand(time(0));
 makevector(number, size);
 printvector(number);
 deleteone(number);
}

void makevector(vector<int> &vec, int size)
{
 for(int i=0; i<size; i++)
         vec.push_back(rand() % 10);
}

void printvector(vector<int> vec)
{
 for(int v : vec)
          cout << v << "\t";
 cout << endl;
}

void deleteone(vector<int> &vec)
{
      int usernum;
      int deletecnt=0;

      cin >> usernum;

      // Your Code
      for(int i=0;i<vec.size();i++)//for loop
      {
        vec.erase(vec.begin()+i);//erases element
        deletecnt++;//+1 is added to 'deletecnt' each time
      }
        //end
    cout << usernum << "is deleted " << deletecnt << " times \n";
    printvector(vec);//semicolon missing
}