//traverse the matrix in spiral form.
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

        int rowS = 0;
        int rowE = m - 1;
        int colS = 0;
        int colE = n - 1;
        
        while(rowS <= rowE && colS <= colE)
        {
                //for rowS
                for(int i = colS; i <= colE; i++)
                        cout<<a[rowS][i]<<"\t";

                rowS++;
                cout << endl;

                //for colE
                for(int i = rowS; i <= rowE; i++)
                        cout<<a[i][colE]<<"\t";

                colE--;
                cout << endl;

                //for rowE
                for(int i = colE; i >= colS; i--)
                        cout<<a[rowE][i]<<"\t";

                rowE--;
                cout << endl;

                //for colS
                for(int i = rowE; i >= rowS; i--)
                        cout<<a[i][colS]<<"\t";

                colS++;
                cout << endl;
        }
        return 0;
}