// Time subject as arguments

#include<iostream>
#include<string>
using namespace std;

class time
{
    private:
  int h,m;
  float s;
    public:
       void setTime()
       {
           cin>>h>>m>>s;
       }
       void printTime()
       {
           cout<<h<<":"<<m<<":"<<s;
       }
       void addTime(time x,time y)
       {
           h=x.h+y.h;
           m=x.m+y.m;
           s=x.s+y.s;
       }

};
 int main()
 {

  time t1,t2,t3;
  cout<<"first time;";
  t1.setTime();
  cout<<"Enter a second time:";
  t2.setTime();
  t3.addTime( t1,t2);
  cout<<"first time";
  t1.printTime();
  cout<<"second time";
  t2.printTime();
  cout<<"addded time";
  t3.printTime();



     return 0;
 }
