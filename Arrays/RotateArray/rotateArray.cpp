//by using temporary array, rotate elements for given number of time

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, k;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];
      cin >> k;
      int temp[n];
      int j = 0;

      if ( k >= n)
      {
            k = k % n;
      }

      for (int i = k; i < n; i++ )
      {
            temp[j] = arr[i];
            j++;
      }

      for (int i = 0; i < k; i++ )
      {
            temp[j] = arr[i];
            j++;
      }

      for (int i = 0; i < n; i++ )
      {
            arr[i] = temp[i];
      }

      for (int i = 0; i < n; i++ )
      {
            cout << arr[i] << "\t";
      }

            return 0;
}