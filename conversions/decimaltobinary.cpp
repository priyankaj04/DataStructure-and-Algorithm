#include<iostream>
using namespace std;

int main()
{
        long cons = 1, ans = 0;
        int n;
        int rem;

        cout<<"Enter Decimal number = ";
        cin>> n;

        while(cons <= n)
        {
                cons *= 2;
        }
        cons /= 2;

        while ( cons > 0)
        {
                rem = n / cons;
                n -= rem * cons;
                cons /= 2;
                ans = ans * 10 + rem;
        }
        cout << "Binary Number = " << ans;
        return 0;
}