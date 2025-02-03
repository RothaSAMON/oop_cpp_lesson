#pragma once
#include <iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name;
    public:
        Employee(){
            id=0;
            name="unknown";
        }
        Employee(int id, string name){
            this->id=id;
            this->name=name;
            
        }
        //setter and getters
        int getId() const{
            return id;
        }
        void setId(const int id){
            this->id=id;
        }
        string getName() const{ 
            return name;
        }
        void setName(const string name){
            this->name=name;
        }
     
        //method members
        string toString(){            
            return "ID: " + to_string(id) + " Name: " + name ;
        }

};