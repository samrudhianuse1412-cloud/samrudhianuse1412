#include <iostream>
using namespace std;

class Employee
{
    int employee_id;
    string name;
    string designation;
    float basic_salary;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> employee_id;

        cout << "Enter Empioyee Name: ";
        cin >> name;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void putdata()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
    void calculatedata()
    {
        float tax =basic_salary*0.07;
        cout <<"tax=" << tax << endl;
    }
};

int main()
{
    Employee e;

    e.getData();
    e.putdata();
    e.calculatedata();

    return 0;
}
