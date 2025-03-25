/*
Inheritance: Rather than owning its better to owe.
Example: Cat Family?
Cat -> Tiger--->Lion--->Leopard

class Cat:
    name:Cat
    fur:true
    tail:true
    jump:true
    //100 propeties

class Tiger:
    name:Tiger
    fur:true
    tail:true
    jump:true
    //100 propeties

class Lion:
    name:Lion
    fur:true
    tail:true
    jump:true
    //100 propeties


Technically Inheritance: It is one of the fundamental feature of object oriented programming where one class can use/inheritate the properties/members of other class.
*/

//Exmaple:
// #include <iostream>
// using namespace std;

// class Cat{ //Parent/Father/Top/Base
//     public:
//     string name;
//     bool fur;
//     bool jump;
//     bool tail;

//     Cat(){
//         name = "Cat";
//         fur = true;
//         jump = true;
//         tail = true;
//     }
// };

// class Tiger:public Cat{ //Child/Derived
//     public:
//     Tiger(){
//         name = "Tiger";
//     }
// };

// int main(){

//     Tiger t;
//     cout <<t.fur<<endl;
//     cout <<t.name<<endl;

// }

//Good Example:
// #include <iostream>
// using namespace std;

// class Parent {
//     public:
//         int a;
//     protected:
//         int b;
//     private:
//         int c;  // Not inherited
//     };
    
//     class Child : protected Parent {
//         // a remains public
//         // b remains protected
//         // c is not accessible
//         void printDetails(){
//             cout <<b<<endl;
//         }
//     };

    // class Student{
    //     void show(){
    //         cout <<b<<endl;
    //     }
    // };

    // int main(){
    //     Child c;
    //     cout <<c.a<<endl;
    //     // cout <<c.b<<endl;
    // }

//1. Single Inheritance: One base/parent class → One derived/child class.
/*
Class A 
   |
Class B
*/
//Example:
// #include <iostream>
// using namespace std;

// class Animal { //parent/base class
// public:
//     void eat() { cout << "This animal eats food." << endl; }
// };

// class Dog : public Animal { //child/derived class
// public:
//     void bark() { cout << "Dog barks." << endl; }
// };

// int main() {
//     Dog d;
//     d.eat();  // Inherited from Animal
//     d.bark();
//     return 0;
// }

//2. Multiple Inheritance: One child class inherits from multiple base classes.
/*
Class A 
Class B
Class C

Class D: Class A, Class B, Class C
*/

//Example:
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

//3. Multilevel Inheritance: A class inherits from a derived class (i.e., Grandparent → Parent → Child).
/*
class A  - GrandFather
  | 
class B  - Father
  |
class C  - Child
*/
//Example:
// #include <iostream>
// using namespace std;

// class Grandparent {
// public:
//     void grandparentFunction() { cout << "This is the grandparent class." << endl; }
// };

// class Parent : public Grandparent {
// public:
//     void parentFunction() { cout << "This is the parent class." << endl; }
// };

// class Child : public Parent {
// public:
//     void childFunction() { cout << "This is the child class." << endl; }
// };

// int main() {
//     Child c;
//     c.grandparentFunction();
//     c.parentFunction();
//     c.childFunction();
//     return 0;
// }

//4. Hierarchical Inheritance: One base class → Multiple derived classes.
/*
              Class A
        /        |        \
      Class B   class C  class D
*/
//Example:
// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     void display() { cout << "This is the parent class." << endl; }
// };

// class Child1 : public Parent {
// public:
//     void show1() { cout << "Child1 class function." << endl; }
// };

// class Child2 : public Parent {
// public:
//     void show2() { cout << "Child2 class function." << endl; }
// };

// int main() {
//     Child1 obj1;
//     obj1.display();
//     obj1.show1();

//     Child2 obj2;
//     obj2.display();
//     obj2.show2();
// }

//5. Hybrid Inheritance

//More About Inheritance Examples:

#include <iostream>
using namespace std;

class Vehicle{
    public:
    //data member
    string city = "Chandigarh";
    //function member
    virtual void start(){
        cout <<"Vehicle is running for "<<city<<"....."<<endl;
    }
};

//Inheritance: IS-A Relationship
class Car:public Vehicle{
    public:
    void start(){
        cout <<"Car is running for "<<city<<"....."<<endl;
    }
};

class Student{

};

int main(){

    Car c;
    // c.city; 
    // c.start();

    Student student;

    // Vehicle v; //selfObject
    // //v -> childClassObject/selfObject/null
    // v = c; //childClassObject;
    // v.start();

    //static vs dynamic

    
    Vehicle *v; //selfObject
    //v -> childClassObject/selfObject/null
    v = &c; //childClassObject;
    v->start();


}


    
