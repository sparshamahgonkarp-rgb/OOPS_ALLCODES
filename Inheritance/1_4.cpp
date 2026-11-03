// 1

#include<iostream>
using namespace std;

class Liquid
{
    int volume;
public:
    void display1()
    {
        cout<<"Liquid"<<endl;
    }
};

class Fuel
{
    string type;
public:
    void display2()
    {
        cout<<"Fuel"<<endl;
    }
};

class Petrol:public Liquid,public Fuel
{
    string fuel_type;
public:
    void display3()
    {
        cout<<"Petrol"<<endl;
    }
};
int main()
{
    Liquid l1;
    Fuel f1;
    Petrol p1;
    l1.display1();
    f1.display2();
    p1.display3();
    p1.display2();
    p1.display1();

    return 0;
}
