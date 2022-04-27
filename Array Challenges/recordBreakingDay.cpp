/* Isyana is given the number of visitor at her local theme park on N consecutive days.
The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the 
following conditions:

1.  The number of visitors on the day is strictly larger than the number of visitors on each of the
previous days.

2.  Either it is the last day, or the number of visitors on the day is strictly larger than the 
number of visitors on the following day.

Please help Isyana find out the number of record breaking days.*/

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

        int mx = -1;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
                if(arr[i] > mx && arr[i] > arr[i + 1])
                {
                        cout << arr[i] << "\t";
                        ans++;
                }
                mx = max(mx, arr[i]);
        }
        cout << "Total number of record breaking days =  " << ans;
        return 0;
}