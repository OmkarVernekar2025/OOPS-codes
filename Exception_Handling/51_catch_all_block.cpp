#include<iostream>
using namespace std;
int main()
{
    try
    {
        //double age = 15;
        int age = 15;
        if(age>=18)
        {
            cout<<"Access granted - you are old enough";
        }
        else
        {
            throw (age);
        }
    }
    catch (double e)
    {
        cout<<"Age = "<<e<<endl;
    }
    catch (...)
    {
        cout<<"Access denied- You must be atleast 18 years old.\n";
    }
    return 0;
}
