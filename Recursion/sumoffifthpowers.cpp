// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    long long helper2 (long long n)
    {
        int num = n;
        for(int i = 1; i <= 5; i++)
        {
            n *= num;
        }
        return n;
    }
    
    long long helper1 (long long n)
    {
        int num = helper2(n);
        if(n == 1)
        {
            return 1;
        }
        else
        {
            return num + helper1(n - 1);
        }
    }
    
    long long sumOfFifthPowers(long long N) {
        helper1(N);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfFifthPowers(N) << "\n";
    }
}  // } Driver Code Ends