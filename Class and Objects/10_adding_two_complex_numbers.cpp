#include<iostream>
using namespace std;
class complex
{
private:
    int real,imag;
public:
    void readData()
    {
        cout<<"Enter real and imaginary number:";
        cin>>real>> imag;
    }
    void addComplexNumbers(complex comp1,complex comp2)
    {
        real=comp1.real+comp2.real;
        imag=comp1.imag+comp2.imag;
    }
    void displaySum()
    {
        cout<<"Sum="<<real<<"+"<<imag<<"i";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.readData();
    c2.readData();
    c3.addComplexNumbers(c1,c2);
    c3.displaySum();
    return 0;
}
