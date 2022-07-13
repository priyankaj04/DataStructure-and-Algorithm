#include <bits/stdc++.h>
using namespace std;

void subsequencewhosesumisk(int ind,vector<int> &ds,int s, int arr[], int n, int sum)
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
            }
            return;
      }

      //take
      ds.push_back(arr[ind]);
      s += arr[ind];
      subsequencewhosesumisk(ind + 1, ds, s, arr, n, sum);
      ds.pop_back();
      s -= arr[ind];

      //not take
      subsequencewhosesumisk(ind + 1, ds, s, arr, n, sum);
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