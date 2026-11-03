#include<iostream>
using namespace std;
class Animal
{
private:
    int legs = 4;
public:
    Animal(int x) : legs(x) {}
    void display1()
    {
       cout<<"Legs="<<legs<<endl;
    }
};
class Dog : public Animal
{
private:
    bool tail=true;
public:
    Dog(int x, bool t) : Animal(x),tail(t) {}
      void display2()
    {
        cout<<"\nTail="<<tail<<endl;

    }
};
int main()
{
    Dog d(4,true);
    d.display1();
    d.display2();
    return 0;
}
