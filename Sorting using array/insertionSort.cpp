#include<iostream>
using namespace std;

int main()
{
        int n;
        cout<<"Enter the total number of elements in array = ";
        cin >> n;

        int arr[n];
        cout<<"Enter array elements= ";
        for(int i = 0; i < n; i ++)
                cin >> arr[i];

        for (int i = 1; i < n; i ++)
        {
                int cur = arr[i];
                int j = i - 1;
                while(arr[j] > cur && j>= 0)
                {
                        arr[j + 1] = arr[j];
                        j--;
                }
                arr[j + 1] = cur;
        }

        cout << "Sorted array = ";
        for (int i = 0; i < n; i++)
                cout << arr[i] << "\t";

        return 0;
}