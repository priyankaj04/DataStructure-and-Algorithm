// print all the possible subsequence whose sum is given
#include <bits/stdc++.h>
using namespace std;

void findCombination( int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds) 
{
      if(ind == arr.size())
      {
            if(target == 0)
            {
                  ans.push_back(ds);
            }
            return;
      }

      //pick element
      if(arr[ind] <= target)
      {
            ds.push_back(arr[ind]);
            findCombination(ind, target - arr[ind], arr, ans, ds);
            ds.pop_back();
      }
      //not pick element
      findCombination(ind + 1, target, arr, ans, ds);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target,  vector<int> &ds)
{
      vector<vector<int>> ans;
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
      vector<int> ds;
      cout << "Enter a sum value = ";
      cin >> sum;
      vector<vector<int>> ans = combinationSum(arr, sum, ds);
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
