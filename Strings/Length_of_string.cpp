// Length of string

#include<iostream>
using namespace std;
int main()
{
int count=0;
char str[5];
cout<<"enter a string"<<endl;
cin>>str;
for(int  i=0;str[i]!='\0';i++)
{
count++;
}
cout<<"length of string is:"<<count<<endl;
}
