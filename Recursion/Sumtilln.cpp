#include <iostream>
using namespace std;

int recursion ( int num )
{
      if ( num == 1)
      {
            return 1;
      }
      else
      {
            return num + recursion (num - 1);
      }
}

int main()
{
      int n;
      cout << "Enter a number = ";
      cin >> n;
      int num = recursion(n);
      cout << " sum = " << num;
      return 0;
}