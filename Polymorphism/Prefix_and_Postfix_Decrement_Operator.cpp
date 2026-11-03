// Prefix and Postfix Decrement Operator

#include<iostream>
using namespace std;

class Counter{
int val;
public:
    Counter(int v=0): val(v) {}

    Counter& operator++(){    // PREFIX --c
    val--;
    return *this;
    }

Counter operator++(int){      // POSTFIX c--
Counter temp=*this;
val--;
return temp;        // returns the old value
}

int get(){return val;}

};

int main()
{
Counter c;
c++;
cout<<"The returned value is: "<<c.get()<<endl;
++c;
cout<<"The returned value is: "<<c.get();
    return 0;
}
