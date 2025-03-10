#include <iostream>
using namespace std;

//Identifier: 1. Keywords, 2. Variables, 3. Constant(canst) 

//constant Member: its means unchagable

//1. Constant Data Member: Once you declared any variable with const keyword they will become constant data member and not supposed to change.
// //Note: to change the value of constant data member, you can do it using constructor function initilization list.

// class A{
//     public:
//     const int value = 45;
//     const string universityName = "Chitkara";

//     A(){}

//     A(string name, int v):universityName(name), value(v){}

//     int getValue(){
//         return value;
//     }

// };


//constant function member:
//Note: It can't change any data member of the class, and it can only access the member of the class.
//In Short - Read Only

// class B{
//     public:
//     const string name;
//     int age;

//     B(){}
//     B(string n):name(n){}

//     string getName()const{
//         // age = 56; //can't do this as it is not allowed.
//         return name; 
//     }
// };

//constant object: once you create any class constant object, then can't modify any data member inside it or only can access the constant member not non-constant member.

class C{

    public:
    mutable int value;
    const string name = "Rakesh";

    C(){}

    C(string n): name(n){}

    void welcome() const{
        cout <<"Welcome to Non-Static Function"<<endl;
    }

};

int main(){

    // A a;
    // cout <<a.value<<endl;
    // a.value = 56; //Will give error


    // A a1;

    // //a1.universityName = "Delhi";

    // cout <<a1.universityName<<endl;
    
    // A a2("Delhi", 90);

    // cout <<a2.universityName<<endl;
    // cout <<a2.value<<endl;

    // B b("Rakesh");
    // // b.name = "Rakesh";
    // cout <<b.getName()<<endl;

    const C c;
    cout <<c.name<<endl;
    cout <<c.value<<endl;

    // c.value = 56; //without mutable keyword - can't change

    c.value = 56; //with mutable keyword - can change

    c.welcome();

    
    




}