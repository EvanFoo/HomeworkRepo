#include <cstdlib>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
#include <iostream>

using namespace std;

/*
 Psudocode for Main:
 * Enter a number of employees for a company
 * 
 * do
 *      display "1. Create basic employee data"
 *      display "2. Create production worker data"
 *      display "3. Create shift supervisor data"
 *      display "4. Create team leader data"
 *      display "5. Display all employees"
 *      display "6. quit" 
 * 
 *      enter a choice
 *      
 *      if the choice is 1
 *          enter a name
 *          enter an employee number
 *          enter a hire date
 * 
 *          create a new employee object with name, employee number, and hire date
 *          save the new employee in the company array
 * 
 *          increment the global counter
 * 
 *      if the choice is 2
 *          enter a name
 *          enter an employee number
 *          enter a hire date
 *          enter a shift
 *          enter a salary
 * 
 *          create a new production worker object with name, employee number, hire date, shift and salary
 *          save the production worker in the company array
 
 *          increment the global counter
 * 
 *      if the choice is 3
 *          enter a name
 *          enter an employee number
 *          enter a hire date
 *          enter a salary 
 *          enter a bonus
 * 
 *          create a new shift supervisor object with name, employee number, hire date, salary, bonus
 *          save the shift supervisor in the company array
 * 
 *          increment the global counter
 * 
 *      if the choice is 4
 *          enter a name
 *          enter an employee number
 *          enter a hire date
 *          enter a pay rate 
 *          enter a bonus
 *          enter a required training hours
 *          enter a completed training hours
 * 
 *          create a new team leader object with name, employee number, hire date, pay rate, bonus, required training hours, completed training hours
 *          save the team leader in the company array
 * 
 *          increment the global counter
 *      if the choice is 5
 *          for a counter i less than the global counter
 *              call the display info method for the member of the company array at location i
 * while the flag is not equal to 6
 */

int main(int argc, char** argv) {
    int numberOfEmployees;
    Employee ** company;
    int flag = 0;
    int counter = 0;
    char * tempName = new char[10];
    
    cout << "Please enter the number of employees in you company" << endl;
    cin >> numberOfEmployees;
    company = new Employee * [numberOfEmployees];
    
    do{
        cout << "1. Create basic employee data" << endl;
        cout << "2. Create production worker data" << endl;
        cout << "3. Create shift supervisor data" << endl;
        cout << "4. Create team leader data" << endl;
        cout << "5. Display all employees" << endl;
        cout << "6. Quit" << endl;
        
        cin >> flag;
        
        switch(flag){
            case 1:{
                int tempNumber;
                int tempDate;
                
                cout << "Name:";
                cin >> tempName;
                cout << endl << "Employee number:";
                cin >> tempNumber;
                cout << endl << "Hire date (MMDDYYYY e.g. 12132997):";
                cin >> tempDate;
                
                company[counter] = new Employee(tempName, tempNumber, tempDate);
                counter ++;
                break;
                }
            case 2:
                {
                int tempNumber;
                int tempDate;
                int tempShift;
                double tempSalary;
                
                cout << "Name:";
                cin >> tempName;
                cout << endl << "Employee number:";
                cin >> tempNumber;
                cout << endl << "Hire date (MMDDYYYY e.g. 12132997):";
                cin >> tempDate;
                cout << endl << "Shift (1 or 2):";
                cin >> tempShift;
                cout << endl << "Salary:";
                cin >> tempSalary;
                
                company[counter] = new ProductionWorker(tempName, tempNumber, tempDate, tempShift, tempSalary);
                counter ++;
                break;
                }
            case 3:
            {
                int tempNumber;
                int tempDate;
                int tempShift;
                double tempSalary;
                double tempBonus;
                
                cout << "Name:";
                cin >> tempName;
                cout << endl << "Employee number:";
                cin >> tempNumber;
                cout << endl << "Hire date (MMDDYYYY e.g. 12132997):";
                cin >> tempDate;
                cout << endl << "Salary";
                cin >> tempSalary;
                cout << endl << "Bonus";
                cin >> tempBonus;
                
                company[counter] = new ShiftSupervisor(tempName, tempNumber, tempDate, tempSalary, tempBonus);
                counter ++;
                break;
            }
            case 4:
                
                int tempNumber;
                int tempDate;
                int tempShift;
                double tempPayrate;
                double tempBonus;
                int tempRequiredTrainingHours;
                int tempCompletedTrainingHours;
                
                cout << "Name:";
                cin >> tempName;
                cout << endl << "Employee number:";
                cin >> tempNumber;
                cout << endl << "Hire date (MMDDYYYY e.g. 12132997):";
                cin >> tempDate;
                cout << endl << "Pay rate:";
                cin >> tempPayrate;
                cout << endl << "Bonus:";
                cin >> tempBonus;
                cout << endl << "Required training hours: ";
                cin >> tempRequiredTrainingHours;
                cout << endl << "Completed training hours: ";
                cin >> tempCompletedTrainingHours;
                
                company[counter] = new TeamLeader(tempName, tempNumber, tempDate, tempShift, 3
                tempPayrate, tempBonus, tempRequiredTrainingHours, tempCompletedTrainingHours);
                counter ++;
                break;
            case 5:
                for(int i = 0; i < counter; i++){
                    company[i]->displayInfo();
                };
        }
        
    }while(flag != 6);
    
    delete [] company;
    delete [] tempName;
    
    return 0;
}

