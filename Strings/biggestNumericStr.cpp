//program to form the biggest number from the numberic string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
        string str = "456287923";

        sort(str.begin(), str.end(), greater<int>());
        cout << str;
        return 0;
}