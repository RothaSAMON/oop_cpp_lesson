#include <iostream>
#include <cstring>
using namespace std;

class Man {
private:
    char* name;
    int age;

public:
    // Constructor
    Man(const char* name, int age) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->age = age;
    }

    // Copy Constructor
    Man(const Man& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        age = other.age;
    }

    // Destructor
    ~Man() {
        delete[] name;
    }

    // Display details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};