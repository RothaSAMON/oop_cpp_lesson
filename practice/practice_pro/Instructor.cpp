#pragma once
#include <iostream>
#include <string>
#include "Person.cpp" 
using namespace std;


class Instructor : public Person {
private:
    double salary;

public:
    
    Instructor(string n, double s) : Person(n), salary(s) {}
   
    void display(){
        cout << "Name: " << Person::getName()<< endl;
        cout << "Salary: $" << salary << endl;
    }
};
