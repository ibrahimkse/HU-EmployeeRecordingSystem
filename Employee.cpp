//
// Created by ibrahim on 3.12.2021.
//

#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee() {}

Employee::Employee(int employeeNumber, int employeeType, const string &name, const string &surName, const string &title,
                   double salaryCoefficient, const string &dateOfBirth, const string &dateOfAppointment,
                   int lengthOfService) : employeeNumber(employeeNumber), employeeType(employeeType), name(name),
                                          surName(surName), title(title), salaryCoefficient(salaryCoefficient),
                                          dateOfBirth(dateOfBirth), dateOfAppointment(dateOfAppointment),
                                          lengthOfService(lengthOfService) {}
