/* 
 * File:   ShiftSupervisor.h
 * Author: evan
 *
 * Created on May 23, 2015, 4:09 PM
 */

#ifndef SHIFTSUPERVISOR_H
#define	SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor: public Employee {
public:
    ShiftSupervisor();
    ShiftSupervisor(char * inputName, int inputNumber, int inputDate, double inputSalary, double inputBonus);
    ~ShiftSupervisor();
    
    double getSalary();
    void setSalary(double inputSalary);
    
    double getBonus();
    void setBonus(double inputBonus);
    
    virtual void displayInfo();
private:
    double salary;
    double bonus;
};

#endif	/* SHIFTSUPERVISOR_H */

