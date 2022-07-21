#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for ( int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }
      int min = 0; 
      int max = 0;
      for(int i = 0; i < n; i++)
      {
            if(arr[i] < min)
            {
                  min = arr[i];
            }
            if (arr[i] > max)
            {
                  max = arr[i];
            }
      }
      cout << "\n minimum = " << min;
      cout << "\n maximum = " << max;
      return 0;
}