#include "Person.cpp"
#include <iostream>
using namespace std;

// Derived Class: Instructor (inherits from Person)
class Instructor : public Person {
private:
    double salary;
public:
    Instructor(string n = "", double s = 0.0) : Person(n), salary(s) {}
    void display() const override {
        cout << "Instructor Name: " << name << ", Salary: " << salary << endl;
    }
};
