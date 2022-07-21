#include <bits/stdc++.h>
using namespace std;

int GCD( int a, int b)
{
      if (b == 0)
            return a;
      else
            return GCD(b, a % b);
}

int main()
{
      int n, k;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      cin >> k;
      if ( k >= n)
      {
            k = k % n;
      }
      int gcd = GCD(k, n);

      for ( int i = 0; i < gcd; i++)
      {
            int temp = arr[i];
            int j = i;

            while ( 1 )
            {
                  int d = j + k;
                  if ( d >= n )
                        d = d - n;
                  
                  if ( d == i )
                        break;

                  arr[j] = arr[d];
                  j = d;
            }
            arr[j] = temp;
      }

      for ( int i = 0; i < n; i++)
            cout << arr[i] << "\t";

      return 0;
}