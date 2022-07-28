#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Employee.h"

using namespace std;

int main() {
    vector<Employee> employees;
    while (true) {
        cout << "____ Employee Recording System ____" << endl;
        cout << "Please select for the following Menu Operation:" << endl;
        cout << "1) Appointment of a new employee" << endl;
        cout << "2) Appointment of a transferred employee" << endl;
        cout << "3) Updating the title and salary coefficient of an employee" << endl;
        cout << "4) Deleting of an employee" << endl;
        cout << "5) Listing the information of an employee" << endl;
        cout << "6) Listing employees ordered by employee number" << endl;
        cout << "7) Listing employees ordered by appointment date" << endl;
        cout << "8) Listing employees appointed after a certain date" << endl;
        cout << "9) Listing employees assigned in a given year" << endl;
        cout << "10) Listing employees born before a certain date" << endl;
        cout << "11) Listing employees born in a particular month" << endl;
        cout << "12) Listing the information of the last assigned employee with a given title" << endl;
        cout << "13) Exit Program" << endl;
        int menuSelection;
        cin >> menuSelection;
        int employeeNumber;
        int employeeType;
        string employeeName;
        string employeeSurName;
        string employeeTitle;
        double employeeSalaryCoefficient;
        string employeeDateOfBirth;
        string employeeDateOfAppointment;
        int employeeLengthOfService;
        if (menuSelection > 13 || menuSelection < 1) {
            cout << "Please enter a number between 1 and 13!" << endl;
            continue;
        }
        if (menuSelection == 1) {
            cout << "your selection is: " << menuSelection << endl;
            cout << "Please type the employee number: " << endl;
            cin >> employeeNumber;
            bool isHere = false;
            for (Employee e:employees) {
                if ( e.employeeNumber == employeeNumber){
                    isHere = true;
                    cout << "There is an employee with this number!" << endl;
                }
            }
            if (!isHere){
                cout << "Please type the employee type: " << endl;
                cin >> employeeType;
                cout << "Please type the employee name: " << endl;
                cin >> employeeName;
                cout << "Please type the employee surname: " << endl;
                cin >> employeeSurName;
                cout << "Please type the title: " << endl;
                cin >> employeeTitle;
                cout << "Please type the salary coefficient: " << endl;
                cin >> employeeSalaryCoefficient;
                cout << "Please type the birth date: " << endl;
                cin >> employeeDateOfBirth;
                cout << "Please type the appointment date: " << endl;
                cin >> employeeDateOfAppointment;
                cout << "Please type the length of service days: " << endl;
                cin >> employeeLengthOfService;
                Employee e(employeeNumber, employeeType, employeeName,employeeSurName,employeeTitle,
                           employeeSalaryCoefficient, employeeDateOfBirth,employeeDateOfAppointment ,
                           employeeLengthOfService);
                employees.push_back(e);
            }
        } else if (menuSelection == 2) {
            cout << "your selection is: " << menuSelection << endl;
            cout << "Please type the employee number: " << endl;
            cin >> employeeNumber;
            bool isHere = false;
            for (Employee e:employees) {
                if ( e.employeeNumber == employeeNumber){
                    isHere = true;
                    cout << "There is an employee with this number!" << endl;
                }
            }
            if (!isHere){
                cout << "Please type the employee type: " << endl;
                cin >> employeeType;
                cout << "Please type the employee name: " << endl;
                cin >> employeeName;
                cout << "Please type the employee surname: " << endl;
                cin >> employeeSurName;
                cout << "Please type the title: " << endl;
                cin >> employeeTitle;
                cout << "Please type the salary coefficient: " << endl;
                cin >> employeeSalaryCoefficient;
                cout << "Please type the birth date: " << endl;
                cin >> employeeDateOfBirth;
                cout << "Please type the appointment date: " << endl;
                cin >> employeeDateOfAppointment;
                cout << "Please type the length of service days: " << endl;
                cin >> employeeLengthOfService;
                Employee e(employeeNumber, employeeType, employeeName,employeeSurName,employeeTitle,
                           employeeSalaryCoefficient, employeeDateOfBirth,employeeDateOfAppointment ,
                           employeeLengthOfService);
                employees.push_back(e);
            }
        } else if (menuSelection == 3) {
            cout << "your selection is: " << menuSelection << endl;
            cout << "Please type the employee number: " << endl;
            cin >> employeeNumber;
            bool isHere = false;
            for (Employee e:employees) {
                if ( e.employeeNumber == employeeNumber){
                    isHere = true;
                    cout << "Please type the title: " << endl;
                    cin >> employeeTitle;
                    cout << "Please type the salary coefficient: " << endl;
                    cin >> employeeSalaryCoefficient;
                    e.title = employeeTitle;
                    e.salaryCoefficient = employeeSalaryCoefficient;
                    cout << "Updating done." << endl;
                }
            }
            if (!isHere){
                cout << "There is not an employee with this number!" << endl;
            }
        } else if (menuSelection == 4) {
            cout << "your selection is: " << menuSelection << endl;
            cout << "Please type the employee number: " << endl;
            cin >> employeeNumber;
            bool isHere = false;
            for (Employee e:employees) {
                if ( e.employeeNumber == employeeNumber){
                    isHere = true;
                    cout << "Deletion done." << endl;
                }
            }
            if (!isHere){
                cout << "There is not an employee with this number!" << endl;
            }

        } else if (menuSelection == 5) {
            cout << "your selection is: " << menuSelection << endl;
            cout << "Please type the employee number: " << endl;
            cin >> employeeNumber;
            bool isHere = false;
            for (Employee e:employees) {
                if ( e.employeeNumber == employeeNumber){
                    isHere = true;
                    cout << "INFORMATION: " << endl;
                    cout << "Employee Number: " << e.employeeNumber << endl;
                    cout << "Employee Type: " << e.employeeType << endl;
                    cout << "Employee Name: " << e.name << endl;
                    cout << "Employee Surname: " << e.surName << endl;
                    cout << "Employee Title: " << e.title << endl;
                    cout << "Employee Salary Coefficient: " << e.salaryCoefficient << endl;
                    cout << "Employee Date of birth: " << e.dateOfBirth << endl;
                    cout << "Employee Date of appointment: " << e.dateOfAppointment << endl;
                    cout << "Employee Length of Service: " << e.lengthOfService << endl;
                    cout << "INFORMATION LISTED. " << endl;
                }
            }
            if (!isHere){
                cout << "There is not an employee with this number!" << endl;
            }
        } else if (menuSelection == 6) {
            cout << "your selection is: " << menuSelection << endl;
            for (Employee e:employees) {
                cout << "Employee: " << e.employeeNumber << " name-surname: " << e.name << " " << e.surName << endl;
            }
            cout << "Employees listed." << endl;

        } else if (menuSelection == 7) {
            cout << "your selection is: " << menuSelection << endl;
            for (Employee e:employees) {
                cout << "Employee: " << e.employeeNumber << " Date: " << e.dateOfAppointment << endl;
            }
            cout << "Employees listed." << endl;

        } else if (menuSelection == 8) {
            cout << "your selection is: " << menuSelection << endl;
            string date;
            cout << "Enter the date for list employees" << endl;
            cin >> date;
            for (Employee e:employees) {
                cout << "Employee: " << e.employeeNumber << " Date: " << e.dateOfAppointment << endl;
            }
            cout << "Employees listed." << endl;

        } else if (menuSelection == 9) {
            cout << "your selection is: " << menuSelection << endl;
            string year;
            cout << "Enter the year for list employees" << endl;
            cin >> year;
            for (Employee e:employees) {
                cout << "Employee: " << e.employeeNumber << " Date: " << e.dateOfAppointment << endl;
            }
            cout << "Employees listed." << endl;

        } else if (menuSelection == 10) {
            cout << "your selection is: " << menuSelection << endl;
            string date;
            cout << "Enter the date for list employees" << endl;
            cin >> date;
            for (Employee e:employees) {
                cout << "Employee: " << e.employeeNumber << " Date: " << e.dateOfBirth << endl;
            }
            cout << "Employees listed." << endl;

        } else if (menuSelection == 11) {
            cout << "your selection is: " << menuSelection << endl;
            string month;
            cout << "Enter the month for list employees" << endl;
            cin >> month;
            for (Employee e:employees) {
                cout << "Employee: " << e.employeeNumber << " Date: " << e.dateOfBirth << endl;
            }
            cout << "Employees listed." << endl;

        } else if (menuSelection == 12) {
            cout << "your selection is: " << menuSelection << endl;
            string givenTitle;
            cout << "Enter the title for employee" << endl;
            cin >> givenTitle;
            for (Employee e:employees) {
                if (e.title == givenTitle){
                    cout << "INFORMATION: " << endl;
                    cout << "Employee Number: " << e.employeeNumber << endl;
                    cout << "Employee Type: " << e.employeeType << endl;
                    cout << "Employee Name: " << e.name << endl;
                    cout << "Employee Surname: " << e.surName << endl;
                    cout << "Employee Title: " << e.title << endl;
                    cout << "Employee Salary Coefficient: " << e.salaryCoefficient << endl;
                    cout << "Employee Date of birth: " << e.dateOfBirth << endl;
                    cout << "Employee Date of appointment: " << e.dateOfAppointment << endl;
                    cout << "Employee Length of Service: " << e.lengthOfService << endl;
                    cout << "INFORMATION LISTED. " << endl;
                }
            }
        } else if (menuSelection == 13) {
            cout << "your selection is: " << menuSelection << " EXIT" <<  endl;
            exit(0);
        }
    }
    return 0;
}
