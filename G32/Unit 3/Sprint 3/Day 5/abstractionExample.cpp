//Abstraction: Show the essential information to the user and hiding the complexity.
//You can achieve asbtraction using abstract class(atleast one pure virtual function)
//Abstract class: It is similar to other class but you can't create the object of that class is known as abstract class.

//Exmaple:
// #include<iostream>
// using namespace std;

// class Shape {
// public:
//     virtual void area() = 0;  // Pure virtual function - unimplemented method
// };

// class Circle : public Shape {
//     int radius;
// public:
//     Circle(int r) : radius(r) {}
//     void area() override {
//         cout << "Area of Circle: " << 3.14 * radius * radius << endl;
//     }
// };

// class Rectangle : public Shape {
//     int length, breadth;
// public:
//     Rectangle(int l, int b) : length(l), breadth(b) {}
//     void area() override {
//         cout << "Area of Rectangle: " << length * breadth << endl;
//     }
// };

// int main() {
//     Shape* s;
//     Circle c(5);
//     Rectangle r(4, 6);

//     s = &c;
//     s->area();

//     s = &r;
//     s->area();

//     return 0;
// }


/*

    Apllication - Student Registration System
                      |
            UI(Frontend) - Abstraction
                     |
          Businsess Layer(Business Logic)   
                    |
            Data Acceess Layer
                   |
                  DB

*/

#include <iostream>
using namespace std;


class EmployeeService{ //Abstract Layer
    virtual string addEmployee(int id, string name, string dept) = 0;
    virtual string getEmployeeId(int id) = 0;
    virtual string getAllEmployees() = 0;
    virtual string deleteEmployeeById(int id) = 0;
};

class EmployeeServiceImpl: public EmployeeService{
    //Override all the method of EmployeeServiceClass;
    public:
    string addEmployee(int id, string name, string dept) override{
        //actual logic
    }
    string getEmployeeId(int id) override{

    }
    string getAllEmployees()override{

    }
    string deleteEmployeeById(int id)override{
        
    }


};


int main(){

//write code here

}