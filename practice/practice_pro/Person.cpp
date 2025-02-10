

#pragma once
#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
private:
    string name;

public:
    Person(string n) {
        name=n;
    }
    void display(){
        cout << "Name: " << name << endl;
    }
    string getName(){
        return name;
    }
};
