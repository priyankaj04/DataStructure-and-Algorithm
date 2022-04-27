#include <iostream>
using namespace std;

int main()
{
        int cons = 1;
        int ans = 0;
        int n;
        int rem, a;

        cout<<"Enter the binary number = ";
        cin>>n;
        while(n > 0)
        {
                rem = n % 10;
                a = rem * cons;
                ans += a;
                cons *= 2;
                n = n / 10;
        }
        cout << "Decimal number is = " << ans;
        return 0;
}
