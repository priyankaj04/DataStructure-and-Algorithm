//print all the sum of possible subset from given array in sorted order
#include <bits/stdc++.h>
using namespace std;

void func(int ind, int sum, vector<int> &arr, int n, vector<int> &sumSubset)
{
      if(ind == n)
      {
            sumSubset.push_back(sum);
            return;
      }

      //pick the element
      func(ind + 1, sum + arr[ind], arr, n, sumSubset);

      //do not pick the element
      func(ind + 1, sum, arr, n, sumSubset);
}

vector<int> subsetSums(vector<int> arr, int n)
{
      vector<int> sumSubset;
      func(0, 0, arr, n, sumSubset);
      sort(sumSubset.begin(), sumSubset.end());
      return sumSubset;
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

      vector<int> ans = subsetSums(arr, n);
      for (int i = 0; i < ans.size(); i++)
      {
            cout << ans[i] << "\t";
      }
      return 0;
}