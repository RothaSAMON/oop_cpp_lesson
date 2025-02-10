#include <iostream>
#include <string>
#include "Person.cpp"
#include "Student.cpp"
#include "Instructor.cpp"

using namespace std;

int main() {
    
    Person p("Dara");
    p.display();

    Student s("Lina", 3.5);
    s.display();

    Instructor i("Bora", 500);
    i.display();

    return 0;
}