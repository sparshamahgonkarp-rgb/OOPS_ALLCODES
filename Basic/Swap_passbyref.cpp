// Swap passbyref

#include<iostream>
using namespace std;
int swap(int &x,int &y)
{
 return(y,x);
}
int main()
{
 cout<<"enter a and b:"<<endl;
 int a,b;
 cin>>a;
 cin>>b;
 int res=swap(a,b);
 cout<<"a and b:"<<a<<endl<<b<<endl;
}
