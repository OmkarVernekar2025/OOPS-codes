#include<iostream>
using namespace std;

class Person
{
public:
    void display1()
    {
        cout<<"Person Class"<<endl;
    }
};

class Student:public Person
{
public:
    void display2()
    {
        cout<<"Student Class"<<endl;
    }
};

class IT_Student:public Student
{
public:
    void display3()
    {
        cout<<"IT_Student Class"<<endl;
    }
};

int main()
{
Person p;
Student s;
IT_Student i;
p.display1();
cout<<endl;
s.display2();
s.display1();
cout<<endl;
i.display3();
i.display2();
i.display1();

return 0;
}
