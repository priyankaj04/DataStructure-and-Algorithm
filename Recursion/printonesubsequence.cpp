//print one subsequence whose sum is given
#include <bits/stdc++.h>
using namespace std;

bool subsequencewhosesumisk(int ind,vector<int> &ds,int s, int arr[], int n, int sum)
{
      if (ind == n)
      {
            if (s == sum)
            {
                  for (auto it : ds)
                  {
                        cout << it << " ";
                  }
                  cout << endl;
                  return true;
            }
            return false;
      }

      //take
      ds.push_back(arr[ind]);
      s += arr[ind];
      if (subsequencewhosesumisk(ind + 1, ds, s, arr, n, sum) == true)
      {
            return true;
      }
      ds.pop_back();
      s -= arr[ind];

      //not take
      if ( subsequencewhosesumisk(ind + 1, ds, s, arr, n, sum) == true )
      {
            return true;
      }
      return false;
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
      vector<int> ds;
      subsequencewhosesumisk(0, ds, 0, arr, n, sum);
      return 0;
}
// time complexity = O(2^n * n);
// space complexity = O(n);