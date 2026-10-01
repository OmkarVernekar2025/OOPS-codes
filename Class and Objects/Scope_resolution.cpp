#include<iostream>
using namespace std;
class car
{
private:
    float mileage;
public:
    float updatemileage();
    void setdata()
    {
        mileage =18.5;
    }
    void displaydata()
    {
        cout<<"mileage: "<<mileage<<endl;
        cout<<"updatemileage: "<<updatemileage();
    }
};
float car :: updatemileage()
{
    return mileage+2;

}
int main()
{
    car c1;
    c1.setdata();
    c1.updatemileage();
    c1.displaydata();
    return 0;
}
