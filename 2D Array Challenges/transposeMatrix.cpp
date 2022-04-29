#include<iostream>
using namespace std;

int main()
{
        int n;
        cout<<"Enter total number of rows = ";
        cin>>n;

        int a[n][n];
        for(int i = 0; i < n; i++)
                for(int j = 0; j < n; j++)
                        cin>>a[i][j];

        for (int i = 0; i < n; i++) 
        {
                for (int j = i; j < n; j++) 
                {
                        if(i == j)
                                continue;
                        int temp = a[i][j];
                        a[i][j] = a[j][i];
                        a[j][i] = temp;
                }
        }

        cout << "Matrix after Transpose = "<<endl;
        for(int i = 0; i < n; i++)
        {
                for(int j = 0; j < n; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout << "\n";
        }
        return 0;
}