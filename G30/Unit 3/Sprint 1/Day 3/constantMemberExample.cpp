#include <iostream>
using namespace std;


//constant data member and function member
//Note: All constant members are unchangable
// class A{
//     public:
//     // int value = 45;
//     const string universityName = "Chitkara";

//     A(){

//     }

//     A(string name):universityName(name){}
// };

//constant function member: - They can't change the data member of the class, they are just read only(they can only read/access data member)

//syntax: returnType functionName()const {}

// class B{

//     public:
//     const int value;

//     int getValue() const{
//         return value;
//     }
// };

// class Rectangle{

//     public:
//     mutable int length;
//     mutable int width = 56; //in the case of constant data member, they are important to initialized when you're creating constant object.

//     Rectangle(){}

//     Rectangle(int w): width(w){} 

// };

// class Car{
//     public:

//     //constant function - real only
//     void showDetails() const{
//         cout <<"Showing the Details...."<<endl;
//     }

//     //Not a constant function - real only
//     void welcome(){
//         cout <<"Welcome to Non Constant Function"<<endl;
//     }
// };


class A{
    private:
    int x;
    
    public:
    A(){
        x = 45;
    }

    friend void show(A a);
};


void show(A a){
    cout <<a.x<<endl; //45
}

int main(){
     
    // A a1;
    // // cout <<a.value<<endl;
    // // a.value = 56;
    // cout <<a1.universityName<<endl;

    // A a2("Delhi");

    // cout <<a2.universityName<<endl;
    //Can we also change the constant data member value? - using constructor : initializer list

    // const Rectangle r(45);

    // // r.length = 45;
    // r.length = 45;


    // const Car c;
    // //Note: Constant object can only access the constant member not non-constant member.

    // c.showDetails();
    // //c.welcome(); // Observe the Error


    A a;
    // cout <<a.x<<endl;
    show(a);




}