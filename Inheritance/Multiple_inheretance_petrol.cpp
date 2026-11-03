// Multiple inheretance petrol

#include <iostream>
using namespace std;

class Liquid
{
protected:
    float volume;

public:
    void getLiquidData()
    {
        cout << "Enter volume of petrol: ";
        cin >> volume;
    }

    void displayLiquidData()
    {
        cout << "Volume: " << volume << " litres" << endl;
    }
};

class Fuel
{
protected:
    float price;

public:
    void getFuelData()
    {
        cout << "Enter price per litre: ";
        cin >> price;
    }

    void displayFuelData()
    {
        cout << "Price per litre: Rs. " << price << endl;
    }
};

class Petrol : public Liquid, public Fuel
{
public:
    void display()
    {
        displayLiquidData();
        displayFuelData();

        cout << "Total cost: Rs. " << volume * price << endl;
    }
};

int main()
{
    Petrol p;

    p.getLiquidData();
    p.getFuelData();

    cout << "\n--- Petrol Details ---" << endl;
    p.display();

    return 0;
}
