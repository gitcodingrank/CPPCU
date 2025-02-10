#include <iostream>
using namespace std;


//Declaration of a class - blueprint for creating student object
class Student{
    public:
    //1. how to looks - properties/states/attributes
    int rollNo;
    string name;
    double marks;

    //Default Constructor
    Student(){

    }

    //Parameterized Constructor
    Student(int r, string n, double m){
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(int r, string n){
        rollNo = r;
        name = n;
    }

    //2. how to acts - behaviors/functionalites/features
    void printDetails(){
        cout << "\nStudent Name: "+name+"\nStudent Marks: "+to_string(marks)+"\nStudent Roll Number: "+to_string(rollNo)<<endl;
    }
};

int main(){

  //class: it is like a blueprint/structure to crate multiple object.
  /*
  Declaration of class
  class ClassName{
    //1. how to looks - properties/states/attributes

    //2. how to acts - behaviors/functionalites/features
  }
  Note: use PascalCaseNamingConvetion for class, struct, enums, and Union
  */

  //Object: It is real world entity(object) where it consits both states and behavior of class, and you can create any number of object of a class.
  /*
  Syntax:
  ClassName objectName;
  
  */

  //Creating the object:
//   Student student1;

//   //adding the value:
//   student1.name = "Champak";
//   student1.marks = 45.45;
//   student1.rollNo = 45;

//   student1.printDetails();

//   cout <<"------------------"<<endl;

//   Student student2;

//   student2.name = "Rishabh";
//   student2.marks = 90.99;
//   student2.rollNo = 56;

//   student2.printDetails();

  //Constructor Function: It helps us to create obejcts.
  //Without constructor, Object creation is not possible therefore c++ interanly uses default constructor to create the obejcts.
  
  /*
  Note: If you don't define any constructor then c++ define default constructor interanlly.

  Note: Construct name is similar to class Name with no return type
  Note: In you class, we can have one default constructor and any number of parameterized constructor.

  default constructor:

  class Student{
    public:

    int rollNo;
    string name;
    double marks;

    Student(){
    default constructor
    }

    void printDetails(){
        cout << "\nStudent Name: "+name+"\nStudent Marks: "+to_string(marks)+"\nStudent Roll Number: "+to_string(rollNo)<<endl;
    }
  };

  parameterized constructor:

  class Student{
    public:

    int rollNo;
    string name;
    double marks;

    Student(){
    default constructor
    }

    Student(int r, string n, double m){
        rollNo = r;
        name = n;
        marks = m;
    }

    void printDetails(){
        cout << "\nStudent Name: "+name+"\nStudent Marks: "+to_string(marks)+"\nStudent Roll Number: "+to_string(rollNo)<<endl;
    }
  };

    Note: If you've defined any constructor then c++ doesn't call default constructor.
  
  */

  Student student1 = Student(45, "Rakesh", 45.45);
  Student student2 = Student(47, "Chintu", 67.99);

  student1.printDetails();
  cout <<"-------------------------------"<<endl;
  student2.printDetails();

  Student student3 = Student(47, "Chintu");
  cout <<"-------------------------------"<<endl;
  student3.printDetails();

  //Constructor Overloading: At the time obejct creation, it calls according the to value passing to the constructor as arguments.

Student student4;

student2.name = "Rishabh";
student2.marks = 90.99;
student2.rollNo = 56;

string name1 = "name";
cout<<name1<<endl;
name1.erase(0,1);
cout<<name1<<endl;

}