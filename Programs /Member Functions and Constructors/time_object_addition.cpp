#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time add(Time t) {
        int totalMinutes = minutes + t.minutes;
        int totalHours = hours + t.hours + totalMinutes / 60;
        totalMinutes %= 60;

        return Time(totalHours, totalMinutes);
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 45);
    Time t2(1, 30);

    Time result = t1.add(t2);
    result.display();

    return 0;
}
