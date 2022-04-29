#include<iostream>
using namespace std;

int main()
{
        int m,n;
        cout<<"Enter total number of rows and columns for Matrix1 = ";
        cin>>m>>n;

        int x,y;
        cout<<"Enter total number of rows and columns for Matrix2 = ";
        cin>>x>>y;

        if(n != x)
        {
                cout<<"Multiplication is not possible";
                exit(0);
        }

        int a[m][n];
        cout << "Enter elements for Matrix1 = ";
        for(int i = 0; i < m; i++)
                for(int j = 0; j < n; j++)
                        cin>>a[i][j];

        int b[x][y];
        cout << "Enter elements for Matrix2 = ";
        for(int i = 0; i < x; i++)
                for(int j = 0; j < y; j++)
                        cin>>b[i][j];

        int ans[m][y];

        for(int i = 0; i < m; i++)
        {
                for(int j = 0; j < y; j++)
                {
                        ans[i][j] = 0;
                        for(int k = 0; k <n; k++)
                        {
                                ans[i][j] += a[i][k] * b[k][j];
                        }
                }
        }

        cout << "Product = "; 
        for(int i = 0; i < m; i++)
        {
                for(int j = 0; j < y; j++)
                        cout<<ans[i][j]<<"\t";
                cout << endl;
        }
        return 0;
}