#include <bits/stdc++.h>

using namespace std;
class Solution
{
private:
      void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
      {
            if (ds.size() == nums.size())
            {
                  ans.push_back(ds);
                  return;
            }
            for (int i = 0; i < nums.size(); i++)
            {
                  if (!freq[i])
                  {
                        ds.push_back(nums[i]);
                        freq[i] = 1;
                        recurPermute(ds, nums, ans, freq);
                        freq[i] = 0;
                        ds.pop_back();
                  }
            }
      }

public:
      vector<vector<int>> permute(vector<int> &nums)
      {
            vector<vector<int>> ans;
            vector<int> ds;
            int freq[nums.size()];
            for (int i = 0; i < nums.size(); i++)
                  freq[i] = 0;
            recurPermute(ds, nums, ans, freq);
            return ans;
      }
};

int main()
{
      Solution obj;
      int n;
      cout << "Enter total number of elements in array = ";
      cin >> n;
      cout << "Enter array elements = ";
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            v.push_back(x);
      }

            vector<vector<int>> sum = obj.permute(v);
      cout << "All Permutations are " << endl;
      for (int i = 0; i < sum.size(); i++)
      {
            for (int j = 0; j < sum[i].size(); j++)
                  cout << sum[i][j] << " ";
            cout << endl;
      }
}