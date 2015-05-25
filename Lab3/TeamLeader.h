/* 
 * File:   TeamLeader.h
 * Author: evan
 *
 * Created on May 23, 2015, 4:40 PM
 */

#ifndef TEAMLEADER_H
#define	TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker{
public:
    TeamLeader();
    TeamLeader(char * inputName, int inputNumber, int inputHireDate, int inputShift, double inputPayRate, double inputMonthlyBonus, int inputRequiredTrainingHours, int inputCompletedTrainingHours);
    
    double getMonthlyBonus();
    void setMonthlyBonus(double inputPayRate);
    
    int getRequiredTrainingHours();
    void setRequiredTrainingHours(int inputShift);
    
    int getCompletedTrainingHours();
    void setCompletedTrainingHours(int inputShift);
    
    virtual void displayInfo();
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int completedTrainingHours;
};

#endif	/* TEAMLEADER_H */

