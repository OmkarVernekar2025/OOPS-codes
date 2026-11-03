#include<iostream>
using namespace std;
class car
{
private:
    float mileage;
public:
    car()//same name as class name
    {
        cout<<"Enter mileage:";
        cin>>mileage; //similar to member fnx
    }
    void display()
    {
        cout<<"Mileage:"<<mileage<<endl;
    }
};
int main()
{
    car c1,c2;//called automatically on creation of object
    c1.display();
    c2.display();
}
