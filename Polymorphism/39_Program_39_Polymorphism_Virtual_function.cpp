#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout<<"Base\n";
    }
};
class Derv1 : public Base
{
public:
    void show()
    {
        cout<<"Derv1\n";
    }
};
class Derv2 : public Base
{
public:
    void show()
    {
        cout<<"Derv2\n";
    }
};
int main()
{
    Base b;
    Derv1 dv1;
    Derv2 dv2;
    Base *ptr, *ptr1, *ptr2;
    ptr = &b;
    ptr1 = &dv1;
    ptr2 = &dv2;
    //ptr= &dv2;
    //b.show();
    //dv1.show();
    //dv2.show();
    ptr->show();
    ptr1->show();
    ptr2->show();
    return 0;

}
