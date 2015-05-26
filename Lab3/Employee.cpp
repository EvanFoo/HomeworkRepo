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

/*
 * allocate memory for the name
 * set number to zero
 * set hire date to 0
 */
Employee::Employee(){
    name = new char[10];
    number = 0;
    hireDate = 0;
};

/*
 * allocate memory for name
 * copy the input name into the name attribute
 * set number equal to input number
 * set hire date equal to input hire date
 */
Employee::Employee(char * inputName, int inputNumber, int inputDate){
    name = new char[strlen(inputName)];
    std::strcpy(name, inputName);
    number = inputNumber;
    hireDate = inputDate;
};

/*
 * set number equal to the number attribute of the original employee object
 * set the hire date equal to the hire date attribute of the original employee object
 * allocate memory for the name
 * copy the name attribute of the original employee into the name attribute
 */
Employee::Employee(const Employee& orig) {
    number = orig.number;
    hireDate = orig.hireDate;
    name = new char[strlen(orig.name)];    
    std::strncpy(name, orig.name, strlen(orig.name));   
};

char * Employee::getName(){
    return name;
};

/*
 * allocate space for the name
 * copy the input name to the name string
 */
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

/*
 * display the name
 * display the number
 * display the hire date
 */
void Employee::displayInfo(){
    std::cout << std::right << std::setw(20) << "Name" << std::setw(20) << name << std::endl;
    std::cout << std::setw(20) << "Employee Number" << std::setw(20) << number << std::endl;
    std::cout << std::setw(20) << "Hire Date" << std::setw(20) << hireDate << std::endl;   
}

Employee::~Employee() {
    delete [] name;
    name = 0;
};

