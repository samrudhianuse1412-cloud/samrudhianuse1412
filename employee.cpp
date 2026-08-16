#include <iostream>
using namespace std;

class Employee
{
    int employee_id;
    string branch;
    string designation;
    float basic_salary;

public:
    void inputData()
    {
        cout << "Enter Employee ID: ";
        cin >> employee_id;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void calculateSalary()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Branch: " << branch << endl;
        cout << "Designation: " << designation << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};

int main()
{
    Employee e;

    e.inputData();
    e.calculateSalary();

    return 0;
}