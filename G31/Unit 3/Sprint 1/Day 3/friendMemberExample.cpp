#include <iostream>
using namespace std;

// class A{
//     private:
//     int value = 10;

//     public:
//     string name;

//     A(){

//     }

//     //friend function: declaration
//     friend void show(A a); //need to declare friend function inside the class to access class private and protected member outside the class.
// };

// void show(A a){
//     cout <<"Inside the friend function"<<endl;
//     cout <<a.value<<endl;
// }

// class B{
//     private:
//     int y = 67;

//     friend void friendFun(A a, B b);
// };

// class A{

//     private:
//     int x = 45;

//     friend void friendFun(A a, B b);

// };


void friendFun(A a, B b){
    //cout <<"X value: "<<a.x<<endl;
    // cout <<"Y Value: "<<b.y<<endl;
}


int main(){

    // A a;
    // // cout <<a.name<<endl;
    // // cout <<a.value<<endl;

    // show(a);

    // A a;
    // B b;

    // friendFun(a, b);


}