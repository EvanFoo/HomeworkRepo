#include <cstdlib>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
#include <iostream>

using namespace std;

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
                for(int i = 0; i < numberOfEmployees; i++){
                    company[i]->displayInfo();
                };
        }
        
    }while(flag != 6);
    
    delete [] company;
    delete [] tempName;
    
    return 0;
}

