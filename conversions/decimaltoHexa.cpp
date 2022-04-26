#include<iostream>
#include<cstring>
using namespace std;

int main()
{
        int cons = 1;
        string ans = "";
        int n;
        int rem;

        cout<<"Enter Decimal number = ";
        cin>> n;

        while(cons <= n)
        {
                cons *= 16;
        }
        cons /= 16;

        while ( cons > 0)
        {
                rem = n / cons;
                n -= rem * cons;
                cons /= 16;
                
                if(rem <= 9)
                {
                        ans = ans + to_string(rem);
                }
                else
                {
                        char c = 'A' + rem - 10;
                        ans.push_back(c);
                }
        }
        cout << "HexaDecimal Number = " << ans;
        return 0;
}