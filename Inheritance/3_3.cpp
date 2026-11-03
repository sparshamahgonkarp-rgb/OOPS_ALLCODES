// 3

#include <iostream>
using namespace std;

class Outer
{
public:

    class Inner
    {
    public:
        void display()
        {
            cout << "Inside Inner class" << endl;
        }
    };
     void display1()
        {
            cout << "Inside  class" << endl;
        }
};

int main()
{
    Outer::Inner obj;

    obj.display();

    return 0;
}
