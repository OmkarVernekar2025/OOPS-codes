//write a c++ program to handle multiplication of 2 variables using exceptions such that the product is non-zero

#include<iostream>
using namespace std;
int main()
{
    int x=8,y=0;
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
       throw y;
       cout<<"After throw"<<endl; //never executed
    }
    }
    catch(int x)
    {
       cout<<"Exception Caught and x= "<<x<<endl;        //  this or
    }
    catch(int y)
    {
       cout<<"Exception Caught and y= "<<y<<endl;               // this will be executed
    }
    cout<<"After Catch"<<endl;
    return 0;
}
