/* Given an unsorted array A of size N of non-negative integers, find a continuous subarray
which adds to a given number S */

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

        int s;
        cout << "Enter the Sum = ";
        cin >> s;

        for (int i = 0; i < n; i++)
        {
                int curr = 0;
                for (int j = i; j < n; j++)
                {
                        curr += arr[j];
                        if(curr == s)
                        {
                                cout << i + 1 << "\t" << j + 1 << endl;
                                exit(0); // to print first subarray that determines the given sum. 
                                //If above step is not written, then in output we get all the subarrays that determines the given sum.
                        }
                }
        }
        return 0;
}