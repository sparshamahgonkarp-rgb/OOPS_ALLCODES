// Passing obj arg

#include<iostream>
using namespace std;
class Time
{
private:
    int hour, minute, second;

public:
    void getTime()
    {
        cout<<"Enter hour : ";
        cin>>hour;

        cout<<"Enter minute : ";
        cin>>minute;

        cout<<"Enter second : ";
        cin>>second;
    }

    void printTime()
    {
        cout<<"hour : "<< hour<< endl;
        cout<<"minute : "<< minute<< endl;
        cout<<"second : "<< second<< endl;
    }

    void addTime(Time x, Time y)
    {
        hour=x.hour + y.hour;
        minute=x.minute + y.minute;
        second=x.second + y.second;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.getTime();
    t2.getTime();

    t1.printTime();
    t2.printTime();

    t3.addTime(t1, t2);

    cout<<"Added Time:"<< endl;
    t3.printTime();

    return 0;
}
