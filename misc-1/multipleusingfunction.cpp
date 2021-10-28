#include<iostream>

class anai
{

public:

  int a, b;

  void input ()
  {
    std::cin >> a >> b;
  }

  void mul ()
  {
    std::cout << a * b;
  }
};

int main ()
{

  anai result;

  result.input ();
  
  result.mul () ;
  

}
