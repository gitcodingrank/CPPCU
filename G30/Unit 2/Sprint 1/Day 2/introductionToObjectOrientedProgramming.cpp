#include <iostream>
using namespace std;


//Declaration of class:
class Student{

    public:
    //1. How it looks - properties/attributes/states
    int rollNo;
    string name;
    double marks;

    //Default Constructor
    Student(){

    }

    Student(int r, string n, double m){
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(int r, string n){
        rollNo = r;
        name = n;
    }

    //2. How it acts - behaviors/functionalities/features
    void printDetails(){
        cout <<"Student Name: "<<name<<"\nStudent Roll Number: "<<rollNo<<"\nStudent Marks: "<<marks<<endl;
    }
};


int main(){

  //class: It is a blueprint/model/structure which helps to create objects, you can create multiple object of a class.
  //Example: Bike Creation:
  // Model/Map/Blueprint - Bike Obejct Creation - Ride Bike
  /*
  Declaration of class:
  class ClassName{
     1. How it looks - properties/attributes/states
     2. How it acts - behaviors/functionalities/features
  }
  */

  //object: It is real world entity(object) which consists of states(how it looks) and behaviors(how it acts), and you can create multiple object of a class.

  //Declaration of object:
  //Syntax: ClassName objectName/variableName;

  Student student1;

  //adding the value
  student1.rollNo = 34;
  student1.name = "Raju";
  student1.marks = 452.56;

//   cout <<student1.name<<endl;
//   cout <<student1.marks<<endl;
  student1.printDetails();

  cout <<"----------------------------"<<endl;

  Student student2;

  //adding the value
  student2.rollNo = 35;
  student2.name = "Chintu";
  student2.marks = 99.99;

//   cout <<student2.name<<endl;
//   cout <<student2.marks<<endl;
  student2.printDetails();

  //How is your objects are creating? - with the help of constructor functions:
  //Constructor Function: its name is similar to class name and it doesn't return anthing, there are following types of constructor:
  //1. Default Contructor: constructor with no parameter
  /*
  class Student{
    public:
    string name;
    int marks;

    Student(){
        //default constructor
    }
  }

  Note: When you don't define any type of constructor inside the class then to create the obect of the class c++ internally creates default constructor and if you've defined it by yourself then it doesn't do this.
  
  */

  //2. Parameterized Constructor: Constructor with parameters
  //1. Default Contructor: constructor with no parameter
  /*
  class Student{
    public:
    string name;
    int marks;

    //Default Constructor
    Student(){
        
    }

    //Parameterized Constructor
    Student(string n, int m){
        name = n;
        marks = m;
    }

    //Parameterized Constructor
    Student(string n){
        name = n;
    }
  }

    Note: in a class, you can have one default constructor and any number of paramertized constructors.
 */

 //Object Creation with the help of Parameterized Constructor:
 Student student3 = Student(45, "Prakash", 45.99);
 
 student3.printDetails();
 cout <<"---------------------"<<endl;

 Student student4 = Student(45, "Champak");
 student4.printDetails();
}