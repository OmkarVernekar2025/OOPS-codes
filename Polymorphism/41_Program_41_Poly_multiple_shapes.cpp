#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout<<"Generic shape";
    }
};
class Circle : public Shape
{
public:
    void draw() override
    {
        cout<<"Circle"<<endl;
    }
};
class Triangle : public Shape
{
public:
    void draw() override
    {
        cout<<"Triangle"<<endl;
    }
};
class Square : public Shape
{
public:
    void draw() override
    {
        cout<<"Square"<<endl;
    }
};
int main()
{
    //Shape *s = new Circle();
   /* Shape *s,*s1,*s2;
    Circle c;
    Triangle t;
    Square sq;
    s=&c;
    s1=&t;
    s2=&sq;
    s->draw();
    s1->draw();
    s2->draw();*/
    Shape *shapes[3]={new Circle(),new Triangle(), new Square()};
    for(int i=0;i<3;i++)
        shapes[i]->draw();//array of pointer objects
    return 0;
}
