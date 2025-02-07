#include <iostream>
#include <vector>
using namespace std;

//declaration of struct:

//Blueprint for creating the student object.
typedef struct Student{
    int rollNumber;
    string name;
    float marks;
}st;



int main(){

  //struct: it stands for 'structure' - It is used to store the different type of data in the single variable.

  //It is like a blueprint/structure which is used to create multiple object using same blueprint.

  /*
  Syntax:
  struct StructName{
    data_type member1,
    data_type member2,
    data_type member3,
    data_type member4,
  }
  Note: Naming for struct must follow PascalCaseNamingConvention
  
  */

  //Student struct object creation:
  /*
  Sytanx:
  struct Student studentStructVariableName;

  Example:
  struct Student stu1;

  Student studentStructVariableName;

  Example:
  Student stu1;

  st studentStructVariableName;

  Example:
  st stu1;
  */

//   struct Student stu1;
//   Student stu2;
//   st stu3;

  //How to add values for member: using dot(.) notation
  //Syntax: structVariableName.fieldName = value;

//   Student stu1;

  //adding the value to the fields
  
//   stu1.rollNumber = 56;
//   stu1.name = "Champak";
//   stu1.marks = 456.56;

    //Or
    // Student stu1 = {45, "Pravin", 67.67};

    //Or
    // Student stu1 = Student({45, "Pravin", 67.67});

    Student stu1;

    stu1.rollNumber = 56;
    stu1.name = "Champak";
    stu1.marks = 456.56;

  //How to access the value of struct: using dot(.) notation

    // cout <<stu1.name<<endl;
    // cout <<stu1.rollNumber<<endl;
    // cout <<stu1.marks<<endl;


    Student stu2;

    stu2.rollNumber = 78;
    stu2.name = "Kunal";
    stu2.marks = 350.56;

    // cout <<stu2.name<<endl;
    // cout <<stu2.rollNumber<<endl;
    // cout <<stu2.marks<<endl;


    // Student students[5];

    // students[0] = stu1;
    // students[1] = stu2;

    vector<Student> students;

    students.push_back(stu1);
    students.push_back(stu2);

    cout <<students[0].name<<endl;
    cout <<students[1].name<<endl;

    /*
    Student: Create an Employee struct with fields: employeeName, employeeSalary, employeeDepartment, employeeAddress, and perform the following operations:

    1. Add 10 different employee object to vector<Employee>, its better if you can take input for employee from the user.
    2. Find Print the Name of employees who belong to Delhi
    3. Find out the total salary given to the IT deparment.
    
    */

  

}