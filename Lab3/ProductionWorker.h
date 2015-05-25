/* 
 * File:   ProductionWorker.h
 * Author: evan
 *
 * Created on May 23, 2015, 3:48 PM
 */


#ifndef PRODUCTIONWORKER_H
#define	PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker:public Employee {
public:
    ProductionWorker();
    ProductionWorker(char * name, int inputNumber, int inputHireDate, int inputShift, double inputPayRate);
   
    int getShift();
    void setShift(int inputShift);
    
    double getPayRate();
    void setPayRate(double inputPayRate);  
    
    virtual void displayInfo();
private:
    int shift;
    double payRate;

};

#endif	/* PRODUCTIONWORKER_H */

