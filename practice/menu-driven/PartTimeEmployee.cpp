#include <sstream>
#include "Employee.cpp"
using namespace std;

class PTEmployee : public Employee {
    private:
        double hourlyRate;
    public:
        // Constructors
        PTEmployee() : Employee(), hourlyRate(0.0) {}
        PTEmployee(string name, int id, double hourlyRate) : Employee(name, id), hourlyRate(hourlyRate) {}

        // Setter for hourlyRate
        void setHourlyRate(double hourlyRate) {
            this->hourlyRate = hourlyRate;
        }

        // Getter for hourlyRate
        double getHourlyRate() const {
            return hourlyRate;
        }

        // toString method
        string toString() const {
            stringstream ss;
            ss << "Name: " << getName() << ", ID: " << getId() << ", Hourly Rate: " << hourlyRate;
            return ss.str();
        }
};