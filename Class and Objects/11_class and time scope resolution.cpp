#include<iostream>
using namespace std;
class Time
{
private:
    int hour,minute,second;
public:
    void setTime(int,int,int);
    void print();
};
void Time :: setTime(int hour,int minute,int second)
{
    this->hour=hour;
    this->minute=minute;
    this->second=second;
}
void Time :: print()
{
    cout<<"hour: "<<hour<<endl;
    cout<<"minute: "<<minute<<endl;
    cout<<"second: "<<second<<endl;
}
int main()
{
    Time t1,t2;
    t1.setTime(1,2,3);
    t1.print();
    t2.setTime(4,5,6);
    t2.print();
    return 0;
}
