// Static data members

#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    string dept;

    static int count;

public:

    void setData()
    {
        count++;
        id = count;

        cout << "Enter Name and Department: ";
        cin >> name >> dept;
    }

    void display()
    {
        cout << id << "\t"
             << name << "\t"
             << dept << endl;
    }
};

int Employee::count = 0;

int main()
{
    Employee e[5];

    for(int i = 0; i < 5; i++)
    {
        e[i].setData();
    }

    cout << "\nID\tName\tDepartment\n";

    for(int i = 0; i < 5; i++)
    {
        e[i].display();
    }

    return 0;
}
