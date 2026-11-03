// Exceptionmultiplication

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a, b, product;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before try\n";

    try
    {
        cout << "Inside try\n";

        if(a == 0 || b == 0)
        {
            throw 0;
        }

        product = a * b;

        cout << "Product = " << product << endl;
    }
    catch(int x)
    {
        cout << "Exception caught: Multiplication by zero is not allowed\n";
    }

    cout << "After catch - will be executed\n";

    system("pause");
    return 0;
}
