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

        for (int i = 1; i < n; i++)
        {
                for(int j = 0; j < n - i; j++)
                {
                        if(arr[j] > arr[j + 1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[ j + 1] = temp;
                        }
                }
        }

        cout << "Sorted Array = ";
        for (int i = 0; i < n; i++)
                cout << arr[i] << "\t";

        return 0;
}
