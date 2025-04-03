#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstring>
using namespace std;

// ========================== Fully Encapsulated Employee Class ==========================
class Employee {
private:
    int id;
    char name[50];
    float salary;
    char department[30];
    char city[30];

public:
    // Constructor
    Employee() : id(0), salary(0.0f) {}

    // Getter & Setter Methods
    void setEmployee(int empId, const string &empName, float empSalary, const string &dept, const string &empCity) {
        id = empId;
        strncpy(name, empName.c_str(), sizeof(name) - 1);
        salary = empSalary;
        strncpy(department, dept.c_str(), sizeof(department) - 1);
        strncpy(city, empCity.c_str(), sizeof(city) - 1);
    }

    int getId() const { return id; }
    float getSalary() const { return salary; }
    string getDepartment() const { return string(department); }
    string getCity() const { return string(city); }

    void display() const {
        cout << left << setw(10) << id << setw(20) << name << setw(10) << salary << setw(15) << department << setw(15) << city << endl;
    }

    // Read/Write functions for binary file
    void writeToFile(ofstream &out) const {
        out.write(reinterpret_cast<const char *>(this), sizeof(Employee));
    }

    void readFromFile(ifstream &in) {
        in.read(reinterpret_cast<char *>(this), sizeof(Employee));
    }
};

// ========================== Abstract Class for Employee Operations ==========================
class EmployeeOperations {
public:
    virtual void addEmployee() = 0;
    virtual void getAllEmployees() = 0;
    virtual void getEmployeeById(int empId) = 0;
    virtual void updateEmployeeById(int empId) = 0;
    virtual void deleteEmployeeById(int empId) = 0;
    virtual void getEmployeesBySalaryRange(float minSalary, float maxSalary) = 0;
    virtual void getEmployeesByDepartment(const string &dept) = 0;
    virtual void getEmployeesByCity(const string &city) = 0;
};

// ========================== EmployeeManager (Abstract Implementation) ==========================
class EmployeeManager : public EmployeeOperations {
private:
    const string fileName = "employees.dat";

public:
    void addEmployee() override {
        Employee emp;
        int id;
        string name, dept, city;
        float salary;

        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, dept);
        cout << "Enter City: ";
        getline(cin, city);

        emp.setEmployee(id, name, salary, dept, city);

        ofstream outFile(fileName, ios::binary | ios::app);
        if (outFile) {
            emp.writeToFile(outFile);
            cout << "Employee added successfully.\n";
        } else {
            cout << "Error opening file.\n";
        }
        outFile.close();
    }

    void getAllEmployees() override {
        ifstream inFile(fileName, ios::binary);
        if (!inFile) {
            cout << "No records found.\n";
            return;
        }
        Employee emp;
        cout << left << setw(10) << "ID" << setw(20) << "Name" << setw(10) << "Salary" << setw(15) << "Department" << setw(15) << "City" << endl;
        cout << string(70, '-') << endl;
        while (inFile.read(reinterpret_cast<char *>(&emp), sizeof(Employee))) {
            emp.display();
        }
        inFile.close();
    }

    void getEmployeeById(int empId) override {
        ifstream inFile(fileName, ios::binary);
        if (!inFile) {
            cout << "No records found.\n";
            return;
        }
        Employee emp;
        while (inFile.read(reinterpret_cast<char *>(&emp), sizeof(Employee))) {
            if (emp.getId() == empId) {
                emp.display();
                return;
            }
        }
        cout << "Employee not found.\n";
        inFile.close();
    }

    void updateEmployeeById(int empId) override {
        fstream file(fileName, ios::binary | ios::in | ios::out);
        if (!file) {
            cout << "No records found.\n";
            return;
        }
        Employee emp;
        while (file.read(reinterpret_cast<char *>(&emp), sizeof(Employee))) {
            if (emp.getId() == empId) {
                cout << "Enter new Salary: ";
                float newSalary;
                cin >> newSalary;
                emp.setEmployee(emp.getId(), emp.getDepartment(), newSalary, emp.getDepartment(), emp.getCity());

                file.seekp(-static_cast<int>(sizeof(Employee)), ios::cur);
                file.write(reinterpret_cast<char *>(&emp), sizeof(Employee));
                cout << "Employee updated successfully.\n";
                file.close();
                return;
            }
        }
        cout << "Employee not found.\n";
        file.close();
    }

    void deleteEmployeeById(int empId) override {
        ifstream inFile(fileName, ios::binary);
        ofstream tempFile("temp.dat", ios::binary);
        Employee emp;
        bool found = false;
        while (inFile.read(reinterpret_cast<char *>(&emp), sizeof(Employee))) {
            if (emp.getId() == empId) {
                found = true;
            } else {
                emp.writeToFile(tempFile);
            }
        }
        inFile.close();
        tempFile.close();
        remove(fileName.c_str());
        rename("temp.dat", fileName.c_str());

        if (found)
            cout << "Employee deleted successfully.\n";
        else
            cout << "Employee not found.\n";
    }

    void getEmployeesBySalaryRange(float minSalary, float maxSalary) override {
        ifstream inFile(fileName, ios::binary);
        Employee emp;
        while (inFile.read(reinterpret_cast<char *>(&emp), sizeof(Employee))) {
            if (emp.getSalary() >= minSalary && emp.getSalary() <= maxSalary)
                emp.display();
        }
        inFile.close();
    }

    void getEmployeesByDepartment(const string &dept) override {
        ifstream inFile(fileName, ios::binary);
        Employee emp;
        while (inFile.read(reinterpret_cast<char *>(&emp), sizeof(Employee))) {
            if (emp.getDepartment() == dept)
                emp.display();
        }
        inFile.close();
    }

    void getEmployeesByCity(const string &city) override {
        ifstream inFile(fileName, ios::binary);
        Employee emp;
        while (inFile.read(reinterpret_cast<char *>(&emp), sizeof(Employee))) {
            if (emp.getCity() == city)
                emp.display();
        }
        inFile.close();
    }
};

// ========================== UI Class (Main Menu) ==========================
int main() {
    EmployeeManager manager;
    int choice, id;
    float minSalary, maxSalary;
    string dept, city;

    do {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Employee\n2. Get All Employees\n3. Get Employee by ID\n4. Update Employee\n5. Delete Employee\n";
        cout << "6. Get Employees by Salary Range\n7. Get Employees by Department\n8. Get Employees by City\n9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: manager.addEmployee(); break;
            case 2: manager.getAllEmployees(); break;
            case 3: cout << "Enter ID: "; cin >> id; manager.getEmployeeById(id); break;
            case 4: cout << "Enter ID: "; cin >> id; manager.updateEmployeeById(id); break;
            case 5: cout << "Enter ID: "; cin >> id; manager.deleteEmployeeById(id); break;
            case 6: cout << "Enter Salary Range: "; cin >> minSalary >> maxSalary; manager.getEmployeesBySalaryRange(minSalary, maxSalary); break;
            case 7: cout << "Enter Department: "; cin >> dept; manager.getEmployeesByDepartment(dept); break;
            case 8: cout << "Enter City: "; cin >> city; manager.getEmployeesByCity(city); break;
        }
    } while (choice != 9);
}
