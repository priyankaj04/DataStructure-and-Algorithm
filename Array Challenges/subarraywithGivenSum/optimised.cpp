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
        cout << "Enter the sum = ";
        cin >> s;

        int i = 0, j = 0, st = -1, en = -1, sum = 0;
        while(j < n && sum + arr[j] <= s)
        {
                sum += arr[j];
                j++;
        }

        if(sum == s)
        {
                cout << i + 1 << "\t" << j + 1 << endl;
                exit(0);
        }

        while(j < n)
        {
                sum += arr[j];
                while(sum > s)
                {
                        sum -= arr[i];
                        i++;
                }

                if( sum == s)
                {
                        st = i + 1;
                        en = j + 1;
                        break;
                }
                j++;
        }

        cout << st << "\t" << en << endl;
        return 0;
}