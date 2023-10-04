#include<iostream>

using namespace std;

class employee {
private:
    int emp_num;
    float emp_comp;

public:
    // Default constructor
    employee() : emp_num(0), emp_comp(0) {}

    // Parameterized constructor
    employee(int empNum, float empComp) : emp_num(empNum), emp_comp(empComp) {}

    void setData();
    void display() const;
    void add(const employee& emp1, const employee& emp2);
};
//read the value of the past object  but cannot modify in the function
void employee::add(const employee& emp1, const employee& emp2) {
    int total_num;
    float total_comp;
    total_num = emp1.emp_num + emp2.emp_num;
    total_comp = emp1.emp_comp + emp2.emp_comp;
    cout << "The total number of employees: " << total_num << endl;
    cout << "The total compensation of employees: $" << total_comp << endl;
}

void employee::setData() {    
    cout << "\nEnter employee Number: ";
    cin >> emp_num;
    cout << "Enter employee Compensation: ";
    cin >> emp_comp;
    cout << endl;
}

void employee::display() const {
    cout << "Employee Number: " << emp_num << endl;
    cout << "Employee Compensation: $" << emp_comp << endl;
}

int main() {
    employee emp1, emp2, total;

    emp1.setData();
    emp2.setData();

    cout << "\nDetails of first employee: \n";
    emp1.display();
    cout << "\nDetails of second employee: \n";
    emp2.display();
    cout << "\nDetails of total number of employee and compensation: \n";
    total.add(emp1, emp2);

    cout << endl;
    return 0;
}
