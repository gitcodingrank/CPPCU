
//Constructor: Constructor is used to create the object of the class
//Note: Whenever you create the object of the class then constructor get called automatically
//When Defautl Constructor called?: class A ----> A a;
//When Parameterized Constructor called? class B ---> B b(paramters) or B b = B(paramters)

//Destructor: When the object of the class get destroyed then desctructor called automatically.


#include <iostream>
using namespace std;

class A{
    
    public:
    int value;
    string name;
    //default constructor 
    A(){
        cout <<"Inside Default Constructor"<<endl;
    }
    //parameterized constructor
    A(int value){
        cout <<"Inside Parameterized constructor accepting int parameter"<<endl;
       this->value = value; 
    }

    //parameterized constructor
    A(string name){
        cout <<"Inside Parameterized constructor accepting string parameter"<<endl;
       this->name = name; 
    }

    ~A(){
        cout <<"Inside Desctructor of class A"<<endl;
    }

};

int main(){

 A a1; //A()
 A a2(45); //A(int)
 A a3("String"); //A(String)

}