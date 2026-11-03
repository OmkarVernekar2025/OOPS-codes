#include<iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string name;
public:
    student(int r,string n) : roll_no(r),name(n) {}
    void display()
    {
      cout<<"Roll_number is : "<<roll_no<<endl;
      cout<<"Name is : "<<name<<endl;
    }

};
class test
{
private:
    int marks[5];
public:
    test(int m[5])
    {
        for(int i=0;i<5;i++)
        {
            marks[i]=m[i];
        }
    }
    void display1()
    {
       cout<<"5 subjects' marks are : " ;
       for(int i=0;i<5;i++)
       {
           cout<<marks[i]<<" ";
       }
       cout<<endl;
    }
    int sum()
    {
        return marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    }
};
class result : public student, public test
{
private:
    int totalmarks;
    float percentage;
public:
    result(int r,string n,int m[5]) : student(r,n),test(m)
    {
        totalmarks=sum();
        percentage=(totalmarks/50.00)*100;
    }
    void display2()
    {
        cout<<"Total Marks : "<<totalmarks<<endl;
        cout<<"Percentage : "<<percentage<<endl;
    }

};
int main()
{
  int marks[5]={5,5,5,5,5};
  result r (309,"Ruturaj",marks);
  r.display();
  r.display1();
  r.display2();
  return 0;
}
