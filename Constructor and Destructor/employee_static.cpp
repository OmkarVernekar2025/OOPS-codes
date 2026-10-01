#include<iostream>
using namespace std;
class employee
{
private:
    static int empID;
    string name;
    string dept;
public:
    employee()
    {
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter Department name:";
        cin>>dept;
    }
    void getempID()
    {
        cout<<"Employee ID : "<<++empID<<endl;
    }
    void print()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Department :"<<dept<<endl;
    }
    ~employee()
    {
        cout<<"Destructor is called"<<endl;
    }
};
int employee::empID=1000;
int main()
{
    employee e1,e2,e3,e4,e5;
    e1.getempID();
    e1.print();
    e2.getempID();
    e2.print();
    e3.getempID();
    e3.print();
    e4.getempID();
    e4.print();
    e5.getempID();
    e5.print();
}
