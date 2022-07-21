#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, k;
      cin >> n;
      int arr[n];
      for ( int i = 0; i < n; i++)
            cin >> arr[i];
      cin >> k;
      if ( k >= n )
      {
            k = k % n;
      }
      int p = 1;
      while ( p <= k ) 
      {
            int last = arr[0];
            for (int i = 0; i < n - 1; i ++)
            {
                  arr[i] = arr[i + 1];
            }
            arr[n - 1] = last;
            p++;
      }

      for ( int i = 0; i < n; i++ )
      {
            cout << arr[i] << "\t";
      }
      return 0;
}