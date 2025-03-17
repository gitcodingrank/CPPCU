//Type Conversion with respect Primitive to Class Type and vice versa.

//1. Basic(Primitive) to Class Type
// #include <iostream>
// using namespace std;

// class Number{
//     int value;
//     public:
//     Number(int v){
//         value = v;
//     }

//     int getValue(){
//         return value;
//     }
// };


// int main(){

//     int num = 45; //primitive variable as num
//     Number obj = num; //object variable as obj - Implicit Conversion

// }


//2. Class Type to Primitive Type: (using conversion function)
//using conversion function:

// #include <iostream>
// using namespace std;

// class Number {
//     int value;
// public:
//     Number(int x) { value = x; }  // Constructor

//     operator int() { return value; }  // Conversion function
// };

// int main() {
//     Number obj = 50; //Basic to Class Type(Implicitly) int ---> Number
//     int num = obj;  // Implicit conversion (Number → int)
//     cout << "Converted value: " << num << endl;
//     return 0;
// }

//3. Class Type to Another Class Type: using coversion function
// #include <iostream>
// using namespace std;

// class Square {
//     int side;
// public:
//     Square(int s) { side = s; }
//     int getSide() { return side; }
// };

// class Rectangle {
//     int width, height;
// public:
//     Rectangle(int w, int h) : width(w), height(h) {}

//     operator Square() { // Conversion function
//         return Square(min(width, height));
//     }
// };

// int main() {
//     Rectangle rect(10, 6);
//     Square sq = rect;  // Implicit conversion (Rectangle → Square)
//     cout << "Side of Square: " << sq.getSide() << endl;
//     return 0;
// }

//4. Class Type to Another Class Type: using constructor function
// #include <iostream>
// using namespace std;

// class Rectangle {
//     int width, height;
// public:
//     Rectangle(int w, int h) : width(w), height(h) {}

//     int getWidth() { return width; }
//     int getHeight() { return height; }
// };

// class Square {
//     int side;
// public:
//     Square(Rectangle r) {  // Conversion constructor
//         side = min(r.getWidth(), r.getHeight());
//     }
//     void display() { cout << "Side of Square: " << side << endl; }
// };

// int main() {
//     Rectangle rect(8, 5);
//     Square sq = rect;  // Implicit conversion (Rectangle → Square)
//     sq.display();
//     return 0;
// }

//Student Task:
//basic to class type:

#include <iostream>
using namespace std;

class Grade{
    char grade;
    public:
    Grade(char g){
        grade = g;
    }
    char getGrade(){
        return grade;
    }
};

class Student{
    int marks;
    public:
    Student(int m){
        marks = m;
    }

    int getMarks(){
        return marks;
    }
    operator int(){
        return marks;
    }
    operator Grade(){
        if(marks >= 90) return Grade('A');
        else if(marks >= 80) return Grade('B');
        else if(marks >= 70) return Grade('C');
        else if(marks >= 60) return Grade('D');
        else return Grade('F');
    }
};

int main(){

    //basic to class Type:
    // int marks = 90;
    // Student student = marks;

    //Class Type to Basic Type:
    // int m = student;

    Student student(60);
    Grade g = student;

    cout <<g.getGrade()<<endl;
    
}


/*
Student Task: Create a class Student with following non-static members:
int studentId;
string studentName;
string studentCity;

Your Task: Create a console based application which can perform following tasks
1. Add Student
2. Get All Students
3. Exit

//Student Storage - vector<Student> or Student studnets[]



*/
