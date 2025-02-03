#include <sstream>
#include "Employee.cpp"
using namespace std;

class FTEmployee : public Employee {
    private:
        double salary;
    public:
        // Constructors
        FTEmployee() : Employee(), salary(0.0) {}
        // FTEmployee(string name, int id, double salary) : Employee(name, id), salary(salary) {}

        // Setter for salary
        void setSalary(double salary) {
            this->salary = salary;
        }

        // Getter for salary
        double getSalary() const {
            return salary;
        }

        // toString method
        string toString() const {
            stringstream ss;
            ss << "Name: " << getName() << ", ID: " << getId() << ", Salary: " << salary;
            return ss.str();
        }
};