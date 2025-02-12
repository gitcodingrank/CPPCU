#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
    string name;
    double salary;

    //default constructor
    Employee(){

    }

    Employee(int empId, string empName, double empSal){
        id = empId;
        name = empName;
        salary  = empSal;
    }

};

int main(){

  Employee emp1 = Employee(45, "Champak",45999.99);

  //Pointer to Object
  Employee *ptr = &emp1;
  
  cout <<ptr->id<<endl;
  cout <<ptr->name<<endl;
  cout <<ptr->salary<<endl;

}  