//Inheritance:
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
};

class Vehicle{
    public:
    virtual void start(){
        cout <<"Vehicle is running....."<<endl;
    }
};

//Vehicle - Bike, Car
//Inheritace: IS-A Relationship
class Bike:public Vehicle{
    public:
    void start() override{
        cout <<"Bike is running....."<<endl;
    }
};

class Car:public Vehicle{
    public:
    void start() override{
        cout <<"Car is running....."<<endl;
    }
};
int main(){

    //Vehicle v;
    // v.start();
    // Car c;
    // c.start();
    // b.start();
    
    Student s;
    
    Vehicle *v;
    Bike b;
    Car c;
    v = &b;

    v->start();

    //Note: Normal Class - Self Object/ChildClass/null

}