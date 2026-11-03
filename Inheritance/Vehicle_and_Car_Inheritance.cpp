// Vehicle and Car Inheritance

#include <iostream>
#include <string>
using namespace std;
class vehicle
{
protected:
    int milage=234;
    void d(){
    cout<<"vehicle class"<<endl;
    }
};

class car : public vehicle
{
public:
    int price=8907;
            int ce=(milage+1);
    void di(){
    cout<<"car inherited" <<endl;
    }
};
class sp_car : public car
{
public:
    string color="black";

    void dis(){
         d();
    cout<<"spoorts_car inherited" <<endl;
    }
};

int main()
{
    vehicle a;
    car b;
    sp_car c;
   // c.d();
    c.di();
    c.dis();
    cout<<"mileage = " <<c.ce<<endl;
    cout<<"price = " <<c.price<<endl;
    cout<<"color = " <<c.color<<endl;
    return 0;
}
