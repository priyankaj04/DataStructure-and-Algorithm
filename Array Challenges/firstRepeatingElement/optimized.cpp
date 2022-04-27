#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main()
{
        int n;
        cout<<"Enter the total number of elements in array = ";
        cin >> n;

        int arr[n];
        cout<<"Enter array elements = ";
        for(int i = 0; i < n; i ++)
                cin >> arr[i];

        const int N = 1e6 + 2; //Max N contraints.
        int idx[N];

        for (int i = 0; i<N; i++)
                idx[i] = -1;

        int minidx = INT_MAX; //declaring maximum integer number, to get the minimum index.

        for (int i = 0; i < n; i++)
        {
                if(idx[arr[i]] != -1)
                        minidx = min(minidx, idx[arr[i]]);
                else
                        idx[arr[i]] = i;
        }

        if(minidx == INT_MAX)
                cout << "-1" << endl;
        else
                cout << minidx + 1 << endl;
        return 0;
}
