#include<iostream>
using namespace std;

void
table (int n)
{
  for (int i = 1; i <= 10; i++)
    {
      cout << n << "x" << i << "=" << n * i << endl;
    }
}

int
main ()
{
  for (int j = 2; j <= 10; j++)
    {

      table (j);

      cout << endl;
      cout << endl;

    }

}
