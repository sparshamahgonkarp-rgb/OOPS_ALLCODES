// 2.cpp(defaualt constructor

#include<iostream>
#include<string>
using namespace std;
class data
{
private:
    string id,depart;
public:
    data()
    {

        cout<<"Enter the ID and Department"<<endl;
        cin>>id>>depart;
    }
    display()
    {
        cout<<"person:"<<endl<<"ID:"<<id<<endl<<"Department:"<<depart<<endl;
    }
};

int main()
{
    data d1,d2;
    d1.display();
    d2.display();
    return 0;
}
