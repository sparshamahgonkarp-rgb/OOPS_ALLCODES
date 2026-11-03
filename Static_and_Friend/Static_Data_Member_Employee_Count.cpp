// Static Data Member Employee Count

#include<iostream>
#include<string>
using namespace std;
class emp
{
private:
     static int id;
    string dep;
public:

    e1()
    {
        cout<<"enter department"<<endl;
        cin>>dep;
        id++;
    }
    void di()
    {
        cout<<"id "<<id<<"  department  "<<dep<<endl;
    }
};
int emp::id=50;

int main()
{
    emp e,f,g,h,i;
    e.e1();
    cout<<"obj e"<<endl;
    e.di();
    f.e1();
    cout<<"obj f"<<endl;
    f.di();
    g.e1();
    cout<<"obj g"<<endl;
    g.di();
    h.e1();
    cout<<"obj h"<<endl;
    h.di();
    i.e1();
    cout<<"obj i"<<endl;
    i.di();
    return 0;
}


/*#include<iostream>
#include<string>
using namespace std;

class emp
{
private:
    static int count;
    int id;
    string dep;

public:
    emp()
    {
        cout << "enter department" << endl;
        cin >> dep;

        count++;
        id = count;
    }

    void di()
    {
        cout << "id " << id << "  department " << dep << endl;
    }
};

int emp::count = 0;



int main()
{
    emp e, f;
    cout << "obj e" << endl;
    e.di();

    cout << "obj f" << endl;
    f.di();

    return 0;
}*/
