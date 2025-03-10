#include <iostream>
using namespace std;


//Friend Class/Function - they both are used to access the private and protected members of the class outside the class.

//friend function:

// class A{

//     private:
//     string name = "Pawan";

//     string getName(){
//         return name;
//     }

//     protected:
//     int age = 56;

//     public:
//     string city = "Noida";

//     //declaration of friend function:
//     friend void showAClassMember(A a);

// };

// void showAClassMember(A a){
//     cout <<a.name<<endl;
//     cout <<a.city<<endl;
//     cout <<a.age<<endl;

//     cout <<a.getName()<<endl;
// }

// class B; //declaration of class B
// // class A; //declaration of class A


// class A{
//     private:
//     string name = "Pawan";

//     public:
//     friend void show(A a, B b);
// };

// class B{
//     private:
//     int age = 45;

//     public:
//     friend void show(A a, B b);
// };

// void show(A a, B b){

//     cout <<a.name<<b.age<<endl;

// }



//friend class

//class B; //declaration of class B
// class A; //declaration of class A


// class A{
//     private:
//     string name = "Pawan";

//     public:
//     friend class Dost;
// };

// class B{
//     private:
//     int age = 45;

//     public:
//     friend class Dost;
// };

// class Dost{

//     public:
//     void show(A a, B b){
//         cout <<a.name<<" "<<b.age<<endl;
//     }
// };


//using pointer: friend function

class B; //declaration of class B
// class A; //declaration of class A


class A{
    private:
    string name = "Pawan";

    public:
    friend void show(A* a, B* b);
};

class B{
    private:
    int age = 45;

    public:
    friend void show(A* a, B* b);
};

void show(A* a, B* b){

    cout <<a->name<<" "<<b->age<<endl;

}




int main(){

//  A a;
//  cout <<a.city<<endl; //city is public member
// //  a.

// showAClassMember(a);

//then how to access public and procted member - friend class/friend function

// A a;
// B b;
// show(a,b);


//using friend class:
// A a;
// B b;
// Dost d;
// d.show(a, b);

//friend function using pointer:
A* objA = new A();
B* objB = new B();

show(objA, objB);


}