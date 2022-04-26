#include<iostream>
using namespace std;

int armstrongNum(int n)
{
        int a = 0;
        int rem;
        int cons;

        while(n > 0)
        {
                rem = n % 10;
                cons = rem * rem * rem;
                a += cons;
                n = n / 10;
        }
        return a;
}

int main()
{
        int n;

        cout<<"Enter a number = ";
        cin >> n;

        if(n == armstrongNum(n) )
                cout << n << " is an Armstrong number.";
        else
                cout << n << " is not Armstrong number.";
        return 0;
}