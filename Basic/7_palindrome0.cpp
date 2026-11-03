// 7(palindrome0

#include <iostream>
using namespace std;

int main()
{
     string s;
    cout << "enter the string";
    cin >> s;
    int f=0;
    int n= s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
        {
             f=1;

        }
    }
    if (f==0)
        cout<<"palindrome";
        else
        cout<<"not palindrome";
}
