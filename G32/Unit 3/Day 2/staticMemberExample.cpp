#include <iostream>
using namespace std;




// class A{
//     public:
//     static int value;
//     int age;


//     static int getValue(){
//         //Note: Static Function can only access static data members.
//         return value;
//     }
// };

// int A::value = 23; //default value is 0


//Good Example to undestand static members:

// class FlipkartOrder{

//     public:
//     //static data member
//     static int orderCount;

//     FlipkartOrder(){
//         orderCount++;
//         cout <<"Default Constructor Called"<<endl;
//     }

//     //static function memebr
//     static int getOrderCount(){
//         return orderCount;
//     }


// };

//int FlipkartOrder::orderCount;

// class Company{

//     public:
//     //static data member
//     static int employeeCount;

//     Company(){
//         employeeCount++;
//     }

//     //static function memebr
//     static int showTotalEmployees(){
//         return employeeCount;
//     }
// };

// int Company::employeeCount;


class Test{
    public:
    static int count;
    Test(){
        count++;
    }
};

int Test::count;

void demo(){
    static Test t1;
}


int main(){

    // cout<<FlipkartOrder::orderCount<<endl;
    // cout<<FlipkartOrder::getOrderCount()<<endl;

    //To Access Static Members of the class, you don't need to create the object. - you can access directly using className.
    //Syntax: ClassName::memberName;

    // cout <<A::value<<endl;

    // A a1, a2, a3, a4, a5;

    // cout <<a1.value<<"---"<<a1.age<<endl;
    // cout <<a2.value<<"---"<<a2.age<<endl;
    // cout <<a3.value<<"---"<<a3.age<<endl;
    // cout <<a4.value<<"---"<<a4.age<<endl;
    // cout <<a5.value<<"---"<<a5.age<<endl;


    // cout<<A::getValue()<<endl;

    // FlipkartOrder o1,o2,o3,o4,o5;

    // cout <<FlipkartOrder::orderCount<<endl;
    // cout <<FlipkartOrder::getOrderCount()<<endl;

    // Company c1, c2, c3, c4, c5, c6;

    // cout <<Company::showTotalEmployees()<<endl;

    demo();
    demo();
    demo();
    demo();
    demo();
    demo();
    demo();

    cout<<Test::count<<endl;

}