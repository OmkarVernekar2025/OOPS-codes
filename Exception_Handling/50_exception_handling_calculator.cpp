#include<iostream>
using namespace std;

class calculator
{
    int x, y;

public:
    calculator(int a, int b)
    {
        x = a;
        y = b;
    }

    void addition()
    {
        try
        {
            if(x <= 0 || y <= 0)
                throw 1;

            cout << "Addition = " << x + y << endl;
        }
        catch(int)
        {
            cout << "Exception: Only positive numbers are allowed!" << endl;
        }
    }

    void subtraction()
    {
        try
        {
            if(x <= 0 || y <= 0)
                throw 1;

            cout << "Subtraction = " << x - y << endl;
        }
        catch(int)
        {
            cout << "Exception: Only positive numbers are allowed!" << endl;
        }
    }

    void multiplication()
    {
        try
        {
            if(x <= 0 || y <= 0)
                throw 1;

            if(x == 0 || y == 0)
                throw 2;

            cout << "Multiplication = " << x * y << endl;
        }
        catch(int e)
        {
            if(e == 1)
                cout << "Exception: Only positive numbers are allowed!" << endl;
            else if(e == 2)
                cout << "Exception: Multiplicands should not be zero!" << endl;
        }
    }

    void division()
    {
        try
        {
            if(x <= 0 || y <= 0)
                throw 1;

            if(y == 0)
                throw 2;

            cout << "Division = " << (float)x / y << endl;
        }
        catch(int e)
        {
            if(e == 1)
                cout << "Exception: Only positive numbers are allowed!" << endl;
            else if(e == 2)
                cout << "Exception: Division by zero is not allowed!" << endl;
        }
    }
};

int main()
{
    int a, b;

    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    calculator c(a, b);

    c.addition();
    c.subtraction();
    c.multiplication();
    c.division();

    return 0;
}
