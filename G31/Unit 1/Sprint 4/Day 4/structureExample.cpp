#include <iostream>
#include <vector>
using namespace std;


//declaration of struct:
//PascalCaseNamingConvention
// struct Student{
//     int rollNumber;
//     string name;
//     float marks;
// };

typedef struct Employee{
    string name;
    double salary;
    string department;
    string address;

    Employee(string n, double s, string d, string a){
        cout <<"Constructor Called"<<endl;
        name = n;
        salary = s;
        department = d;
        address = a;
    }

}Emp;


int main(){

  //struct: it stands for structure -it is used to store different type of data in the in single variable.
  /*
    Syntax:
        struct structureExample
        {
            data
        };
  */

  //Example:

  //Creation of struct object:
  //Syntax: struct StructName variableName;
//   struct Student stu1;

//   //adding the data using dot(.) notation
//   stu1.rollNumber = 4534;
//   stu1.name = "Champak Lal";
//   stu1.marks = 450.56; 
   
//   //Access the data from structs: using dot (.) notation
//   //Syntax: structVariableName.member/variable
//   cout <<stu1.name<<endl;
//   cout <<stu1.rollNumber<<endl;
//   cout <<stu1.marks<<endl;


//   cout <<"-----------------"<<endl;

//   struct Student stu2;
//   stu2.name = "Anurag Goyal";
//   stu2.rollNumber = 5343;
//   stu2.marks = 340.23;

//   cout <<stu2.name<<endl;
//   cout <<stu2.rollNumber<<endl;
//   cout <<stu2.marks<<endl;

  /*
  Student: Create an Employee struct with fields: employeeName, employeeSalary, department, address, and perform the following task:

  1. Create atleast 5 different objects of Employee struct and put them inside vector<Employee>
  2. Print the Name of employee from vector<Employee> in seperate line
  3. Print the name of those employees who are working in IT department.

  */

  //Employee empList[size];
//   vector<Employee> empList;

//   Employee emp1;
//   emp1.name = "Pawan";
//   emp1.salary = 453424.56;
//   emp1.department = "IT";
//   emp1.address = "Noida"; 

//   empList.push_back(emp1);

//   Employee emp2;
//   emp2.name = "Rakesh";
//   emp2.salary = 56001.99;
//   emp2.department = "HR";
//   emp2.address = "Delhi";

//   empList.push_back(emp2);

//   Employee emp3;
//   emp3.name = "Anurag";
//   emp3.salary = 78000.99;
//   emp3.department = "IT";
//   emp3.address = "Haryana";

//   empList.push_back(emp3);


//   cout <<empList.size()<<endl;

//   for(int i=0;i<empList.size();i++){
//         cout <<empList[i].name<<endl;
//   }

//   for(int i=0;i<empList.size();i++){
//     if(empList[i].department=="IT"){
//         cout <<empList[i].name<<endl;
//     }
// }

/*
Student Task: Find out the total salary given to IT deparment employees
*/

// Emp emp1 = {"Rakesh", 4534.34, "IT", "Noida"};
// cout <<emp1.name<<endl;

// Emp emp1 = Emp({"Rakesh", 4534.34, "IT", "Noida"});
// cout <<emp1.name<<endl;

// Emp emp1 =  Employee("Rakesh", 4534.34, "IT", "Noida");
// cout <<emp1.name<<endl;






  


}