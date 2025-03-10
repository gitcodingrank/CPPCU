//Access Modifier/Specifier - They decide accessibility/visibility of the members of the class.
//Access Modifier/Specifier -1. public, 2. private, 3. protected


//public: Accessible/visible everywhere -> Members under public are accessible or visible inside and outside the class.

//private: Not Accessible/visible everywhere ->Members under private block are accessible or visible within the class only not outside the class.

//protected: Not Accessible/visible everywhere leaving inside child Class -> Members under protected block are accessible or visible within the same class or inside the child class(Inheritance).

#include <iostream>
using namespace std;

//Example 1:
// class A{

//     private:
//     string name = "Chaman";

//     string getName(){
//         return name;
//     }
    
//     protected:
//     string city = "Noida";

//     public:
//     int age = 45;

//     // friend void show(A);
//     // friend class Dost;
//     friend void show(A* a);

// };

//friend function/class: access private and protected members of the class.

//using friend function:

// void show(A a){
//     cout <<a.name<<endl; //private member
//     cout <<a.age<<endl; //public member
//     cout <<a.city<<endl; //protected member
// }

// class Dost{

//     public:
//     void showDetails(A a){
//         cout <<a.name<<endl; //private member
//         cout <<a.age<<endl; //public member
//         cout <<a.city<<endl; //protected member
//     }
// };

//dyamically using pointer: friend function
// void show(A* a){
//         cout <<a->name<<endl; //private member
//         cout <<a->age<<endl; //public member
//         cout <<a->city<<endl; //protected member
// }

// class B; //declared a class as B but not given definition/body

// class A{
//     private:
//     string name = "Rakesh";

//     public:
//     friend void getData(A a, B b);
// };

// class B{
//     private:
//     int age = 45;

//     public:
//     friend void getData(A a, B b);
// };

// //using friend function:

// void getData(A a, B b){
//     cout <<a.name<<" "<<b.age<<endl;
// }


//using friend class:

class A{
    private:
    string name = "Rakesh";

    public:
    friend class Dost;
};

class B{
    private:
    int age = 45;

    public:
    friend class Dost;
};

class Dost{

    public:
    void show(A a, B b){
        cout <<a.name<<endl;
        cout <<b.age<<endl;
    }
};


int main(){

//  A a;
// //  cout <<a.age<<endl;
// // show(a);
// //  cout<<a.
// Dost d;
// d.showDetails(a);

// A* a = new A();
// show(a);

// A a;
// B b;
// getData(a, b);


A a;
B b;
Dost d;
d.show(a, b);


//If we also want to access the private and protected members of the classs.
//Solution? - friend function/ friend class

}