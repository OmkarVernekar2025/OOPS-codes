#include<iostream>
using namespace std;
class Distance
{
private:
    int feet,inch;

public:

    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
    void display()
    {
        cout<<"Feet = "<<feet<<endl;
        cout<<"Inch = "<<inch<<endl;
    }
};

int main()
{
    Distance d1(5,8);
    d1.display();
    return 0;
}
