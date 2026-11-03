//Exception with arguments c++ code

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Inches_Ex
{
public:
    string origin;
    float iValue;

    Inches_Ex(string str, float in)
    {
        origin = str;
        iValue = in;
    }
};

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }

    Distance(int ft, float in)
    {
        if (in >= 12.0)
            throw Inches_Ex("2-arg constructor", in);

        feet = ft;
        inches = in;
    }

    void getdist()
    {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;

        if (inches >= 12.0)
            throw Inches_Ex("in getdist()", inches);
    }

    void showdist()
    {
        cout << feet << " - " << inches << "\n";
    }
};

int main()
{
    try
    {
        Distance dist1(17, 3.5);
        Distance dist2;

        dist2.getdist();

        cout << "dist1 = ";
        dist1.showdist();

        cout << "dist2 = ";
        dist2.showdist();
    }
    catch (Inches_Ex e)
    {
        cout << "Initialization error in "
             << e.origin << endl;

        cout << "Inches value of " << e.iValue
             << " is too large." << endl;
    }
    return 0;
}
