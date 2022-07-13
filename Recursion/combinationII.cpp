//print all the unique combinations of arrays whose sum is given
#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
      if(target == 0)
      {
            ans.push_back(ds);
            return;
      }
      for (int i = ind; ind < arr.size(); i++)
      {
            if(i > ind && arr[i] == arr[i-1])
                  continue;
            if(arr[i] > target)
                  break;
            ds.push_back(arr[i]);
            findCombination(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
      }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
      sort(candidates.begin(), candidates.end());
      vector<vector<int>> ans;
      vector<int> ds;
      findCombination(0, target, candidates, ans, ds);
      return ans;
}

int main()
{
      int n;
      cout << "Enter total number of array elements = ";
      cin >> n;
      vector<int> arr;
      cout << "Enter array elements = ";
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            arr.push_back(x);
      }
      int sum;
      cout << "Enter a sum value = ";
      cin >> sum;
      vector<vector<int>> ans = combinationSum(arr, sum);
      for (int i = 0; i < ans.size(); i++) 
      {
            for (int j = 0; j < ans[i].size(); j++)
                  cout << ans[i][j] << " ";
            cout << endl;
      }
      return 0;
}
// time complexity = O(2^t * k); 
// space complexity = O(k * x);