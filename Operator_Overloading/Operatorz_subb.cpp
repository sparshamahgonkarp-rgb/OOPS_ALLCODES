// Operatorz subb

#include<iostream>
using namespace std;
class counter
{
    int val;
public:
    counter(int v=0):val(v){}
    counter& operator++(){
    val++;
    return *this;

    }
    counter operator++(int)
    {
        counter temp=*this;
        val++;
        return temp;
    } int get()
    {
        return val;
    }
    };
int main()
{
    counter c;

    cout << "Initial value: " << c.get() << endl;
    c++;
    cout << "Pre-increment: " << c.get() << endl;
    ++c;
    cout << "Post-increment: " << c.get() << endl;

    return 0;
}
