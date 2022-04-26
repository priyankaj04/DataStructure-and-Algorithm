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
                cons *= 8;
        }
        cons /= 8;

        while ( cons > 0)
        {
                rem = n / cons;
                n -= rem * cons;
                cons /= 8;
                ans = ans * 10 + rem;
        }
        cout << "Octal Number = " << ans;
        return 0;
}