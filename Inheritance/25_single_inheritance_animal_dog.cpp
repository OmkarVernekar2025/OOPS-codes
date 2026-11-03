#include<iostream>
using namespace std;
class Animal
{
    //int legs=4;
public:
    int legs=4;
    void display1()
    {
       cout<<"Legs="<<legs<<endl;
    }
};
class Dog : private  Animal
{
    bool tail=true;
public:
    void display2()
    {
        cout<<"\nTail="<<tail<<endl;
     //   cout<<"Legs="<<legs<<endl;
    }
};
int main()
{
    Animal a1;
    Dog d1;
   // d1.display1();
    d1.display2();
    return 0;
}
