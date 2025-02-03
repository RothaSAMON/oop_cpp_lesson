// #include <iostream>
// #include <string>
// using namespace std;

// // Base Class: Person
// class Person {
// protected:
//     string name;
// public:
//     Person(string n) : name(n) {}
//     string getName() const { return name; }
//     virtual void display() const {
//         cout << "Name: " << name << endl;
//     }
//     virtual ~Person() {} // Virtual destructor for proper cleanup
// };


#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
#include <string>
using namespace std;

// Base Class: Person
class Person {
private:
    string name;
public:
    Person(string n) : name(n) {}
    string getName() const { return name; }
    virtual void display() const {
        cout << "Name: " << name << endl;
    }
    virtual ~Person() {}
};

#endif // PERSON_CPP