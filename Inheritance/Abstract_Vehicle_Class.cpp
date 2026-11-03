// Abstract Vehicle Class

#include<iostream>
using namespace std;

class Vehicle{
public:
    float mileage=1.1;
    virtual float disp_mileage()=0;

};

class Car: public Vehicle{
public: float disp_mileage()
{
    return mileage*2;
}
};

class Bike: public Vehicle{
public: float disp_mileage()
{
    return mileage*4;
}
};

int main()
{
    float x;
    Vehicle *v1, *v2;
    Car c;
    Bike b;
    v1=&c;
    v2=&b;
    x=v1->disp_mileage();
    cout <<x;
    return 0;
}
