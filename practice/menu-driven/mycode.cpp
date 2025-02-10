// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// public:
//     int id;
//     string name;
//     void input() {
//         cout << "Enter Employee ID: ";
//         cin >> id;
//         cin.ignore();
//         cout << "Enter Employee Name: ";
//         getline(cin, name);
//     }

//     void display() {
//         cout << "ID: " << id << ", Name: " << name << endl;
//     }
// };

// class EmployeeManager {
// private:
//     Employee employees[100]; // Array to store employees
//     int count; // Track the number of employees

// public:
//     EmployeeManager() { count = 0; }

//     void addEmployee() {
//         if (count < 100) {
//             employees[count].input();
//             count++;
//             cout << "Employee added successfully!\n";
//         } else {
//             cout << "Employee list is full!\n";
//         }
//     }

//     void viewEmployees() {
//         if (count == 0) {
//             cout << "No employees to display.\n";
//             return;
//         }
//         cout << "\nEmployee List:\n";
//         for (int i = 0; i < count; i++) {
//             employees[i].display();
//         }
//     }

//     void updateEmployee() {
//         int empId;
//         cout << "Enter Employee ID to update: ";
//         cin >> empId;
//         for (int i = 0; i < count; i++) {
//             if (employees[i].id == empId) {
//                 cout << "Enter new details:\n";
//                 employees[i].input();
//                 cout << "Employee updated successfully!\n";
//                 return;
//             }
//         }
//         cout << "Employee not found!\n";
//     }

//     void deleteEmployee() {
//         int empId;
//         cout << "Enter Employee ID to delete: ";
//         cin >> empId;
//         for (int i = 0; i < count; i++) {
//             if (employees[i].id == empId) {
//                 for (int j = i; j < count - 1; j++) {
//                     employees[j] = employees[j + 1];
//                 }
//                 count--;
//                 cout << "Employee deleted successfully!\n";
//                 return;
//             }
//         }
//         cout << "Employee not found!\n";
//     }

//     void searchEmployee() {
//         int empId;
//         cout << "Enter Employee ID to search: ";
//         cin >> empId;
//         for (int i = 0; i < count; i++) {
//             if (employees[i].id == empId) {
//                 cout << "Employee Found:\n";
//                 employees[i].display();
//                 return;
//             }
//         }
//         cout << "Employee not found!\n";
//     }

//     void sortEmployees() {
//         for (int i = 0; i < count - 1; i++) {
//             for (int j = i + 1; j < count; j++) {
//                 if (employees[i].name > employees[j].name) {
//                     swap(employees[i], employees[j]);
//                 }
//             }
//         }
//         cout << "Employees sorted by name successfully!\n";
//     }
// };

// int main() {
//     EmployeeManager manager;
//     int choice;

//     do {
//         cout << "\nEmployee Management System\n";
//         cout << "1. Add Employee\n";
//         cout << "2. View Employees\n";
//         cout << "3. Update Employee\n";
//         cout << "4. Delete Employee\n";
//         cout << "5. Search Employee\n";
//         cout << "6. Sort Employees by Name\n";
//         cout << "7. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             manager.addEmployee();
//             break;
//         case 2:
//             manager.viewEmployees();
//             break;
//         case 3:
//             manager.updateEmployee();
//             break;
//         case 4:
//             manager.deleteEmployee();
//             break;
//         case 5:
//             manager.searchEmployee();
//             break;
//         case 6:
//             manager.sortEmployees();
//             break;
//         case 7:
//             cout << "Exiting program...\n";
//             break;
//         default:
//             cout << "Invalid choice! Please try again.\n";
//         }
//     } while (choice != 7);

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;

public:
    // Constructor
    Employee() : id(0), name("") {}

    // Getters and Setters
    int getId() const { return id; }
    string getName() const { return name; }

    void setId(int newId) { id = newId; }
    void setName(string newName) { name = newName; }

    // Input Method
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
    }

    // Display Method
    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

class EmployeeManager {
private:
    Employee employees[100]; // Array to store employees
    int count; // Track the number of employees

public:
    // Constructor
    EmployeeManager() : count(0) {}

    // Add Employee
    void addEmployee() {
        if (count < 100) {
            employees[count].input();
            count++;
            cout << "Employee added successfully!\n";
        } else {
            cout << "Employee list is full!\n";
        }
    }

    // View All Employees
    void viewEmployees() const {
        if (count == 0) {
            cout << "No employees to display.\n";
            return;
        }
        cout << "\nEmployee List:\n";
        for (int i = 0; i < count; i++) {
            employees[i].display();
        }
    }

    // Update Employee
    void updateEmployee() {
        int empId;
        cout << "Enter Employee ID to update: ";
        cin >> empId;

        for (int i = 0; i < count; i++) {
            if (employees[i].getId() == empId) {
                cout << "Enter new details:\n";
                employees[i].input();
                cout << "Employee updated successfully!\n";
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    // Delete Employee
    void deleteEmployee() {
        int empId;
        cout << "Enter Employee ID to delete: ";
        cin >> empId;

        for (int i = 0; i < count; i++) {
            if (employees[i].getId() == empId) {
                for (int j = i; j < count - 1; j++) {
                    employees[j] = employees[j + 1];
                }
                count--;
                cout << "Employee deleted successfully!\n";
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    // Search Employee
    void searchEmployee() const {
        int empId;
        cout << "Enter Employee ID to search: ";
        cin >> empId;

        for (int i = 0; i < count; i++) {
            if (employees[i].getId() == empId) {
                cout << "Employee Found:\n";
                employees[i].display();
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    // Sort Employees by Name
    void sortEmployees() {
        if (count == 0) {
            cout << "No employees to sort.\n";
            return;
        }
    
        bool swapped;
        for (int i = 0; i < count - 1; i++) {
            swapped = false;
            for (int j = 0; j < count - i - 1; j++) {
                if (employees[j].getName() > employees[j + 1].getName()) {
                    swap(employees[j], employees[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break;  // Optimization: If no swap, stop early
        }
    
        cout << "Employees sorted by name successfully!\n";
    }    
};

int main() {
    EmployeeManager manager;
    int choice;

    do {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. View Employees\n";
        cout << "3. Update Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Search Employee\n";
        cout << "6. Sort Employees by Name\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            manager.addEmployee();
            break;
        case 2:
            manager.viewEmployees();
            break;
        case 3:
            manager.updateEmployee();
            break;
        case 4:
            manager.deleteEmployee();
            break;
        case 5:
            manager.searchEmployee();
            break;
        case 6:
            manager.sortEmployees();
            break;
        case 7:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
