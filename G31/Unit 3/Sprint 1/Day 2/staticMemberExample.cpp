#include <iostream>
using namespace std;

// class Counter{

//     public:
//     static int count;

//     Counter(){
//         count++;
//     }
//     static void printCount(){
//         cout <<"Current Count: "<<count<<endl;
//     }   
// };

// //all static members need to be defined out the class as well.
// //typeOfStaticMember ClassName::staticMemberName = value;
// int Counter::count = 0;


// class A{

//     public:
//     static void welcome(){
//         cout <<"Welcome to University.."<<endl;
//     }
// };


class Test{

    public:
    Test(){
        cout <<"Default Constructor Called"<<endl;
    }

};

void demo(){
    static Test t;
}

int main(){

    // Counter c1, c2, c3, c4;
    // //to call static method of the class:
    // //ClassName::methodName();
    // Counter::printCount();

    // A::welcome();
    // A::welcome();
    // A::welcome();
    // A::welcome();

    demo();
    demo();
    demo();


}
