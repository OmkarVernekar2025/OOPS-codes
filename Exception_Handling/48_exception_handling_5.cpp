#include<iostream>
using namespace std;
double division(int a,int b)
{
int c;
if(b==0)
{
    c=a/b;
    throw "Division by zero condition!!!";
}
return c;
}

int main()
{
 int x=50,y=0;
 double z=0;
 try
 {
 z=division(x,y);
 cout<<z<<endl;
 }
 catch(const char*msg)
 {
 cout<<msg<<endl;
 }
 return 0;
}
