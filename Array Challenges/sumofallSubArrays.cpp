//given an array a[] of size n. Output sum of each subarray jof the given array.
#include<iostream>
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

        for (int i = 0; i < n; i++) 
        {
                int curr = 0;
                for (int j = i; j < n; j++)
                {
                        curr += arr[j];
                        cout << curr << "\t";
                }
        }
        return 0; 
}