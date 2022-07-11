#include <iostream>
using namespace std;

int powerof2(int n)
{
      if ( n == 0 )
      {
            return 1;
      }
      else if ( n == 1 )
      {
            return 2;
      }
      else
      {
            return 2 * powerof2(n - 1);
      }
}

int main()
{
      int n;
      cout << "Enter a number = ";
      cin >> n;
      int num = powerof2(n);
      cout << "Value = " << num;
      return 0;
}