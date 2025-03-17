/*
1. Constructor:
It is a function which has the same name as class name and get called automatically whenever we create the object of the class.

Note: 
1. Constructor function doesn't return anything like normal function.
2. Without Constructor, you can't create the object of the class.

There are two types of constructors
1. Default Constructor - Not take any parameter
    1.1 One per class 
    1.2 Takes no parameters
    Syntax:
    ClassName(){

    }
2. Parameterized Constructor - takes parameters
    2.1 Can have one or many in a class
    2.2 Takes parameters
*/
//Destructor: It is also a function of the class that has name similar to class, and automaticall get called when object of the class is destroyed.
/*
class A{
    public:
    //default constructor
    A(){
    
    }
    //parameterized constructor
    A(int value){
    }

    //Destructor
    ~A(){
    }
}

*/

#include <iostream>
using namespace std;

//Constructor:
class A{
    public:
    A(){
        cout <<"Inside the Default Constructor"<<endl;
    }
    
    //Parameterized Constructors:
    A(int value){
        cout <<"VALUE IS: "<<value<<endl;
    }

    A(string value){
        cout <<"VALUE IS: "<<value<<endl;
    }

    ~A(){
        cout <<"Inside Destructor Function"<<endl;
    }
};


int main(){

    A a1; 
    //When there is no constructor inside the class then the default constructor automatically created.

    A a2("45");

    A a3(56);

}