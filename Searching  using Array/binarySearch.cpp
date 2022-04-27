#include<iostream>
using namespace std;

int main()
{
        int n;
        cout<<"Enter the total number of elements in array = ";
        cin >> n;

        int arr[n];
        cout<<"Enter array elements in sorted order = ";
        for(int i = 0; i < n; i ++)
                cin >> arr[i];

        int key;
        cout<<"Enter the key element to be searched in given array = ";
        cin >> key;

        bool flag = true;
        int s = 0;
        int e = n - 1;
        int mid;
        while(e > s)
        {
                mid = (s + e) / 2;
                if(arr[mid] == key)
                {
                        cout << key << " is found in position " << mid + 1;
                        flag = false;
                        break;
                }
                else if(arr[mid] > key)
                {
                        e = mid - 1;
                }
                else if(arr[mid] < key)
                {
                        s = mid + 1;
                }
        }
        if(flag)
        {
                cout << key << " is not found.";
        }
        return 0;
}