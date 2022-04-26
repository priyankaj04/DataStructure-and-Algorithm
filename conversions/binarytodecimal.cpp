#include <iostream>
using namespace std;

int main()
{
        int cons = 1;
        int z = 0;
        int n;
        int rem, a;

        cout<<"Enter the binary number = ";
        cin>>n;
        while(n > 0)
        {
                rem = n % 10;
                a = rem * cons;
                z += a;
                cons *= 2;
                n = n / 10;
        }
        cout << "Decimal number is = " << z;
        return 0;
}