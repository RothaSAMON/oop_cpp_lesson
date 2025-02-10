#pragma once
#include <iostream>
#include "Employee.cpp"
using namespace std;

class EmployeeManager
{
private:
    Employee employees[100];
    int count;

public:
    EmployeeManager() { count = 0; }

    void addEmployee()
    {
        if (count < 100)
        {
           
            employees[count].input();
            count++;
            cout << "Employee added successfully!\n";
        }
        else
        {
            cout << "Employee list is full!\n";
        }
    }

    void viewEmployees()
    {
        if (count == 0)
        {
            cout << "No employees to display.\n";
            return;
        }
        cout << "\nEmployee List:\n";
        for (int i = 0; i < count; i++)
        {
            employees[i].display();
        }
    }

    void updateEmployee()
    {
        int empId;
        cout << "Enter Employee ID to update: ";
        cin >> empId;
        for (int i = 0; i < count; i++)
        {
            if (employees[i].getId() == empId)
            {
                cout << "Enter new details:\n";
                employees[i].input();
                cout << "Employee updated successfully!\n";
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    void deleteEmployee()
    {
        int empId;
        cout << "Enter Employee ID to delete: ";
        cin >> empId;
        for (int i = 0; i < count; i++)
        {
            if (employees[i].getId() == empId)
            {
                for (int j = i; j < count - 1; j++)
                {
                    employees[j] = employees[j + 1];
                }
                count--;
                cout << "Employee deleted successfully!\n";
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    void searchEmployee()
    {
        int empId;
        cout << "Enter Employee ID to search: ";
        cin >> empId;
        for (int i = 0; i < count; i++)
        {
            if (employees[i].getId() == empId)
            {
                cout << "Employee Found:\n";
                employees[i].display();
                return;
            }
        }
        cout << "Employee not found!\n";
    }

    void sortEmployees()
    {
        for (int i = 0; i < count - 1; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                if (employees[i].getName() > employees[j].getName())
                {
                    swap(employees[i], employees[j]);
                }
            }
        }
        cout << "Employees sorted by name successfully!\n";
    }
};