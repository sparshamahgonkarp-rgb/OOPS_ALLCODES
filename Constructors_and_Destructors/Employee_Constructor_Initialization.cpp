// Employee Constructor Initialization

#include<iostream>
#include<string>
using namespace std;
class demo
{
  private:
     string nam,id,dep;
     float sal;
    public:
        demo(string x,string y,string z,float f)
        {
           nam=x;
           id=y;
           dep=z;
           sal=f;
           cout<<"name:"<<nam<<endl<<"ID"<<id<<endl<<"department:"<<dep<<endl<<"salary:"<<sal<<endl;
        }
};
int main()
{
string nam,id,dep;
     float sal;
     cout<<"ENTER NAME" <<endl;
         cin>>nam;
         cout<<endl;
         cout<<"ENTER A ID"<<endl;
         cin>>id;
         cout<<endl;
         cout<<"ENTER A DEP"<<endl;
         cin>>dep;
         cout<<endl;
         cout<<"ENTER A SALARY"<<endl;
         cin>>sal;
         cout<<endl;
         demo d1(nam,id,dep,sal);

         return 0;
}
