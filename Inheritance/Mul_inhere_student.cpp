// Mul inhere student

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_no;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

class Test
{
protected:
    float marks[5];

public:
    void getMarks()
    {
        cout << "Enter marks in 5 subjects:" << endl;

        for(int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "Marks: ";

        for(int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << endl;
    }
};

class Result : public Student, public Test
{
private:
    float total;
    float percentage;

public:
    void calculate()
    {
        total = 0;

        for(int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = total / 5;
    }

    void displayResult()
    {
        displayStudent();
        displayMarks();

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result r;
    r.getStudent();
    r.getMarks();
    r.calculate();
    cout << "\n----- Student Result -----" << endl;
    r.displayResult();

    return 0;
}
