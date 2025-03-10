#include <iostream>
using namespace std;

//constant members: data/function/object member
//constant: if something has declared as constant, meaning that it is not going to change.

//constant data member:

// class A{
//     public:
//     const int value = 45;
//     string name;

//     A(int v, string n):value(v), name(n){}
// };

//constant function member: it can't change/modify any data member of the class - read only

class B{
    public:
    mutable int value;
    string name = "Rakesh";

    B(){}

    B(int v):value(v){}

    //constant function member.
    int getValue(){
        //cout <<value<<endl;
        //value = 67; //error can't change
        return value;
    }
};

int main(){

    // A a;
    // cout <<a.value<<endl;
    // a.value = 56; //can't change

    //You can't change the value of constant data member, but still you've one way to change - using constructor function - initializier list

    // A a(67, "Student1");
    // cout <<a.value<<endl;

    // B b;
    // b.value = 45;
    // cout <<b.getValue()<<endl;

    const B b;
    b.value = 45; //changable only if the value data member is declared as mutable


}