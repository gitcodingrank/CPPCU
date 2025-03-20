//Encapsulation: It is a fundamental feature of object oriented programming where it is used to make all the members of the class as private, so that outside the class none can access those members directly.

//Example:
#include <iostream>
using namespace std;

// class Student{
//     private:
//     int studentRollNumber;
//     string studentName;
//     string studentCity;
// };

//Above class is not fully encpsulated class therefore, you're not able to access and modify any member of the class.

//how fully encapsulated class looks like:
//1. make all the members of the class as private.
//2. keep getter and setter methods as public so that you can access and modify the members of the class.
//3. keep required constructors as well(optional)

//getter/setter methods: they are similar to other methods/function in terms of functionality but different in term of name
//Note: getter methods name will start with get_fullyQulifiedClassMemberName, and same for stter methods set_fullyQulifiedClassMemberName

/*
syntax of getter and setter methods:

//getter methods: made for accessing.
return_type getStudentName(){
}

//setter methods: - made for modification.
void setStudentName(string name){
    this->studentName = name;
}

*/

//Example: fully encapsulated class
class Student{
    private:
    int studentRollNumber;
    string studentName;
    string studentCity;

    public:

    //Default Constructor: Student student;
    Student(){

    }
    //Parameterized Constructor: Student student(45, "Rakesh", "Noida")
    Student(int rollNumber, string name, string city){
        this->studentRollNumber = rollNumber;
        this->studentName = name;
        this->studentCity = city;
    }
    //getter methods:
    int getStudentRollNumber(){
        return studentRollNumber;
    }
    string getStudentName(){
        return studentName;
    }
    string getStudentCity(){
        return studentCity;
    }
    //setter methods:
    void setStudentRollNumber(int rollNumber){
        this->studentRollNumber = rollNumber;
    }
    void setStudentName(string name){
        this->studentName = name;
    }
    void setStudentCity(string city){
        this->studentCity = city;
    }
};

int main(){

 Student student;

 //No Modification Allowed
//  student.studentRollNumber = 45;
//  student.studentName = "Rakesh";
//  student.studentCity = "Delhi";

 //No Accessing Allowed
//  cout <<student.studentName<<endl;
//  cout <<student.studentCity<<endl;
//  cout <<student.studentRollNumber<<endl;


//Now using setter and getter methods:
Student student1;
//student1 object members you're modifying using setter methods
student1.setStudentRollNumber(45);
student1.setStudentName("Chaman");
student1.setStudentCity("Noida");

cout <<student1.getStudentRollNumber()<<endl;
cout <<student1.getStudentName()<<endl;
cout <<student1.getStudentCity()<<endl;

cout <<"-------------------"<<endl;
student1.setStudentName("Pawan");

cout <<student1.getStudentRollNumber()<<endl;
cout <<student1.getStudentName()<<endl;
cout <<student1.getStudentCity()<<endl;


Student student2 = Student(56, "Sunil", "Delhi");
cout <<"-------------------"<<endl;
cout <<student2.getStudentRollNumber()<<endl;
cout <<student2.getStudentName()<<endl;
cout <<student2.getStudentCity()<<endl;


Student *student3 = new Student(89, "Chintu", "Mumbai");
cout <<"-------------------"<<endl;
cout <<student3->getStudentRollNumber()<<endl;
cout <<student3->getStudentName()<<endl;
cout <<student3->getStudentCity()<<endl;

/*
Student Task:
Create a fully encapsulated Employee class with members employeeId, employeeName, employeeSalary, employeeDepartment, and create 3 object with different approach like using default constructor, parameterized and using pointer
*/

}