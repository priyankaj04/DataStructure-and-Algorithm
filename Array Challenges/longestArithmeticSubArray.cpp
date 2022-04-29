/*An arithmetic array is an array that contains at least two integers and 
the difference between consecutive integers are equal. For example, [9, 10], [3, 3, 3], [9, 7, 5, 3] 
are arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai.
She wants to choose a contiguous arithmetic subarray from her array that has the maximum
length. Please help her to determine the length of the longest contiguous arithmetic subarray.*/

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

        int pre = arr[1] - arr[0], mx = 2;
        int cur, count = 2;

        for (int i = 2; i < n; i++)
        {
                cur = arr[i + 1] - arr[i];
                if(cur == pre)
                {
                        count++;
                }
                else
                {
                        pre = cur;
                        count = 2;
                }
                mx = max(mx, count);
        }
        cout << mx;
        return 0;
}
