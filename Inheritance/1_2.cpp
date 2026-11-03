// 1

#include <iostream>
using namespace std;

class A
{
public:
    int i;
};

class B : public A
{
public:
    int j;
};

class C : public A
{
public:
    int k;
};

class D : public B, public C
{
public:
    int sum;

    void display()
    {
        sum = B::i + j + k;
        cout << "The Sum is: " << sum << endl;
    }
};

int main()
{
    D obj1;

    obj1.B::i = 10;
    obj1.j = 20;
    obj1.k = 30;

    obj1.display();

    return 0;
}
