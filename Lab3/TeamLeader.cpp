/* 
 * File:   TeamLeader.cpp
 * Author: evan
 * 
 * Created on May 23, 2015, 4:40 PM
 */

#include "TeamLeader.h"
#include <iomanip>

TeamLeader::TeamLeader() {
}

TeamLeader::TeamLeader(char * inputName, int inputNumber, int inputHireDate, int inputShift, double inputPayRate, double inputMonthlyBonus, int inputRequiredTrainingHours, int inputCompletedTrainingHours)  { 
    setName(inputName);
    setNumber(inputNumber);
    setHireDate(inputHireDate);   
    setPayRate(inputPayRate);
    setMonthlyBonus(inputMonthlyBonus);
    setRequiredTrainingHours(inputRequiredTrainingHours);
    setCompletedTrainingHours(inputCompletedTrainingHours);
}                                                                                                                                                                                                              

double TeamLeader::getMonthlyBonus(){
    return monthlyBonus;
};
void TeamLeader::setMonthlyBonus(double inputMonthlyBonus){
    monthlyBonus = inputMonthlyBonus;
};
    
int TeamLeader::getRequiredTrainingHours(){
    return requiredTrainingHours;
};
void TeamLeader::setRequiredTrainingHours(int inputRequiredTrainingHours){
  requiredTrainingHours = inputRequiredTrainingHours;  
};
    
int TeamLeader::getCompletedTrainingHours(){
    return completedTrainingHours;
};
void TeamLeader::setCompletedTrainingHours(int inputCompletedTrainingHours){
    completedTrainingHours = inputCompletedTrainingHours;
};

void TeamLeader::displayInfo() {
    std::cout << std::setw(30) << std::left << "Name" << std::setw(20) << getName() << std::endl;
    std::cout << std::setw(30) << "Employee Number" << std::setw(20) << getNumber()<< std::endl;
    std::cout << std::setw(30) << "Hire Date" << std::setw(20) << getHireDate()<< std::endl; 
    std::cout << std::setw(30) << "Shift" << std::setw(20) << getShift() << std::endl; 
    std::cout << std::setw(30) << "Pay Rate" << std::setw(20) << getPayRate() << std::endl; 
    std::cout << std::setw(30) << "Hire Date" << std::setw(20) << getHireDate() << std::endl; 
    std::cout << std::setw(30) << "Monthly Bonus" << std::setw(20) << monthlyBonus << std::endl;
    std::cout << std::setw(30) << "Required Training Hours" << std::setw(20) << requiredTrainingHours  << std::endl;
    std::cout << std::setw(30) << "Completed Training Hours" << std::setw(20) << completedTrainingHours << std::endl;
}



