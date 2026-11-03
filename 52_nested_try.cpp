#include<iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout<<"n = "<<n<<" Handle Partially \n";
            throw;//Re-throwing exception
        }

    }
    catch (double n)
    {
        cout<<"n = "<<n<<" Handle remaining \n";
    }

    catch (...)
    {
        cout<<"some other exceptions";
    }
    return 0;
}
