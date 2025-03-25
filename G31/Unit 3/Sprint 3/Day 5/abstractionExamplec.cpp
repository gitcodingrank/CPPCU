/*
Abstraction: It is one of the fundametal feature of object oriented programming, where it is achieved by showing only the essential information to the user and hiding the complexity

It can be achieved by abstract class in c++:
Abstract: It is like a normal class but you can not create the object of this class, and have atleast one pure virtual function.

pure virtual function: they are unimplemented function inside the abstract class.
*/

#include <iostream>
#include <vector>
using namespace std;


class Student{
    private:
    int studentId;
    string studentName;
    string studentCity;

    public:
    Student(){

    }
    Student(int id, string name, string city){
        this->studentId = id;
        this->studentName = name;
        this->studentCity = city;
    }

    //getter methods
    int getStudentId(){
        return this->studentId;
    }
    string getStudentName(){
        return this->studentName;
    }
    string getStudentCity(){
        return this->studentCity;
    }

    //setter method:
    void setStudentId(int id){
        this->studentId = id;
    }
    void setStudentName(string name){
        this->studentName = name;
    }
    void setStudentCity(string city){
        this->studentCity = city;
    }
};

vector<Student> studentList;

//abstract class:
class StudentService{
    //pure virtual function
    virtual void addStudent(int id, string name, string city) = 0;
    virtual Student getStudentById(int id) = 0;
};

class StudentServiceImplementation: public StudentService{
    public:
    void addStudent(int id, string name, string city) override{
        Student newStudent = Student(id, name, city);
        studentList.push_back(newStudent);
        cout <<"Student has added successfully."<<endl;
    }

    Student getStudentById(int id) override{
        Student newStudent;
        for(int i=0;i<studentList.size();i++){
            if(studentList[i].getStudentId()==id){
                newStudent = studentList[i];
            }
        }
        return newStudent;
    }

};


int main(){


 //StudentService studentService; //Can't object of abstract class
 StudentServiceImplementation studentImpl;
 studentImpl.addStudent(45, "Rakesh", "Noida");
 cout <<studentImpl.getStudentById(45).getStudentName()<<endl;


}

/*

Student Registration System - Application

                    UI(Student Service)
                         |
                    Implementation Class (Business Logic)
                         |
                    Data Accees Layer
                        |
                        DB



*/
