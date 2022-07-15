//print all the subset, duplicates elements are not allowed
#include <bits/stdc++.h>
using namespace std;

void findSubset( int index, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
{
      ans.push_back(ds);
      for ( int i = index; i < arr.size(); i++)
      {
            if ( i != index && arr[i] == arr[i - 1]) continue;
            ds.push_back(arr[i]);
            findSubset(i + 1, arr, ds, ans);
            ds.pop_back();
      }
}

vector<vector<int>> subset( vector<int> &arr)
{
      vector<vector<int>> ans;
      vector<int> ds;
      sort(arr.begin(), arr.end());
      findSubset(0, arr, ds, ans);
      return ans;
}

int main()
{
      int n;
      cout << "Enter total number of elements = ";
      cin >> n;
      vector<int> arr;
      cout << "Enter array elements = ";
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            arr.push_back(x);
      }

      vector<vector<int>> ans = subset(arr);
      for (int i = 0; i < ans.size(); i++)
      {
            for (int j = 0; j < ans[i].size(); j++)
            {
                  if (i == 0 && j == 0)
                  {
                        cout << "{}";
                        continue;
                  }
                  cout << ans[i][j] << " ";
            }
            cout << "\n" << endl;
      }
      return 0;
}