// 1

#include<iostream>

#include<string>
using namespace std;
class emp
{
private:
    string id,dep;
public:
    emp()
    {
        cout<<"enter id and department"<<endl;
        cin>>id>>dep;
    }

    void di()
    {
        cout<<"id "<<id<<"  department  "<<dep<<endl;
    }
    ~emp()
    {
        cout<<"end of program,destructor";
    }
};
emp e,f;
int main()
{
    e.di();
    f.di();
    return 0;
}
