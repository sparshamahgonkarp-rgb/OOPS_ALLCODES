// Constructor

#include<iostream>
using namespace std;

class rec
{
    int w, h;
    int area;

public:
    void set_v(int w, int h)
  {
        area = w * h;
    }

    void display()
    {
        cout << "Area of rectangle: " << area;
    }

};
int main()
{
    int w, h;

    cin >> w >> h;

    rec rc;

    rc.set_v(w, h);
    rc.display();

    return 0;
}
