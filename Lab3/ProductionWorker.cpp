/* 
 * File:   ProductionWorker.cpp
 * Author: evan
 * 
 * Created on May 23, 2015, 3:48 PM
 */

#include "ProductionWorker.h"
#include <iostream>
#include <iomanip>

/*
 * call set name with a new character array as an argument
 * set pay rate equal to zero
 * set shift equal to zero
 */
ProductionWorker::ProductionWorker() {
    setName(" ");
    payRate = 0;
    shift = 0;
}

/*
 * call the set name function with the input name as the arqument
 * call the set number function with the input number as the argument
 * call the set hire date function with the input hire date as the argument
 * set the pay rate equal to the input pay rate
 * set the shift equal to the input shift
 */
ProductionWorker::ProductionWorker(char * inputName, int inputNumber, int inputHireDate, int inputShift, double inputPayRate){
    setName(inputName);
    setNumber(inputNumber);
    setHireDate(inputHireDate);   
    payRate = inputPayRate;
    shift = inputShift;
}

int ProductionWorker::getShift(){
    return shift;
}

void ProductionWorker::setShift(int inputShift){
    shift = inputShift;
}

double ProductionWorker::getPayRate(){
    return payRate;
}

void ProductionWorker::setPayRate(double inputPayRate){
    payRate = inputPayRate;
}

/*
 * display the name
 * display the number
 * display the hire date
 * display the shift
 * display the pay rate
 */
void ProductionWorker::displayInfo(){
    std::cout << std::setw(30) << std::left << "Name" << std::setw(20) << getName() << std::endl;
    std::cout << std::setw(30) << "Employee Number" << std::setw(20) << getNumber()<< std::endl;
    std::cout << std::setw(30) << "Hire Date" << std::setw(20) << getHireDate()<< std::endl; 
    std::cout << std::setw(30) << "Shift" << std::setw(20) << shift << std::endl;
    std::cout << std::setw(30) << "Pay Rate" << std::setw(20) << payRate << std::endl;
}


