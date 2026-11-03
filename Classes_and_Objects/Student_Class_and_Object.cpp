// Student Class and Object

#include<iostream>
using name space std;
class test
{

private:
    int mark;
    float spi;
public:
    void setdata
    {
        mark=270;
        spi= 6.6;
    }
    void displaydata
    {

        cout<<"mark="<<mark<<endl;
        cout<<"spi="<<spi;
    }
};
int main()
{
    test o1;
    o1.setdata();
    o1.displaydata;
    return 0;
}
