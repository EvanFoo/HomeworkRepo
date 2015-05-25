/* 
 * File:   ProductionWorker.cpp
 * Author: evan
 * 
 * Created on May 23, 2015, 3:48 PM
 */

#include "ProductionWorker.h"
#include <iostream>
#include <iomanip>

ProductionWorker::ProductionWorker() {
    setName(new char[10]);
    payRate = 0;
    shift = 0;
}

ProductionWorker::ProductionWorker(char * inputName, int inputNumber, int inputHireDate, int inputShift, double inputPayRate){
    setName(new char[strlen(inputName)]);
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

void ProductionWorker::displayInfo(){
    std::cout << std::setw(30) << std::left << "Name" << std::setw(20) << getName() << std::endl;
    std::cout << std::setw(30) << "Employee Number" << std::setw(20) << getNumber()<< std::endl;
    std::cout << std::setw(30) << "Hire Date" << std::setw(20) << getHireDate()<< std::endl; 
    std::cout << std::setw(30) << "Shift" << std::setw(20) << shift << std::endl;
    std::cout << std::setw(30) << "Pay Rate" << std::setw(20) << payRate << std::endl;
}


