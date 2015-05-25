/* 
 * File:   Employee.cpp
 * Author: evan
 * 
 * Created on May 23, 2015, 3:30 PM
 */

#include "Employee.h"
#include <iostream>
#include <cstring>
#include <iomanip>

Employee::Employee(){
    std:: cout << "Default" << std::endl;
    name = new char[10];
    number = 0;
    hireDate = 0;
};

Employee::Employee(char * inputName, int inputNumber, int inputDate){
    std::cout << "Custom" << std::endl;
    name = new char[strlen(inputName)];
    std::strcpy(name, inputName);
    number = inputNumber;
    hireDate = inputDate;
};

Employee::Employee(const Employee& orig) {
    std::cout << "Copy constructor" << std::endl;
    
    number = orig.number;
    hireDate = orig.hireDate;
    name = new char[strlen(orig.name)];    
    std::strncpy(name, orig.name, strlen(orig.name));   
};

char * Employee::getName(){
    return name;
};
void Employee::setName(char * inputName){
    name = new char[strlen(inputName)];
    strcpy(name, inputName);
};
   
int Employee::getNumber(){
    return number;
};
void Employee::setNumber(int inputNumber){
    number = inputNumber;
};
    
int Employee::getHireDate(){
    return hireDate;
    
};
void Employee::setHireDate(int inputHireDate){
    hireDate = inputHireDate;
};

void Employee::displayInfo(){
    std::cout << std::right << std::setw(20) << "Name" << std::setw(20) << name << std::endl;
    std::cout << std::setw(20) << "Employee Number" << std::setw(20) << number << std::endl;
    std::cout << std::setw(20) << "Hire Date" << std::setw(20) << hireDate << std::endl;   
}

Employee::~Employee() {
    delete [] name;
    name = 0;
};

