/* 
 * File:   TeamLeader.cpp
 * Author: evan
 * 
 * Created on May 23, 2015, 4:40 PM
 */

#include "TeamLeader.h"
#include <iomanip>

/*
 * call the set name function with a blank space as an argument
 */
TeamLeader::TeamLeader() {
    setName(" ");
}

/*
 * call the set name function with input name as the argument
 * call the set number function with the input number as the argument
 * call the set hire date function with the input date as the argument
 * call the set pay rate function with argument input pay rate
 * call the set monthly bonus function with argument input monthly bonus
 * call the set required training hours function with argument input required training horus
 * call the set completed training hours function with argument input completed training hours
 */
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

/*
 * display the name
 * display the number
 * display the hire date
 * display the shift
 * display the pay rate
 * display the monthly bonus
 * display the required training hours
 * display the completed training hours
 */
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



