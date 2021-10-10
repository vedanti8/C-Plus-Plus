#include<iostream>
using namespace std;

void
func ()
{
  for (char c = 'z'; c >= 'a'; c--)
    {
      cout << c << ' ';
    }

}

int
main ()
{

  func ();
}
