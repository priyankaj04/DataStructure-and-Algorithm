#include <iostream>
#include <cstring>
using namespace std;

int palindrome(string s,int start,int end)
{
      if ( start >= end)
      {
            return 1;
      }
      else if ( s[start] != s[end])
      {
            return 0;
      }
      else
      {
            return palindrome(s, start + 1, end - 1);
      }
}

int main()
{
      string arr;
      cout << "Enter a string = ";
      cin >> arr;
      int l = arr.size() - 1;
      if ( palindrome(arr, 0, l) )
      {
            cout << arr << " is palindrome.";
      }
      else
      {
            cout << arr << " is not palindrome.";
      }
      return 0;
}