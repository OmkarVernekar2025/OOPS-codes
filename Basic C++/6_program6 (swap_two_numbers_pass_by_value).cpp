#include <iostream>
using namespace std;

void swapNumbers(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int x,y;
    x=10;
    y=20;

    /*cout<<"Enter two numbers: ";
    cin>>x >>y;*/

    cout<<"Before swapping: x = "<<x << ",y = "<<y<< endl;

    swapNumbers(x, y);

    cout<<"After swapping: x = "<<x << ",y = "<<y<< endl;

    return 0;
}
