#include <iostream>
using namespace std;

class Employee {
    string name;
    long long basicSalary;
    long long bonus;

public:
    Employee()
    {
        name="aneri";
        basicSalary=200;
        bonus=0;
    }


    Employee(string n, long long basic, long b = 2000) {
        name = n;
        basicSalary = basic;
        bonus = b;
    }

    inline long long totalSalary() {
        return basicSalary + bonus;
    }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary() << endl;
        cout << "--------------------------" << endl;
    }
    void get_data();
};
void Employee::get_data()
{
    cout << "\nEnter details for Employee " << endl;

        cout << "Name: ";
        cin >> name;

        cout << "Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Bonus: ";
        cin >> bonus;


}
int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee* emp=new Employee[n];


    for(int i = 0; i < n; i++) {
       emp[i].get_data();

    }

    cout << "\nEmployee Payroll Details\n";

    for(int i = 0; i < n; i++) {
        emp[i].display();
    }
    return 0;

}
