#include <iostream>
using namespace std;

class Base {
public:
    int publicValue = 10;

protected:
    int protectedValue = 20;

private:
    int privateValue = 30;
};

class Derived : public Base {
public:
    void display() {
        cout << publicValue << endl;
        cout << protectedValue << endl;
    }
};

int main() {
    Derived d;

    d.display();
    cout << d.publicValue << endl;

    return 0;
}
