/***************************************************************************
 * Maximum sum of i*arr[i] among all rotations of a given array  *

The basic approach is to calculate the sum of new rotation from the previous rotations. 
This brings up a similarity where only the multipliers of first and last element change 
drastically and the multiplier of every other element increases or decreases by 1. 
So in this way, the sum of next rotation can be calculated from the sum of present rotation.

 ****************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      int curr_val = 0, cum_sum = 0;

      for (int i = 0; i < n; i++)
      {
            curr_val += i * arr[i];
      }

      for ( int i = 0; i < n; i++)
      {
            cum_sum += arr[i];
      }

      int res = curr_val;

      for (int i = 1; i < n; i++)
      {
            int next_val = curr_val - (cum_sum - arr[i - 1]) + arr[i - 1] * (n - 1);

            curr_val = next_val;

            res = max(res, next_val);
      }

      cout << "maximum sum of i * arr[i] among all rotations of a given array are = " << res;
      return 0;
}