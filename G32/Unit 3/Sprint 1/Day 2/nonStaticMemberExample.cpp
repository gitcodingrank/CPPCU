#include <iostream>
using namespace std;

//non-static member example:

class A{
    public:
    //data member
    int value;

    //function member
    int getValue(){
        return value;
    }
};

int main(){

    //To access non-static member of class A, do will you do? - need to create the object of the class A

    //without creating object
    // cout <<value<<endl;

    A a1; //created a1 object of class A
    cout <<a1.value<<endl;
    cout <<a1.getValue()<<endl;

    A a2;
    a2.value = 45;
    cout <<a2.value<<endl;
    cout <<a2.getValue()<<endl;


}