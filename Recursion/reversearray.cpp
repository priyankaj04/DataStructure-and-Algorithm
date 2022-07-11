#include <iostream>
using namespace std;

int reversearray(int *arr, int st, int en)
{
      if ( st >= en)
      {
            return 0;
      }
      else {
            int temp = arr[st];
            arr[st] = arr[en];
            arr[en] = temp;
            return reversearray(arr, st + 1, en - 1);
      }
}

int main()
{
      int n;
      cout << "Enter total number of elements in array = ";
      cin >> n;
      int arr[n];
      cout << "Enter array elements = ";
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      reversearray(arr, 0, n - 1);
      cout << "\nReverse array elements = ";
      for (int i = 0; i < n; i++)
      {
            cout << "\t" << arr[i];
      }
      return 0;
}