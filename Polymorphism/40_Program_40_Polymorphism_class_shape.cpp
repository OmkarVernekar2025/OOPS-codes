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
        cout<<"Circle";
    }
};
int main()
{
    //Shape *s = new Circle();
    Shape *s;
    Circle c;
    s=&c;
    s->draw();
    return 0;
}
