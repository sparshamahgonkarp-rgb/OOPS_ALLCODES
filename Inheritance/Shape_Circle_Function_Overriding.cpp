// Shape Circle Function Overriding

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Square" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw() override
    {
        cout << "Triangle" << endl;
    }
};

int main()
{
    Circle c;
    Square s;
    Triangle t;

    Shape *ptr;

    ptr = &c;
    ptr->draw();

    ptr = &s;
    ptr->draw();

    ptr = &t;
    ptr->draw();

    return 0;
}
