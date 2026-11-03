// Exception handling

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int x=-1;
cout<<"before try\n";
try{cout<<"inside try\n";
if(x<0)
{throw x;
cout<<"after throw "<<"never executed\n";
}}
catch(int x)
{cout<<"exception caught and x="<<x<<endl;}
cout<<"after catch                                                                                        "<<"will be executed \n";
system("pause");
return 0;
}
