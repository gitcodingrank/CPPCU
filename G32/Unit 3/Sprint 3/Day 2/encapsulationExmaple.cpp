// Encapsulation: Making the members of the class as private

//Note: It is important to take the class as fully encapsulated.
//How to make a class as fully encapsulated:
//1. Make all the members of the class as private.
//2. Keep public getter and setter methods to access and modify the members of the class.
//3. Keep the constructor as well(Optional)

//gettter/setter methods: they are just like other methods in term of functionality just different by name.
//getter methods: they are used to access the members of the class that's its important to keep these methods as public
//setter methods: they are used to modify the members of the class that's its important to keep these methods as public

//Exammple:
#include <iostream>
using namespace std;

class Student{
    private:
    int studentRollNumber;
    string studentName;
    string studentCity;

    public:
    Student(){

    }

    Student(int rollNumber, string name,  string city){
        studentRollNumber = rollNumber;
        studentName = name;
        studentCity = city;
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

    //setter method

    void setStudentRollNumber(int rollNumber){
        studentRollNumber = rollNumber;
    }

    void setStudentName(string name){
        studentName = name;
    }

    void setStudentCity(string city){
        studentCity = city;
    }
};

int main(){

    Student student1 = Student(45, "Pawan", "Noida");
    cout <<student1.getStudentName()<<endl;
    cout <<student1.getStudentCity()<<endl;


    //update the value of any object member: setter methods:
    student1.setStudentName("Suresh");
    cout <<student1.getStudentName()<<endl;

    // Student student2;
    // student2.studentName = "Rohan";


}