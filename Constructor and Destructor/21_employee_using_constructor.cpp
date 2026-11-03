#include<iostream>
using namespace std;
class employee
{
private:
    int employee_ID;
    string Dept;
public:
    employee()
    {
        cin>>employee_ID;
        cin>>Dept;
    }
    void print()
    {
        cout<<"employee ID: "<<employee_ID<<endl;
        cout<<"Dept: "<<Dept<<endl;
    }
};
int main()
{
    employee e1,e2;
    e1.print();
    e2.print();
}
