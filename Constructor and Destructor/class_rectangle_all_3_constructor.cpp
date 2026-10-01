#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:

    Rectangle()
    {
        cout<<"Enter length and breadth: ";
        cin>>length>>breadth;
    }
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }

    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }

    void area()
    {
        cout<<"Area = "<<length*breadth<<endl;
    }
     ~Rectangle()
    {
        cout<<"The program is ended and destructor is called";

    }
};
int main()
{
    Rectangle r1;
    cout<<"Using Default Constructor:"<<endl;
    r1.area();

    Rectangle r2(10,5);
    cout<<"Using Parameterized Constructor:"<<endl;
    r2.area();

    Rectangle r3(r2);
    cout<<"Using Copy Constructor:"<<endl;
    r3.area();
    return 0;
}
