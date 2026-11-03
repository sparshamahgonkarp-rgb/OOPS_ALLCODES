// 7(complex number

#include<iostream>
#include<string>
using namespace std;

class complex
{
    private:
  int num,ima;
    public:
       void setnum()
       {
           cin>>num>>ima;
       }
       void printnum()
       {
           cout<<num<<"+"<<ima<<"i";
       }
       void addnum(complex x,complex y)
       {
           num=x.num+y.num;
           ima=x.ima+y.ima;

       }

};
 int main()
 {

  complex c1,c2,c3;
  cout<<"first complex number;"<<endl;
  c1.setnum();
   cout<<endl;
  cout<<"Enter a second complex number:"<<endl;
  c2.setnum();
  cout<<endl;
  c3.addnum( c1,c2);
   cout<<endl;
  cout<<"first  complex number"<<endl;
  c1.printnum();
   cout<<endl;
  cout<<"second complex number"<<endl;
  c2.printnum();
   cout<<endl;
  cout<<"addded complex number"<<endl;
  c3.printnum();



     return 0;
 }
