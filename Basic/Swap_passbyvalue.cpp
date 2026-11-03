// Swap passbyvalue

#include<iostream>
using namespace std;
void swap(int a,int b)
{int x=a;
a=b;
b=x;
 cout<<"a and b:"<<a<<endl<<b<<endl;
}
int main()
{
 cout<<"enter a and b:"<<endl;
 int a,b;
 cin>>a;
 cin>>b;
 swap(a,b);
}
