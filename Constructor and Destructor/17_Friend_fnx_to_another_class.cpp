#include <iostream>
using namespace std;
class XYZ;
class ABC
{
private:
    int numA;
public:
   void getdataABC(int d)
   {
       numA=d;

   }
    friend int add(ABC, XYZ);
};

class XYZ
{
private:
    int numB;
public:
     void getdataXYZ(int e)
   {
       numB=e;

   }
    friend int add(ABC, XYZ);
};

int add(ABC a, XYZ b)
{
    int sum;
    sum=a.numA+b.numB;
    return sum;
}

int main()
{
    ABC obj1;
    XYZ obj2;
    obj1.getdataABC(10);
    obj2.getdataXYZ(20);
    cout<<"Sum = "<<add(obj1,obj2);
    return 0;
}
