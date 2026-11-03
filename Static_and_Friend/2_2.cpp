// 2

#include <iostream>
using namespace std;

class Employee
{
    static int count;

public:

    Employee()
    {
        count++;
    }

    static void displayCount()
    {
        cout << "Number of Employees: " << count << endl;
    }
};

// Definition of static data member
int Employee::count = 0;

int main()
{
    Employee::displayCount();

    Employee e1;
    Employee::displayCount();

    Employee e2;
    Employee::displayCount();

    Employee e3;
    Employee::displayCount();

    return 0;
}
