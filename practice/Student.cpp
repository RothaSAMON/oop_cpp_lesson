#include "Person.cpp"
#include <iostream>
using namespace std;

// Derived Class: Student (inherits from Person)
class Student : public Person {
private:
    double gpa;
public:
    Student(string n = "", double g = 0.0) : Person(n), gpa(g) {}
    void display() const override {
        cout << "Student Name: " << name << ", GPA: " << gpa << endl;
    }
};
