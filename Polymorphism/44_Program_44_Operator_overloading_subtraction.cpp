/* Write a c++ code to subtract two complex numbers using operator overloading*/
#include<iostream>
using namespace std;
class Complex
{
    float re, im;
public:
    Complex(float r = 0, float i = 0) : re(r), im(i) {}
    Complex operator-(const Complex &c)
    {
        return Complex(re - c.re,im - c.im);
    }
    void show()
    {
        cout<<re<< "-("<<im<<")i";
    }
};
int main()
{
    Complex a(2,3),b(4, 5);
    Complex c = a - b;
    c.show();
}
