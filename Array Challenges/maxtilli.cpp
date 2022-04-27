//given an array a[] of size n. For every i from 0 to n - 1 output max(a[0], a[1], ... , a[i]).
#include<iostream>
#include<math.h>
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

        int mx = -999999999;
        for(int i = 0; i < n; i++)
        {
                mx = max(mx, arr[i]);
                cout << mx << "\t";
        }
        return 0;
}