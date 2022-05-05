//Traverse the matrix in spiral form.
#include<iostream>
using namespace std;

int main()
{
        int m,n;
        cout<<"Enter total number of rows and columns = ";
        cin>>m>>n;

        int a[m][n];
        for(int i = 0; i < m; i++)
                for(int j = 0; j < n; j++)
                        cin>>a[i][j];

        int rowSt = 0;
        int rowEd = m - 1;
        int colSt = 0;
        int colEd = n - 1;
        
        while(rowSt <= rowEd && colSt <= colEd)
        {
                //for rowS
                for(int i = colSt; i <= colEd; i++)
                        cout<<a[rowSt][i]<<"\t";

                rowSt++;
                cout << endl;

                //for colE
                for(int i = rowSt; i <= rowEd; i++)
                        cout<<a[i][colEd]<<"\t";

                colEd--;
                cout << endl;

                //for rowE
                for(int i = colEd; i >= colSt; i--)
                        cout<<a[rowEd][i]<<"\t";

                rowEd--;
                cout << endl;

                //for colS
                for(int i = rowEd; i >= rowSt; i--)
                        cout<<a[i][colSt]<<"\t";

                colSt++;
                cout << endl;
        }
        return 0;
}
