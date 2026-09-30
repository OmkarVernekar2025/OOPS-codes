#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number() {
        value = 0;
    }

    Number(int v) {
        value = v;
    }

    Number(const Number& n) {
        value = n.value;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1;
    Number n2(25);
    Number n3(n2);

    n1.display();
    n2.display();
    n3.display();

    return 0;
}
