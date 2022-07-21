/**************************************************************************
 *    Maximum sum of i*arr[i] among all rotations of a given array    *
The method discusses the solution using pivot in O(n) time. 
The pivot method can only be used in the case of a sorted or a rotated sorted array.

Approach : Let’s assume the case of a sorted array. As we know for an array the maximum sum 
will be when the array is sorted in ascending order. In case of a sorted rotated array, we can 
rotate the array to make it in ascending order. So, in this case, 
the pivot element is needed to be found following which the maximum sum can be calculated.
********************************************************************************/


#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int n)
{
      int i;
      for (i = 0; i < n; i++)
      {
            if( arr[i] > arr[(i + 1) % n])
                  return i;
      }
}

int findmax(int arr[], int n)
{
      int Pivot = pivot(arr, n);
      int diff = n - 1 - Pivot;

      int sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum += ((i + diff) % n) * arr[i];
      }

      return sum;
}

int main()
{
      int n;
      cin >> n;
      int arr[n];
      for ( int i = 0; i < n; i++)
            cin >> arr[i];
      int max = findmax(arr, n);
      cout << "Maximum sum of i*arr[i] among all rotations of a given array = "<< max;
      return 0;
}