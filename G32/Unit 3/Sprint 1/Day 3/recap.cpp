#include <iostream>
using namespace std;

//static/non-static members of the class:
//static - can access using both className, and object.

// class A{
//     public:
//     static int value1;
//     static int value2;

//     int result;

// };

// int A::value1;
// int A::value2;

class Student{
    public:
    static int studentCount;
    static int courseEnrolledCount;
    string name;
    int rollNo;
    string city;

    Student(string n, int r, string c){
        studentCount++;
        name = n;
        rollNo = r;
        city = c;
    }

    string enrollIntoCourse(){
        courseEnrolledCount++;
        return "Enrolled Into Course Successfully";
    }

};

int Student::studentCount; //defatul 0
int Student::courseEnrolledCount; //defatult 0

int main(){

    // A::value1;
    // A::value2;

    // A a1, a2, a3;

    // cout <<a1.value1<<endl;
    // cout <<a2.value1<<endl;
    // cout <<a2.value1<<endl;

    // // A::result;
    // cout <<a1.result<<endl;


    /*
    Problem Statement: 
    Create a class Student with following members:
    static int studentCount;
    static int courseEnrolledCount;
    string name;
    int rollNo;
    int city;


    string enrollIntoCourse(){
        return "Enrolled Into Course Successfully";
    }

    */


    //Student Creation Means: Student Registration
    Student s1 = Student("Student1", 45, "Noida");
    Student s2 = Student("Student1", 45, "Noida");
    Student s3 = Student("Student1", 45, "Noida");
    Student s4 = Student("Student1", 45, "Noida");
    Student s5 = Student("Student1", 45, "Noida");
    Student s6 = Student("Student1", 45, "Noida");

    cout <<"Registered Student Count: "<<Student::studentCount<<endl;
    cout <<"Registered Enrolled in Course Count: "<<Student::courseEnrolledCount<<endl;

    s1.enrollIntoCourse();
    s3.enrollIntoCourse();
    s5.enrollIntoCourse();

    cout <<"Registered Enrolled in Course Count: "<<Student::courseEnrolledCount<<endl;



}