/* 
 * File:   Employee.h
 * Author: evan
 *
 * Created on May 23, 2015, 3:30 PM
 */
#include <cstring>
#include <iostream>

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

class Employee {
public:
    Employee();
    Employee(char * inputName, int inputNumber, int inputDate);
    Employee(const Employee& orig);
    virtual ~Employee();
    
    virtual void displayInfo();
    
    char * getName();
    void setName(char * inputName);
   
    int getNumber();
    void setNumber(int inputNumber);
    
    int getHireDate();
    void setHireDate(int inputHireDate);
    
private:
    char * name;
    int number;
    int hireDate;

};

#endif	/* EMPLOYEE_H */

