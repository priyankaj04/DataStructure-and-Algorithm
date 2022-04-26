#include<iostream>
using namespace std;

int fact(int n)
{
        int a = 1;
        for (int i = 1; i <= n; i ++)
        {
                a *= i;
        }
        return a;
}

int main()
{
        int n;
        int cons;
        cout << "Enter number of rows = ";
        cin >> n;

        for (int row = 0; row <= n; row++) 
        {
                for(int col = 0; col <= row; col++)
                {
                        cons = fact(row) / (fact(row - col) * fact(col));
                        cout << cons << "\t";
                }
                cout << endl;
        }
        return 0;
}