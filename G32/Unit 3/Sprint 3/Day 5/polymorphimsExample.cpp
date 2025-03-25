//Polymorphims: Where one object work different in different situation.
//There are two types of polymorphism:
//1. Compiler Time Polymorphism: Static/Early Binding - Compile Time
//To Achieve Compile Time Polymorphism, You must know about overlaoding concept(Function/Constructor/Operator Overloading)

//Function Overloading:
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

//Operator Overlaoding:
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

//Constructor Overloading:

// #include <iostream>
// using namespace std;

// class Student{
//     private:
//     int id;
//     string name;
//     string city;

//     public:
//     Student(){
//         cout <<"INSIDE DEFAULT CONSTRUCTOR"<<endl;
//     }
//     Student(string name, string city){
//         cout <<"INSIDE DEFAULT PARAMETERIZED CONSTRUCTOR 1"<<endl;
//         this->id = 56;
//         this->name = name;
//         this->city = city;

//     }
//     Student(string name){
//         cout <<"INSIDE DEFAULT PARAMETERIZED CONSTRUCTOR 2"<<endl;
//         this->id = 78;
//         this->name = name;
//         this->city = "Noida";

//     }

// };


// int main(){

//  Student student1; //Default;
//  Student student1("Rakesh", "Rakeshpuram"); //Para. Constructor 1;
//  Student student1("Rakesh"); //Para. Constructor 2;

// }


//Run Time Polymophism - Using Inheritance - Method Overriding(Virtual Function)
//Exmaple:
#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();  // Output: Animal makes a sound
}

/*
Compile Time Polymorphism - Achiveve through Overloading.
Run Time Polymorphism - Achiveve through Method Overriding.
*/



