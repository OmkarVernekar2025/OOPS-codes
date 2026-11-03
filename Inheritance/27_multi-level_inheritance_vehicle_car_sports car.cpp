#include<iostream>
using namespace std;
class vehicle
{
private:
    string engine="En1234";
public:
    void display()
    {
        cout<<"\nVehicle has : "<<engine<<endl;
    }
};
class car : public vehicle
{
private:
    int wheels=4;
public:
    void display1()
    {
        cout<<"Car has how many wheels : "<<wheels<<endl;
      //  cout<<"engine value is:"<<engine<<endl;
    }
};
class sports_car : public car
{
private:
    int Horse_Power=500;
public:
    void display2()
    {
        cout<<"Sports_car has a Horse_Power of : "<<Horse_Power;
    }
};
int main()
{
    vehicle v;
    car c;
    sports_car s;
    v.display();
    c.display1();
    s.display2();
    c.display();
    s.display1();
    return 0;
}
