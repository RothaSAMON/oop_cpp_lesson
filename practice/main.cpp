#include "Course.cpp"
#include <iostream>
#include <string>

using namespace std;

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
