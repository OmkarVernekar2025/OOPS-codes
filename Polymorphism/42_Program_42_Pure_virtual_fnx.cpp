/* Write a c++ code with classes Abstract Class vehicle and derived class car and bike to display features of vehicle
such as number_of_wheels, mileage, fuel_capacity */

#include<iostream>
using namespace std;
class vehicle
{
public:
    int number_of_wheels=2;
    float mileage=30;
    float fuel_capacity=10;
    virtual float display()=0 ;
};
class car : public vehicle
{
public:
    float display()
    {
       // return number_of_wheels*2;
        return mileage;
        return fuel_capacity*2;
    }
};
class bike : public vehicle
{
public:
    float display()
    {
        return number_of_wheels;
        return mileage;
        return fuel_capacity;
    }
};
int main()
{
    float x,y;
    vehicle *v,*v1;
    car c;
    bike b;
    v=&c;
    v1=&b;
    x= v->display();
    cout<<x<<endl;
    y= v1->display();
    cout<<y;
    return 0;

}
