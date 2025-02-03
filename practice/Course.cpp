#include "Student.cpp"
#include "Instructor.cpp"
#include <iostream>
using namespace std;

// Class: Course
class Course {
private:
    string courseNo;
    Student students[10];  // Fixed-size array to store students
    int studentCount;      // Number of students enrolled
    Instructor* instructor; // Pointer to the instructor
public:
    Course(string c, Instructor* instr) : courseNo(c), instructor(instr), studentCount(0) {}
    ~Course() {
        delete instructor; // Free instructor since it's owned by Course
    }

    void addStudent(const Student& s) {
        if (studentCount < 10) {
            students[studentCount++] = s;
        } else {
            cout << "Cannot add more students, course is full!" << endl;
        }
    }

    void display() const {
        cout << "Course Number: " << courseNo << endl;
        if (instructor) {
            cout << "Instructor: ";
            instructor->display();
        }
        cout << "Students enrolled:" << endl;
        for (int i = 0; i < studentCount; ++i) {
            students[i].display();
        }
    }
};
