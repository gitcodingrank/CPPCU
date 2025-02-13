#include <iostream>
using namespace std;


class Employee{
    public:
    int id;
    string name;
    double salary;

    Employee(int empId, string empName, double empSalary){
        id = empId;
        name = empName;
        salary = empSalary;
    }
};



int main(){

  //Pointer to Object: a pointer having the address of any object is known as pointer to object.

  Employee emp1 = Employee(34, "Chintu", 45999.99);

  Employee *ptr = &emp1;

  cout <<ptr<<endl;
  cout <<ptr->id<<endl;
  cout <<ptr->salary<<endl;
  cout <<ptr->name<<endl;

}