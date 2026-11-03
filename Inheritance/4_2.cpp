// 4

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};

class Derv1 : public Base
{
public:
    void show() override
    {
        cout << "Derived class 1" << endl;
    }
};

class Derv2 : public Base
{
public:
    void show() override
    {
        cout << "Derived class 2" << endl;
    }
};

int main()
{
    Base b;
    Derv1 d1;
    Derv2 d2;

    Base *ptr;

    ptr = &b;
    ptr->show();

    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr->show();

    return 0;
}
