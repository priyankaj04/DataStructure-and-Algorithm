#include <iostream>
using namespace std;

int fibonacciseries(int num)
{
      if ( num == 1)
      {
            return 1;
      }
      else if ( num == 2)
      {
            return 2;
      }
      else
      {
            return fibonacciseries(num - 1) + fibonacciseries(num - 2);
      }
}

int main()
{
      int n;
      cout << "Enter a number = ";
      cin >> n;
      int num = fibonacciseries(n);
      cout << "Answer = " << num;

      return 0;
}