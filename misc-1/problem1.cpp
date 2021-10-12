#include<iostream>
#include<vector>
using namespace std;
bool anai (int num, int number)
{

  return true ? (num % number == 0) : false;
}

int main ()
{
  vector < int >ans;
  int number, range;
  cin >> number >> range;
  for (int i = 0; i < range; i++)
    if (anai (i, number) == true)
      {
	ans.push_back (i);
      }
for (auto it:ans)
    {
      cout << it << " ";
    }
}
