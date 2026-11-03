// Excep divide

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a, b, result;

    cout << "Enter numerator and denominator: ";
    cin >> a >> b;

    cout << "Before try\n";

    try
    {
        cout << "Inside try\n";

        if(b==0)
        {
            result = a/b;
        }

      throw b;

        cout << "Result = " << result << endl;
    }
    catch(int x)
    {
        cout <<"Exception caught: Division by zero is not allowed\n";
    }

    cout <<"After catch-will be executed\n";

    system("pause");
    return 0;
}
