#include<iostream>
using namespace std;
class vehicle
{
private:
    string engine="En1234";
public:
    vehicle(string x) : engine(x) {}
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
    car(string x,int w) : vehicle(x),wheels(w) {}
    void display1()
    {
        cout<<"Car has how many wheels : "<<wheels<<endl;

    }
};
class sports_car : public car
{
private:
    int Horse_Power=500;
public:
    sports_car(string x, int w, int HP) : car(x,w), Horse_Power(HP) {}
    void display2()
    {
        cout<<"Sports_car has a Horse_Power of : "<<Horse_Power<<endl;
    }
};
int main()
{

    car c("En1234",4);
    c.display();
    c.display1();

    sports_car s("En1234",4,500);
    s.display();
    s.display1();
    s.display2();
    return 0;
}
