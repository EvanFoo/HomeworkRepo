/* 
 * File:   ShiftSupervisor.cpp
 * Author: evan
 * 
 * Created on May 23, 2015, 4:09 PM
 */

#include "ShiftSupervisor.h"
#include <iomanip>

/*
 * set the name equal to a blank space
 */
ShiftSupervisor::ShiftSupervisor() {
    setName(" ");
};

/*
 * call the set name function with input name as the argument
 * call the set number function with the input number as the argument
 * call the set hire date function with the input date as the argument
 * set the salary equal to the input salary
 * set the bonus equal to the input bonus
 */
ShiftSupervisor::ShiftSupervisor(char * inputName, int inputNumber, int inputDate, double inputSalary, double inputBonus){
    setName(inputName);
    setNumber(inputNumber);
    setHireDate(inputDate);
    salary = inputSalary;
    bonus = inputBonus;
}

double ShiftSupervisor::getSalary(){
    return salary;
};
void ShiftSupervisor::setSalary(double inputSalary){
    salary = inputSalary;
};
    
double ShiftSupervisor::getBonus(){
    return bonus;
};
void ShiftSupervisor::setBonus(double inputBonus){
    bonus = inputBonus;
};

/*
 * display the name
 * display the number
 * display the hire date
 * display the salary
 * display the monthly bonus
 */
void ShiftSupervisor::displayInfo(){
    std::cout << std::setw(30) << std::left << "Name" << std::setw(20) << getName() << std::endl;
    std::cout << std::setw(30) << "Employee Number" << std::setw(20) << getNumber()<< std::endl;
    std::cout << std::setw(30) << "Hire Date" << std::setw(20) << getHireDate()<< std::endl; 
    std::cout << std::setw(30) << "Salary" << std::setw(20) << salary << std::endl;
    std::cout << std::setw(30) << "Monthly Bonus" << std::setw(20) << bonus << std::endl;
}

