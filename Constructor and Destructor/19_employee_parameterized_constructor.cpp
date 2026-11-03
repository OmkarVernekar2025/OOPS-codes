#include<iostream>
using namespace std;
class employee
{
private:
    int ID,salary;
    string name,Dept;
public:
    employee (int w,int x,string y,string z)
    {
        ID=w;
        salary=x;
        name=y;
        Dept=z;
        cout<<"Constructor called"<<endl;
    }
    void read(int,int,string,string);
    void display();
};
void employee :: read(int ID,int salary,string name,string Dept)
{
    this->ID=ID;
    this->salary=salary;
    this->name=name;
    this->Dept=Dept;
}
void employee :: display()
{
    cout<<ID<<endl;
    cout<<salary<<endl;
    cout<<name<<endl;
    cout<<Dept<<endl;
}
int main()
{

    employee e1(2,50000,"ru","ECE");
    e1.read(3,60000,"ju","cCE");
    e1.display();
    return 0;
}
