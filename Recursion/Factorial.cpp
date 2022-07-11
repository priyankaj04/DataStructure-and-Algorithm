#include <iostream>
using namespace std;

int fact( int n )
{
      if( n == 1 )
      {
            return 1;
      }
      else if ( n == 2)
      {
            return 2;
      }
      else
      {
            return n * fact(n - 1);
      }
}

int main()
{
      int num;
      cout << "Enter a number = ";
      cin >> num;
      int n = fact(num);
      cout << "Factorial of " << num << " is = " << n;
      return 0;
}