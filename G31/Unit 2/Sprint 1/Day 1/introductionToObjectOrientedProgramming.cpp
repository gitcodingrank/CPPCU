#include <iostream>
using namespace std;


//declaration of class:
class Student{
    public:
    //states/properties/arributes - how it looks
    int rollNo;
    string name;
    double marks;

    Student(){
        
    }

    Student(int studentRollNo, string studentName, double studentMarks){
        rollNo = studentRollNo;
        name = studentName;
        marks = studentMarks;
    }

    //behaviors/methods/features
    void printDetails(){
        cout <<"Student Name: "<<name<<"\n Student Roll Number: "<<rollNo<<"\n Student Marks: "<<marks<<endl;
    }
};

int main(){

  //class: it is like a blueprint/structure, using which you can create multiple objects.
  /*
  declaration of class:
  syntax: 
  class ClassName{
    1. how it looks - properties/states/attributes
    2. how it acts - behaviors/functionalities/features
  }
  */

  //object: object is real world entity(object) where it consists methods/behaviors and properties/states, you can create multiple object of a class.

  //crate of object:
  //syntax: ClassName objectName;
//   Student student1;
  
//   student1.name = "Pankaj";
//   student1.marks = 45.45;
//   student1.rollNo = 45;

//   student1.printDetails();

//   Student student2;
  
//   student2.name = "Sushil";
//   student2.marks = 89.45;
//   student2.rollNo = 34;

//   student2.printDetails();

  //Constructor Function: It helps to create object of a class, If you don't define any constructor then by default 'default constructor is created internally'
  
  /*
  Note: Constructor name is similar to class name but it doesn't return anything like function.
  Default constructor:
  
  class Student{
    public:
    string name;
    int marks;

    Student(){
     //default constructor
    }
  }
  
   Note: 
   1. we can have only one default constructor/class but can have any number of parameterized constructor.
   2. if you have defined parameterized constructor then default constructor will not create interanally.

   class Student{
    public:
    string name;
    int marks;

    //Parameterized Constructor
    Student(string studentName, int studentMarks){
     name = studentName;
     marks = studentMarks;
    }
  }

  */

//   Student student1 = Student(45, "Rakesh", 56.34);
//   Student student2 = Student(67, "Prince", 78.98);

// //   student1.printDetails();
// //   cout <<"-----------------------------"<<endl;
// //   student2.printDetails();

//    cout <<student1.name<<endl;
//    cout <<student1.marks<<endl;

    Student student;
    student.name = "Rohan";
    student.marks = 45.45;


}