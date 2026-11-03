// 4

#include <iostream>
using namespace std;
class animal
{
    int l=4;
public:
    void dis(){
    cout<<"l= "<<l<<endl;
    }
};

class dog : public animal
{
   bool tail=true;
public:
    void disp(){
    cout<<"tail= "<<tail <<endl;
    }
};

int main()
{
    animal a;
    dog d;
    d.dis();
    d.disp();//--------------reused
    return 0;
}
