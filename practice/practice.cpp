#include <iostream>
#include <string>

using namespace std;

// Base Class: Person
class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    string getName() const { return name; }
    virtual void display() const {
        cout << "Name: " << name << endl;
    }
};

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

// Main function
int main() {
    // Input instructor details
    string instructorName;
    double instructorSalary;
    cout << "Enter instructor name: ";
    getline(cin, instructorName);
    cout << "Enter instructor salary: ";
    cin >> instructorSalary;
    cin.ignore(); // Ignore leftover newline character

    Instructor* instr = new Instructor(instructorName, instructorSalary);

    // Input course number
    string courseNo;
    cout << "Enter course number: ";
    getline(cin, courseNo);

    Course course(courseNo, instr);

    // Input number of students
    int numStudents;
    cout << "Enter number of students to enroll (max 10): ";
    cin >> numStudents;
    cin.ignore(); // Ignore leftover newline character

    for (int i = 0; i < numStudents; ++i) {
        string studentName;
        double studentGPA;
        cout << "Enter name of student " << (i + 1) << ": ";
        getline(cin, studentName);
        cout << "Enter GPA of student " << (i + 1) << ": ";
        cin >> studentGPA;
        cin.ignore(); // Ignore leftover newline character
        course.addStudent(Student(studentName, studentGPA));
    }

    // Display course details
    course.display();

    return 0;
}
