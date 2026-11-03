// 6(time

#include<iostream>
#include<string>
using namespace std;

class time
{
    private:
  int h,m;
  float s;
    public:
        void setTime(int h, int m, float s)
        {
            cin>>h>>m>>s;
            cout<<"hour:minute:seconds="<<h<<":"<<m<<":"<<s;
        }

};
 int main()
 {
      int h,m;
  float s;
  time t;
  t.setTime(h,m,s);



     return 0;
 }
