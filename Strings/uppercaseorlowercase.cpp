//program to convert given string to uppercase and lowercase.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() 
{
        string str = "acsddoflkjlkjdoiuro";

        //convert into upper case
        transform(str.begin(), str.end(), str.begin(), ::toupper);//using build-in function
        cout << str << endl;

        for(int i = 0; i < str.size(); i++)
        {
                if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= 32;
        }
        cout << str<<endl;

        string str1 = "AOEHRNNLUDREOIR";

        //covert to lower case
        transform(str1.begin(), str1.end(), str1.begin(), ::tolower); //using build-in function
        cout << str1 << endl;

        for(int i = 0; i < str1.size(); i++)
        {
                if(str1[i] >= 'A' && str1[i] <= 'Z')
                        str1[i] += 32;
        }
        cout << str1<<endl;
        return 0;
}
