/*
Inheritance: Rather than owning its better to owe.
Example: Cat Family
Cat----> Tiger--->Lion---->Leopard
class Cat
    name: "Cat",
    fur: true
    jump: true
    tail: true
    //100 properties....

class Tiger:
    name:"Tiger",
    fur: true
    jump: true
    tail: true
    //100 properties....
clas Lion:
    name:"Lion"
    fur: true
    jump: true
    tail: true
    //100 properties....

Technically Inheritance: one class can inherit/use the members/properties of another class.
*/

// #include <iostream>
// using namespace std;

// //Parent/Base Class
// class Cat{
//     private:
//     string name;
//     bool fur;
//     bool jump;
//     bool tail;

//     public:
//     Cat(){
//         //default value;
//         name = "Cat";
//         fur = true;
//         jump = true;
//         tail = true;
//     }

//     //getter methods
//     string getName(){
//         return name;
//     }
//     bool getFur(){
//         return fur;
//     }
//     bool getJump(){
//         return jump;
//     }
//     bool getTail(){
//         return tail;
//     }

//     //setter Methods
//     void setName(string name){
//         this->name = name;
//     }
//     void setJump(bool isJump){
//         this->jump = isJump;
//     }
//     void setFur(bool isFur){
//         this->fur = isFur;
//     }
//     void setTail(bool isTail){
//         this->tail = isTail;
//     }

// };

// //Child/Derived class
// class Tiger:public Cat{
//     public:
//     Tiger(){
//         setName("Tiger");
//     }
// };


// int main(){

//     Cat cat;
//     cout <<cat.getFur()<<endl;
//     cout <<cat.getName()<<endl;

//     Tiger tiger;
//     cout <<tiger.getFur()<<endl;
//     cout <<tiger.getName()<<endl;

// }


//Important Notes About Inheritance:

// #include <iostream>
// using namespace std;

// class Parent {
//     public:
//         int a;
//     protected:
//         int b;
//     private:
//         int c;  // Not inherited
// };
    
// class Child : protected Parent {
//         // a remains public
//         // b remains protected
//         // c is not accessible
//         void welcome(){
//             cout <<a;
//             cout <<b;
//         }
// };
// class Child2: protected Child{
//     void welcome(){
//         cout <<a;
//         cout <<b;
//     }
// };

// int main(){

//     Child c;
//     cout <<c.a<<endl;
//     cout <<c.b<<endl;

// }

//Why Inheritance is important:
// #include <iostream>
// using namespace std;

// //Base/Parent Class
// class Vehicle{
//     public:
//     virtual void start(){
//         cout <<"Vehicle has started running....."<<endl;
//     }
// };

// //Note: In inheritance, There is IS-A Relationship
// //Vehicle - Car, Bike, Truck, Bus, etcs;
// class Car: public Vehicle{
//     public:
//     void start() override{
//         cout <<"Car has started running....."<<endl;
//     }
// };

// class Bike: public Vehicle{
//     public:
//     void start() override{
//         cout <<"Bike has started running....."<<endl;
//     }
// };

// int main(){

//  Vehicle v;
//  Car c;
//  v.start(); //Vehicle has started running.....
//  c.start(); //Car has started running.....

//  //IS-A Relationship
//  //Normal Class --->SelfObject/ChildClassObject/null
//  v = c;
//  v.start();//Vehicle has started running.....

 //Static and Dynamic Object Creation?

//  Vehicle *v = new Vehicle();
//  v->start();
//  v = new Car();
//  v->start();

//  v = new Bike();
//  v->start();

// }


//Type Of Inheritance:
//1. Single Inheritance: one child inherits one parent class
/*
Class A - Parent
  |
Class B - Child
*/

//Example:
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "This animal eats food." << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Dog barks." << endl; }
};

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark();
    return 0;
}

//2. Multiple Inheritance: One Child inherits more than one Parent class
/*
Class A
Class B
Class C

Class D: Class A, Class B, Class C
*/
//Example:
#include <iostream>
using namespace std;

class Parent1 {
public:
    void show1() { cout << "Base Class 1" << endl; }
};

class Parent2 {
public:
    void show2() { cout << "Base Class 2" << endl; }
};

class Child : public Parent1, public Parent2 {
public:
    void show3() { cout << "Derived Class" << endl; }
};

int main() {
    Child obj;
    obj.show1(); //Inherited from Parent 1
    obj.show2(); //Inherited from Parent 2
    obj.show3();
    return 0;
}
//3. Multilevel Inheritance: A class inherits from a derived class (i.e., Grandparent → Parent → Child)
/*
Class A
  |
Class B
  |
Class C
*/
//Exmaple:
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

//4. Hierarchical Inheritance: One base class → Multiple derived classes.
/*
         Class A
        /        \
    Class B    Class C
   /          /         \
Class D   Class E       Class F    
*/
//Example:
#include <iostream>
using namespace std;

class Parent {
public:
    void display() { cout << "This is the parent class." << endl; }
};

class Child1 : public Parent {
public:
    void show1() { cout << "Child1 class function." << endl; }
};

class Child2 : public Parent {
public:
    void show2() { cout << "Child2 class function." << endl; }
};

int main() {
    Child1 obj1;
    obj1.display();
    obj1.show1();

    Child2 obj2;
    obj2.display();
    obj2.show2();

    return
}


