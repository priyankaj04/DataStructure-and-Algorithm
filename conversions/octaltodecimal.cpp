#include<iostream>
using namespace std;

int main()
{
        int cons = 1;
        int ans = 0;
        int n;
        int rem;

        cout<<"Enter Decimal number = ";
        cin>> n;

        while ( n > 0)
        {
                rem = n % 10;
                ans += rem * cons;
                cons *= 8;
                n = n / 10;
        }
        cout << "OctaDecimal Number = " << ans;
        return 0;
}