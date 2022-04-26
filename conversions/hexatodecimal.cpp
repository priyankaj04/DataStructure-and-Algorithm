#include<iostream>
#include<cstring>
using namespace std;

int main()
{
        int ans = 0;
        int cons = 1;
        string n;
        cout << "Enter HexaDecimal Number = ";
        cin >> n;

        for (int i = n.size() - 1; i >= 0; i--)
        {
                if(n[i] >= '0' && n[i] <= '9')
                {
                        ans += cons * (n[i] - '0');
                }
                else if(n[i] >= 'A' && n[i] <= 'F')
                {
                        ans += cons * (n[i] - 'A' + 10);
                }
                cons *= 16;
        }

        cout << "Decimal Number = " << ans;
        return 0;
}