//Encapsulation: Keeping all the data members and important function members of the class as private.

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

    Student(int rollNumber, string name, string city){
        this->studentRollNumber = rollNumber;
        this->studentName = name;
        this->studentCity = city;
    }

    //getter methods: to access the data for particular object.
    //Note:its important to keep getter and setter methods as public. 
    int getStudentRollNumber(){
        return this->studentRollNumber;
    }
    string getStudentName(){
        return this->studentName;
    }
    string getStudentCity(){
        return this->studentCity;
    }

    //setter methods: to modify the data for particular object
    void setStudetRollNumber(int rollNumber){
        this->studentRollNumber = rollNumber;
    }
    void setStudetName(string name){
        this->studentName = name;
    }
    void setStudentCity(string city){
        this->studentCity = city;
    }

    friend ostream& operator <<(ostream& out, Student& student){
        out <<"Id: "<<student.studentRollNumber<<" Name: "<<student.studentName<<" City: "<<student.studentCity;
        return out;
    }

    bool operator ==(Student& student){
        return this->studentRollNumber == student.studentRollNumber && this->studentName == student.studentName && this->studentCity == student.studentCity;
    }

};


int main(){

 Student student1(45, "Chaman", "Noida");
//  student1.studentRollNumber = 46;
cout <<student1.getStudentName()<<endl;

Student student2;
student2.setStudetRollNumber(45);
student2.setStudetName("Chaman");
student2.setStudentCity("Noida");

cout <<student2.getStudentName()<<endl;

cout <<student2<<endl;
cout <<student1<<endl;

cout <<((student1 == student2)?"Duplicate Student":"New Student") <<endl;

}

/*
Student Task:
Create a fully encapsulated Employee class with fields employeeId, employeeName, employeeDepartment, employeeSalary;


*/
