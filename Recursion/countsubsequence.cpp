#include <bits/stdc++.h>
using namespace std;

int subsequencewhosesumisk(int ind, int s, int arr[], int n, int sum, int count)
{
      if (ind == n)
      {
            if (s == sum)
            {
                  return 1;
            }
            return 0;
      }

      //take
      s += arr[ind];
      int l = subsequencewhosesumisk(ind + 1, s, arr, n, sum, count);
      s -= arr[ind];

      //not take
      int r = subsequencewhosesumisk(ind + 1, s, arr, n, sum, count);
      return l + r;
}

int main()
{
      int n;
      cout << "Enter total number of array elements = ";
      cin >> n;
      int arr[n];
      cout << "Enter array elements = ";
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      int sum;
      cout << "Enter a sum value = ";
      cin >> sum;
      int x = subsequencewhosesumisk(0, 0, arr, n, sum, 0);
      cout << "Count of subsequence are = " << x;
      return 0;
}




// time complexity = O(2^n * n);
// space complexity = O(n);