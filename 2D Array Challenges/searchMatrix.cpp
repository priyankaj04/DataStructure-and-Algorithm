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
                        cin >> a[i][j];
        }

        int key;
        cout << "Enter search element = ";
        cin >> key;

        int row = 0, col = m - 1;
        bool flag = false;
        while (row < n && col >= 0)
        {
                if(a[row][col] == key)
                {
                        flag = true;
                }
                else if(a[row][col] > key)
                        col--;
                else if(a[row][col] < key)
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