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

        int key;
        cout<<"Enter the key element to be searched in given array = ";
        cin >> key;

        bool flag = false;
        for(int i = 0; i < n; i ++)
        {
                if(arr[i] == key)
                {
                        cout << key << " is found in position." <<i + 1;
                        flag = false;
                        break;
                }
                flag = true;
        }
        
        if(flag)
        {
                cout << key << " not found.";
        }
        return 0;
}