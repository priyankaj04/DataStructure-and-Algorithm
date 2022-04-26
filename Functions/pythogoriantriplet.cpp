#include<iostream>
#include<math.h>
using namespace std;

bool isPythogorianTriplet(int x, int y, int z) 
{
        int a, b, c;
        a = max(x, max(y, z));
        if(a == x)
        {
                b = y;
                c = z;
        }
        else if(a == y)
        {
                b = x;
                c = z;
        }
        else
        {
                b = x;
                c = y;
        }
        if(a*a == b*b + c*c )
                return true;
        return false;
}

int main()
{
        int a, b, c;
        cout<<"Enter 3 numbers = ";
        cin >> a >> b >> c;

        if(isPythogorianTriplet(a, b, c))
        {
                cout << "Pythogorian Triplet";
        }
        else
                cout << "not Pythogorian Triplet";
        return 0;
}