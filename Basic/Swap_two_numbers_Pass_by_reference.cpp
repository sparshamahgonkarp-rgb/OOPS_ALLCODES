// Swap two numbers Pass by reference

#include <iostream>
using namespace std;
void swap (int a, int b);
int main()
{
    int x ,y;
    cout << "Enter a two number:";
    cin >> x>>y;
    cout << "Before swap:"<< endl;
    cout <<"A:"<<x<<endl;
    cout<< "B:"<<y<<endl;
    swap(x,y);
}
void swap (int a, int b)
{
    int t= a;
    a=b;
    b=t;
    cout<<"After swap:"<<endl;
    cout<<"A:"<<a<<endl;
    cout<<"B:"<<b<<endl;
}
