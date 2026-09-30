#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

class Student : public Person {
protected:
    int rollNo;

public:
    void setRollNo(int r) {
        rollNo = r;
    }
};

class IT_Student : public Student {
private:
    string specialization;

public:
    void setSpecialization(string s) {
        specialization = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    IT_Student s;

    s.setName("Raghavendra");
    s.setRollNo(620);
    s.setSpecialization("Information Technology");

    s.display();

    return 0;
}
