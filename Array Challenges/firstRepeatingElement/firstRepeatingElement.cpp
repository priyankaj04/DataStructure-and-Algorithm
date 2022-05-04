/* Given an array arr[] of size N. The task is to find the first repeating element in the array of
integers, i.e., an element that occurs more than once and whose index of first occurance is smallest. */

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

        int mx = 0;
        int minidx = 0; 
        int count = 0;

        for (int i = 0; i < n; i++)
        {
                for(int j = i; j < n; j++)
                {
                        if(arr[i] == arr[j])
                        {
                                count++;
                        }
                }
                if(count > mx)
                {
                        minidx = i;
                }
                mx = max(mx, count);
                count = 0;
        }
        cout << mn + 1;
        return 0;
}
