#pragma once
#include <iostream>
#include <string>
using namespace std;
//Encapsulated class
class Employee
{
private:
    int id;
    string name;
public:
    //constructors
    Employee() : id(0), name("unknown") {}
    Employee(int id, string name) : id(id), name(name) {}
    //setter and getter 
    void setName(const string name)
    {
        this->name = name;
    }
    string getName()const
    {
        return name;
    }
    void setId(const int id)
    {
        this->id = id;
    }
    int getId() const
    {
        return id;
    }
    //methods
    void input()
    {

            cout << "Enter Employee ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, name);
        
    }
    void display()
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};
