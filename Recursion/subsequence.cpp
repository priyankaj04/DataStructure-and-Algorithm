#include <bits/stdc++.h>
using namespace std;

void subsequence(int ind,vector<int> &ds, int arr[], int n)
{
      if (ind == n)
      {
            for (auto it : ds)
            {
                  cout << it << " ";
            }
            if (ds.size() == 0)
            {
                  cout << "{ }";
            }
            cout << endl;
            return;
      }

      //take
      ds.push_back(arr[ind]);
      subsequence(ind + 1, ds, arr, n);
      ds.pop_back();

      //not take
      subsequence(ind + 1, ds, arr, n);
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
      vector<int> ds;
      subsequence(0, ds, arr, n);
      return 0;
}