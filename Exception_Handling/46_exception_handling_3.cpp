//write a c++ program to handle multiplication of 2 variables using exceptions such that the product is non-zero...
 // Sir remodeled because throw is type differed like one throw per datatype

#include<iostream>
using namespace std;
int main()
{
    int x=2,y=0;
    cout<<"Before try \n";
    try
    {
    cout<<"Inside try \n";
    if(x==0)
    {
       throw x;
       cout<<"After throw"<<endl; //never executed
    }
     else if(y==0)
     {
        throw 2.50;
        cout<<"After throw"<<endl; //never executed
     }
    }
    catch(int x)
    {
       cout<<"Exception Caught and x= "<<x<<endl;        //  this or
    }
     catch(double z)
    {
       cout<<"Exception Caught and y= "<<z<<endl;               // this will be executed
    }
    cout<<"After Catch"<<endl;
    return 0;
}
