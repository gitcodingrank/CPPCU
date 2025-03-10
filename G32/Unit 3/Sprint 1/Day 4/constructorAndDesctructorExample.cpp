// Constructor/Destructor: their names are equal to class name.

//Constructor: It is automatically called when object of a class is being created.
//Destructor: It is automatically called when object of a class is being destroyed.

//Exmaple:

#include <iostream>
using namespace std;

class A{
    public:
    string name;
    int age;

    //defalut constructor - There will be one default constructor per class.
    A(){
        cout <<"Inside Default Constructor"<<endl;
    }

    //paramerterized constructor
    A(string name){
        cout <<"Inside Paramerterized Constructor with string parameter"<<endl;
        this->name = name;
    }

    //paramerterized constructor
    A(int age){
        cout <<"Inside Paramerterized Constructor with int parameter"<<endl;
        this->age = age;
    }

    //Destructor - there will be one destructor per class.
    ~A(){
        cout <<"Inside Destructor"<<endl;
    }

};

int main(){

    A a1; //defautl constructor
    A a2(45); //paramerterized with int parameter
    A a3("Rakesh"); //paramerterized with string parameter

}