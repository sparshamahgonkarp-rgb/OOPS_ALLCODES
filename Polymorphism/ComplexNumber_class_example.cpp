// ComplexNumber class example

#include <iostream>
using namespace std;

class ComplexNumber
{
    float real, imag;

public:
    ComplexNumber(float r = 0, float i = 0)
        : real(r), imag(i) {}

    ComplexNumber operator+(const ComplexNumber &obj)
    {
        return ComplexNumber(real + obj.real,
                             imag + obj.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    ComplexNumber num1(3, 2), num2(5, 4);

    ComplexNumber result = num1 + num2;

    result.display();

    return 0;
}
