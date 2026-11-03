// Employee Parameterized Constructor

#include<iostream>
#include<string>
using namespace std;
class employe
{
private:
    string id,dep;
    float salary;
public:
    employe(string x,string y,float z)//---------------parameterized constructor
    {
        id=x;
        dep=y;
        salary=z;
    }

    employe()//---------------default constructor
    {
     cout<<"default enter id and department and salary"<<endl;
    cin>>id>>dep>>salary;
    cout<<"defult"<<endl;
    }

    void di()
    {
        cout<<"id "<<id<<"  department  "<<dep<<"  salary  "<<salary<<endl;
    }
};

int main()
{
    employe d;//-----------------default
    string id,dep;
    float sal;
    cout<<"parameterized enter id and department and salary"<<endl;
    cin>>id>>dep>>sal;
    employe e(id ,dep,sal); //----------------------------------------------------------------parameterized
    d.di();
    e.di();
    return 0;
}
