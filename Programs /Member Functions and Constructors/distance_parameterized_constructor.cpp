#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    Distance(int m, int cm) {
        meters = m + cm / 100;
        centimeters = cm % 100;
    }

    void display() {
        cout << meters << " meters " << centimeters
             << " centimeters" << endl;
    }
};

int main() {
    Distance d(5, 175);
    d.display();
    return 0;
}
