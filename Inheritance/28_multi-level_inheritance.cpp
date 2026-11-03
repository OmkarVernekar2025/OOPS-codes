#include<iostream>
using namespace std;
class Liquid
{
private:
    int litre=100;
public:
    void display()
    {
        cout<<"Quantity of Liquid : "<<litre<<endl;
    }
};
class Fuel
{
private:
    int visc=50;
public:
    void display1()
    {
        cout<<"Fuel's Viscosity is : "<<visc<<endl;
    }
};
class Petrol : public Liquid, public Fuel
{
private:
    int Density=85;
public:
    void display2()
    {
        cout<<"My Petrol's Density is : "<<Density<<endl;
    }
};
int main()
{
    Petrol p;
    p.display();
    p.display1();
    p.display2();
    return 0;
}
