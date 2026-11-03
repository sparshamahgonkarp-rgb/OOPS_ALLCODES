// Virtual Function Shape Circle

#include<iostream>
using namespace std;

class Shape{
public:
    virtual void draw(){               //now virtual
    cout<<"Generic shape";
    }
};

class Circle: public Shape{
public:
    void draw()
    {
    cout<<"Circle";
    }
    };

    class Square: public Shape{
public:
    void draw()
    {
    cout<<"Square";
    }
    };

    class Triangle: public Shape{
public:
    void draw()
    {
    cout<<"Triangle";
    }
    };

int main()
{
    Shape *s1= new Circle();
    Shape *s2= new Square();
    Shape *s3= new Triangle();
    s1->draw();            //Output: "Circle" <-- Late binding!
    s2->draw();
    s3->draw();
}
