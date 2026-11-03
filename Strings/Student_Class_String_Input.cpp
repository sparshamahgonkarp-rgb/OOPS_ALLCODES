// Student Class String Input

#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int age;
    public:
    void SetData()
    {
       /* name = "Ruturaj";
        age = 21;*/
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
    void DisplayData()
    {
        cout<< "name= "<<name<<endl;
        cout<< "age= "<<age;
    }
};
int main()
{
    student s1;
    s1.SetData();
    s1.DisplayData();
    return 0;
}
