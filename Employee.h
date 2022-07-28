//
// Created by ibrahim on 3.12.2021.
//

#ifndef ASSIGNMENT2_EMPLOYEE_H
#define ASSIGNMENT2_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
public:
    Employee();

    int employeeNumber;
    int employeeType;
    string name;
    string surName;
    string title;
    double salaryCoefficient;
    string dateOfBirth;
    string dateOfAppointment;
    int lengthOfService;

    Employee(int employeeNumber, int employeeType, const string &name, const string &surName, const string &title,
             double salaryCoefficient, const string &dateOfBirth, const string &dateOfAppointment, int lengthOfService);
};


#endif //ASSIGNMENT2_EMPLOYEE_H
