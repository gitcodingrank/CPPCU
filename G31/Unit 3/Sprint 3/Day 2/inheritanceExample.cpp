/*
Inheritance: rather than owning its better to owe.
Example: Cat family
Cat --> Tiger ---> Lion
Cat:
name: "Cat"
fur:true
jump:true
nonVeg:true
tail:true
100 properties are there

Tiger:
name: "Tiger"

Lion:
name: "Lion"

Technically Inheritance: It is a feature of object oriented programming where one class can use/inherite the properties of anothe class.
*/

//Single Inheritance: When one class inhertates one parent class such inheritance is known as Single Inheritance.
// #include <iostream>
// using namespace std;

// //Base/Parent/Top
// class Animal {
// public:
//     void eat() { cout << "This animal eats food." << endl; }
// };

// //Derived/Child
// class Dog : public Animal { 
// public:
//     void bark() { cout << "Dog barks." << endl; }
// };

// int main() {
//     Dog d;
//     d.eat();  // Inherited from Animal
//     d.bark();
//     return 0;
// }

//Multiple Inheritance: One child class inherits from multiple base classes.
// #include <iostream>
// using namespace std;

// class Parent1 {
// public:
//     void show1() { cout << "Base Class 1" << endl; }
// };

// class Parent2 {
// public:
//     void show2() { cout << "Base Class 2" << endl; }
// };

// class Child : public Parent1, public Parent2 {
// public:
//     void show3() { cout << "Derived Class" << endl; }
// };

// int main() {
//     Child obj;
//     obj.show1();
//     obj.show2();
//     obj.show3();
//     return 0;
// }

//Multilevel Inheritance: A class inherits from a derived class (i.e., Grandparent → Parent → Child).
#include <iostream>
using namespace std;

class Grandparent {
public:
    void grandparentFunction() { cout << "This is the grandparent class." << endl; }
};

class Parent : public Grandparent {
public:
    void parentFunction() { cout << "This is the parent class." << endl; }
};

class Child : public Parent {
public:
    void childFunction() { cout << "This is the child class." << endl; }
};

int main() {
    Child c;
    c.grandparentFunction();
    c.parentFunction();
    c.childFunction();
    return 0;
}


