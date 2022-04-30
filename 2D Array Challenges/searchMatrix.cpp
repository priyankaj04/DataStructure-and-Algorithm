//optimised way
#include<iostream>
using namespace std;

int main()
{
        int m, n;
        cout << "Enter total number of rows and columns = ";
        cin >> m >> n;

        int a[m][n];
        cout << "Enter elements = ";
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                        cin >> a[i][j]; //Input array elements
        }

        int key;
        cout << "Enter search element = ";
        cin >> key;

        int r = 0, c = m - 1;
        bool flag = false;
        while (r < n && c >= 0)
        {
                if(a[r][c] == key)
                {
                        flag = true;
                }
                else if(a[r][c] > key)
                        col--;
                else if(a[r][c] < key)
                        row++;
        }

        if(flag)
        {
                cout << key << " is found.";
        }
        else
                cout << key << " is not found.";
        return 0;
}
