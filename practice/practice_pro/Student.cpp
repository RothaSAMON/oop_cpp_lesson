#pragma once
#include <iostream>
#include <string>
#include "Person.cpp"
using namespace std;

class Student : public Person {
private:
    double gpa;

public:
  
    Student(string n, double g) : Person(n), gpa(g) {}

    void display(){
        Person::display();
        cout << "GPA: " << gpa << endl;
    }
};

