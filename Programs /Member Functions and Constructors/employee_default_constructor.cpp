#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    Employee() {
        name = "Unknown";
        id = 0;
    }

    void display() {
        cout << name << endl;
        cout << id << endl;
    }
};

int main() {
    Employee e;
    e.display();
    return 0;
}
