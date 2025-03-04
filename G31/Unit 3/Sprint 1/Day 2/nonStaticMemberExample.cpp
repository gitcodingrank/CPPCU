#include <iostream>
using namespace std;


//non-static member: they belong to class object. for accessing these member you need to create the object of the class

class A{
    public:

    //non-static member/object member
    int value;


    A(){
        cout <<"Default constructor called"<<endl;
    }

    //non-static member/object member
    void printValue(){
        cout <<value<<endl;
    }

};

int main(){
    //cout <<value<<endl; //not able to access as it is non-static member and for accessign this need to creat the object.
    
    A a;
    // a.value = 45;
    //cout <<a.value<<endl;
    a.printValue();



}