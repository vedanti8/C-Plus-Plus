#include<iostream>
using namespace std;

void func(char d)
{
  for (char c = d ; c <= 'z'; c++)
    cout << c<< ' ';  
    
}

int main ()
{
  char j ;
  cin>>j;
  func(j);
}
