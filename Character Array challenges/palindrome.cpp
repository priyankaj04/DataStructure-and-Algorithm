//palindrome or not
#include<iostream>
using namespace std;

int main()
{
        int n;
        cin >> n;
        char arr[n+1];
        cin>>arr;

        bool check = false;
        for(int i = 0; i < n; i++)
        {
                if(arr[i] != arr[n-i-1])
                {
                        check = true;
                        break;
                }
        }

        if(check)
        {
                cout << "It is not palindrome.";
        }
        else
                cout << "It is palindrome.";
        return 0;
}
