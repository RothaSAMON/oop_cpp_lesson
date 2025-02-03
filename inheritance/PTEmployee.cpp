#include <iostream>
#include "Employee.cpp"
using namespace std;

class PTEmployee : public Employee{
    private:
        double hours;
        double rates;
    public:
        PTEmployee(){
            Employee();
            hours=0;
            rates=0;
        }
        PTEmployee(int id, string name, double hours, double rates){
            Employee(id,name);
            this->hours=hours;
            this->rates;
        }
        double getHours(){
            return hours;
        }
        void setHours(double hours){
            this->hours=hours;
        }
        double getRates(){
            return rates;
        }
        void setRates(double rates){
            this->rates=rates;
        }
        //methods
        string toString(){
            return "ID: " + to_string(getId()) + " Name: " + getName() + " Hours: " + to_string(hours) + " Rates: " + to_string(rates);
        }

    

};