#include <iostream>
using namespace std;
int Number_prime(int n);
int main()
{
int number, flag = 0;
cout << "Enter positive integer: ";
cin >> number;
// one argument is passed to the function
flag = Number_prime(number);
if(flag == 1)
cout << number << " Not a Prime Number";
else
cout<< number << " its a Prime Number";
return 0;
}
/* it have a return type - integer */
int Number_prime(int n)
{
int i;
for(i = 2; i <= n/2; ++i)
{
if(n % i == 0)
return 1;
}
return 0;
}
