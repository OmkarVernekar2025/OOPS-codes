#include<iostream>
using namespace std;
class Counter
{
    int val;
public:
    Counter(int v = 0) : val (v) {}
    Counter& operator++() // Prefix ++c
    {
        val++;
        return *this;
    }
    Counter operator++(int) // Postfix c++
    {
        Counter temp = *this;
        val++;
        return temp; //returns the old value
    }
    int get()
    {
        return val;
    }

};
int main()
{
    Counter c;
    c++;
    cout<<"result is : "<<c.get()<<endl;
    ++c;
    cout<<"result is : "<<c.get();
    return 0;
}
