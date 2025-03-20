//Polymorphism:
//1. Compile-Time Polymorphism:
//2. Run-Time Polymorphsim:

//Example: Compile-Time Polymorphism - static
//To Achieve Compiler Time Polymorphism - Either through Function Overloading or through Operator Overloading

//Function Overloading.
// #include<iostream>
// using namespace std;

// class Calculator {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }

//     double add(double a, double b) {
//         return a + b;
//     }
// };

// int main() {
//     Calculator c;
//     cout << c.add(5, 3) << endl;       // 8
//     cout << c.add(5.5, 3.3) << endl;   // 8.8
// }


//Using Operator Overloading:
// #include<iostream>
// using namespace std;

// class Complex {
// public:
//     int real, imag;
//     Complex(int r, int i) : real(r), imag(i) {}

//     Complex operator + (Complex const &obj) {
//         return Complex(real + obj.real, imag + obj.imag);
//     }

//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main() {
//     Complex c1(3, 4), c2(1, 2);
//     Complex c3 = c1 + c2;
//     c3.display();  // 4 + 6i
// }


//Runt Time Polymorphism: We can achieve through inheritance
//Exmaple:
//Inheritance:
// #include <iostream>
// using namespace std;

// class Student{
//     public:
//     string name;
// };

// class Vehicle{
//     public:
//     virtual void start(){
//         cout <<"Vehicle is running....."<<endl;
//     }
// };

// //Vehicle - Bike, Car
// //Inheritace: IS-A Relationship
// class Bike:public Vehicle{
//     public:
//     void start() override{
//         cout <<"Bike is running....."<<endl;
//     }
// };

// class Car:public Vehicle{
//     public:
//     void start() override{
//         cout <<"Car is running....."<<endl;
//     }
// };
// int main(){

//     //Vehicle v;
//     // v.start();
//     // Car c;
//     // c.start();
//     // b.start();
    
//     Student s;
    
//     Vehicle *v;
//     Bike b;
//     Car c;
//     v = &b;

//     v->start();

//     //Note: Normal Class - Self Object/ChildClass/null

// }


//Example 2:

#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void sound() { cout << "Animal sound" << endl; }
    };
    
    class Cat : public Animal {
    public:
        void sound() override { cout << "Cat meows" << endl; }
    };
    
    int main() {
        Animal* a;
        Cat c;
        a = &c;
        a->sound();  // Output: Cat meows
    }

/*
Summary:
Compiler Time Polymorphism - By Overloading - function/operator/constructor
Run Time Polymorphism - By Method Overriding. 

*/


