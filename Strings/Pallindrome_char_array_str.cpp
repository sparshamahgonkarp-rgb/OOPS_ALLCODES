// Pallindrome char array str

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int count=0;
char str[5];
char str2[5];
cout<<"enter a string"<<endl;
cin>>str;
for(int  i=0;str[i]!='\0';i++)
{
count++;
}
cout<<"length of string is:"<<count<<endl;
int i,j=0;
for(i=count;i>0;i--)
{
    str2[j]=str[i];
    j++;
}
str2[j]='\0';
if(strcmp(str,str2)==0)
{
    cout<<"pallindrome"<<endl;

}
else{
    cout<<"not a pallindrome"<<endl;
}
}
