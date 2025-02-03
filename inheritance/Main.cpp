#include <iostream>
#include "Employee.cpp"
#include "PTEmployee.cpp"
using namespace std;

int main(){

    Employee emp;
    emp.setId(100);
    emp.setName("Dara");
    cout<<emp.toString()<<endl;

    PTEmployee pt;
    pt.setId(101);
    pt.setName("Lina");
    pt.setHours(20);
    pt.setRates(10);
    cout<<pt.toString()<<endl;

    


    return 0;
}