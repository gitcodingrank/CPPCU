//Polymorphism: It is a feature of oops where one object performs many different task with different object. 
//Example: Man --> Customer/Employee/Husband/Son

/*
There are two types of polymorphism in c++:
1. Compiler Time Polymophism - Static/Overloading/Static Binding/Early Binding
-It resolves at compile time and to achive this polymophims we must know about overloading concept - function/constructor/operator overloading.
*/

//Exmaples: using function overloding - same function function name but different number of parameters or type of parameter.

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


// //Exmaples: using operator overloding - we redefine the task for operator(+,-,=,==,<<,>>,*,/, etcs).
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
//     cout << 4 + 6 <<endl; //working fine with primitive
//     Complex c3 = c1 + c2; //working fine with objects
//     c3.display();  // 4 + 6i
// }

//3. using constructor overloading: constructor are overloaded with different parameters, and number of parameters

// #include <iostream>
// using namespace std;

// class A{
//     public:
//     A(){
//         cout <<"Default Constructor"<<endl;
//     }
//     A(int id, string name, string city){ //parameterized - 1
//         cout <<"Id: "<<id<<" ame: "<<name<<" City: "<<city<<endl;
//     }
//     A(int id, string name){ //parameterized - 2
//         cout <<"Id: "<<id<<" ame: "<<name<<endl;
//     }
//     A(string name, string city){ //parameterized - 3
//         cout <<" ame: "<<name<<" City: "<<city<<endl;
//     }
// };

// int main(){

//     //Use of Constructor: Object Creation
//     A a1; //1 - Default constructor 
//     A a2(45, "Rakesh"); //parameterized - 2
//     A a3(45, "Rakesh", "Noida"); //parameterized - 1

// }

//2. Run Time Polymophism - Dynamic/Late Binding/Method Overriding -achieved using inheritance.

//Example: Method Overriding - Inheritance - Virtual Function:

//Without Virtual Function:
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
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
    public:
        void sound() override {
            cout << "Cat Meows" << endl;
        }
    };

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound(); //Dog barks
    Cat c;
    a = &c;
    a->sound();  //Cat Meows
}
