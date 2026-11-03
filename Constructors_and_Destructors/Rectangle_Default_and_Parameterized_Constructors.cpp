// Rectangle Default and Parameterized Constructors

#include<iostream>
using namespace std;

class Rectangle
{
    int length,width;
public:
    Rectangle()
    {
        cout<<"Enter the length and width respectively"<<endl;
        cin>>length>>width;
    }

    Rectangle(int x,int y)
    {
        length=x;
        width=y;
    }

    Rectangle(Rectangle &a)//-------------copy constructor
    {
        length=a.length;
        width=a.width;
    }

    void display()
    {
      cout<<"LENGTH: "<<length<<" and   WIDTH:"<<width<<endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(2,5);
    Rectangle r3(r1);
    r1.display();
    r2.display();
    r3.display();
    return 0;
}
