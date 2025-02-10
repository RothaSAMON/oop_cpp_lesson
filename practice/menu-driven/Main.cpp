#include <iostream>
#include "Employee.cpp"
#include "EmployeeManager.cpp"
using namespace std;

int main()
{
    EmployeeManager manager;
    int choice;
    enum Menu {EXIT, ADD, VIEW, UPDATE, DELETE, SEARCH, SORT };

    do
    {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Employee\n";
        cout << "2. View Employees\n";
        cout << "3. Update Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Search Employee\n";
        cout << "6. Sort Employees by Name\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case ADD:
            manager.addEmployee();
            break;
        case VIEW:
            manager.viewEmployees();
            break;
        case UPDATE:
            manager.updateEmployee();
            break;
        case DELETE:
            manager.deleteEmployee();
            break;
        case SEARCH:
            manager.searchEmployee();
            break;
        case SORT:
            manager.sortEmployees();
            break;
        case EXIT:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
