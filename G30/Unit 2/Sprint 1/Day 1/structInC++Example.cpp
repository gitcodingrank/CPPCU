#include <iostream>
#include <vector>
using namespace std;

//Declaration of Structs:
// typedef struct Student{
//     int rollNo;
//     string name;
//     double marks;
// }st;

// typedef struct Student{
//     int rollNo;
//     string name;
//     double marks;

//     Student(int r, string n, double m){
//         rollNo = r;
//         name = n;
//         marks = m;
//    }
// } st;

struct Employee{
    int employeeId;
    string employeeName;
    string employeeDepartment;
    double employeeSalary;

    //default constructor
    Employee(){
        
    }

    //parameterized constructor
    Employee(int empId, string empName, string empDept, double empSal){
        employeeId = empId;
        employeeName = empName;
        employeeSalary = empSal;
        employeeDepartment = empDept;
    }
};

int main(){

   //struct: It stands for 'Structure', which is used to store different type of data in a single variable.

   //Declaration for struct(Structure)
   /*
   Syntax:
   struct StructName{
    //members
    data_type variableName/memberName;
    data_type variableName/memberName;
    data_type variableName/memberName;
    data_type variableName/memberName;
    data_type variableName/memberName;
   }
   */

   //struct: It is like a blueprint/structure to create multiple structure/object.

   //struct object creation:

   //Student struct object1 as stu1
//    Student stu1;

//    //stu1 fields/members initialization
//    stu1.name = "Pawan";
//    stu1.rollNo = 45;
//    stu1.marks = 45.45;

//    cout <<stu1.name<<endl;
//    cout <<stu1.rollNo<<endl;
//    cout <<stu1.marks<<endl;

//     cout <<"--------------------"<<endl;
//    //Student struct object2 as stu2

//    Student stu2;

//    //stu2 fields/members initialization
//    stu2.name = "Rohit";
//    stu2.rollNo = 78;
//    stu2.marks = 99.99;

//    cout <<stu2.name<<endl;
//    cout <<stu2.rollNo<<endl;
//    cout <<stu2.marks<<endl;

/*
Different way of struct object creation:
struct Student stu1;
or 
Student stu1;
or
using typedef
st stu1;
*/

// struct Student stu1;
// Student stu2;
// st stu3;

/*
Different way of struct object members initialization:
struct Student stu1 = {45, "Rakesh", 67.99};
Student stu1 = {45, "Rakesh", 67.99};
st stu1 = {45, "Rakesh", 67.99};

or
using constructor function: it helps to create the object of struct.
-construct function name is similar to struct name but it doesn't return anything.

struct Student{
    int rollNo;
    string name;
    double marks;

    Student(int r, string n, double m){
        rollNo = r;
        name = n;
        marks = m;
   }
};

Student stu1 = Student(45, "Rakesh", 78.99);

*/

//Exmaples:
// struct Student stu1 = {45, "Chintu", 56.56};
// cout <<stu1.name<<endl;

// Student stu1 = {45, "Chintu", 56.56};
// cout <<stu1.name<<endl;

//using typedef
// st stu1 = {45, "Chintu", 56.56};
// cout <<stu1.name<<endl;

//using constructor function:
// Student student = Student(45, "Rakesh", 78.99);
// cout <<student.name<<endl;

// st student = Student(45, "Rakesh", 78.99);
// cout <<student.name<<endl;


/*
Student Task: Create an Employee struct with fields employeeId, employeeName, employeeDepartment, employeeSalary, and do following operation:
1. create 2 objects without constructor function
2. create 2 objects with constructor function

*/

//1. create 2 objects without constructor function

Employee emp1 = {45, "Rakesh", "IT", 563434.23};
Employee emp2 = {46, "Suman", "SALES", 56345.99};

Employee emp3;
emp3.employeeName = "Chaman";
emp3.employeeId = 57;
emp3.employeeSalary = 89000.99;
emp3.employeeDepartment = "IT";

//Note: but to create the object, internally default constructor is being used if you've not defined explictly.

//2. create 2 objects with constructor function

Employee emp4 = Employee(78, "Rohan", "IT", 45342.23);
Employee emp5 = Employee(81, "Raju", "Marketing", 673423.23);

//Adding above objects to array or vector:

// int nums[10];
// nums[0] = 45;
// nums[1] = 45;

Employee empList[10];
empList[0] = emp1;
empList[1] = emp2;
empList[2] = emp3;
empList[3] = emp4;
empList[4] = emp5;


// cout <<empList[1].employeeName<<endl;
for(int i=0;i<5;i++){
    cout <<empList[i].employeeName<<" ";
}

vector<Employee> emps;
emps.push_back(emp1);
emps.push_back(emp2);
emps.push_back(emp3);
emps.push_back(emp4);
emps.push_back(emp5);

for(Employee em: emps){
    cout <<em.employeeName<<" ";
}

/*
Student Task: Create a Mobile structs with fields: mobileName, mobilePrice, companyName and perform follwoing tasks
1. create 5 Mobile struct obejcts
2. add those objects to vector<Mobile> mobileList;

*/

}