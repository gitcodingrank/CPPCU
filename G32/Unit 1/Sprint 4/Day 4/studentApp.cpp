#include <iostream>
#include <vector>
using namespace std;

/*
    Student: Create an Employee struct with fields: employeeName, employeeSalary, employeeDepartment, employeeAddress, and perform the following operations:

    1. Add 10 different employee object to vector<Employee>, its better if you can take input for employee from the user.
    2. Find Print the Name of employees who belong to Delhi
    3. Find out the total salary given to the IT deparment.
*/

struct Employee{
    string employeeName;
    double employeeSalary;
    string employeeDepartment;
    string employeeAddress;
};


vector<Employee> employeeList;

string addEmployee(){
    Employee employee;
    cin.ignore();
    cout <<"Enter Name: ";
    getline(cin, employee.employeeName);

    cout <<"Enter Salary: ";
    cin>>employee.employeeSalary;

    cout <<"Enter Departement: ";
    cin>>employee.employeeDepartment;

    cin.ignore();
    cout <<"Enter Address: ";
    getline(cin, employee.employeeAddress);

    employeeList.push_back(employee);
    return "Employee has added successfully";
}

void getAllEmployees(){
    for(Employee emp: employeeList){
        cout <<"-------------------------------------"<<endl;
        cout <<"Employee Name: "<<emp.employeeName<<endl;
        cout <<"Employee Salary: "<<emp.employeeSalary<<endl;
        cout <<"Employee Department: "<<emp.employeeDepartment<<endl;
        cout <<"Employee Address: "<<emp.employeeAddress<<endl;
        cout <<"-------------------------------------"<<endl;
    }
}

void menu(){
    cout <<"1. Add Employee"<<endl;
    cout <<"2. Get All Employees"<<endl;
    cout <<"3. Exit"<<endl;
    cout <<"Enter Your Choice: ";
}

int main(){

    bool flag = true;

    while(flag){
        menu();
        int choice;
        cin>>choice;

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2: 
            getAllEmployees();
            break;
        case 3:
            flag = false;
            break;
        default:
            cout <<"Invalid Choice, Please Enter Again"<<endl;
            break;
        }
    }

}