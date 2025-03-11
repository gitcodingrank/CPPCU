// //Overloading: It is related to number of parameters or type of parameter.
// //Overloading - it is a feature in c++ that allows multiple function, constructors, and operators with same and different number of paramters and type of parameter.

// //1. Function Overloading
// //2. Constructor Overloading
// //3. Operator Overloading

// //Note: Your compile decides which function, constructor, and operator called dynamically according to number of parameters or type of parameters.

// //1. Function Overloading: Your Functions' names are same, but there having different parameters.

// #include <iostream>
// using namespace std;

// // class FunctionOverloadingExample{
// //     public:
// //     void welcome(string name){
// //         cout <<"Name: "<<name<<endl;
// //     };
// //     void welcome(string name, int age){
// //         cout <<"Name: "<<name<<endl;
// //         cout <<"Age: "<<age<<endl;
// //     };
// //     void welcome(int age){
// //         cout <<"Age: "<<age<<endl;
// //     };
// //     void welcome(float salary){
// //         cout <<"Salary: "<<salary<<endl;
// //     };
// // };


// //2. Constructor Overloading

// // class COL{
// //     public:
// //     //Default Constructor
// //     COL(){
// //         cout <<"Inside Default Constructor"<<endl;
// //     }

// //     //Parameterized Constructors:
// //     COL(string name, int id, string city){
// //         cout <<"Id: "<<id<<endl;
// //         cout <<"Name: "<<name<<endl;
// //         cout <<"City: "<<city<<endl;
// //     }

// //     COL(string name, string city){
// //         cout <<"Name: "<<name<<endl;
// //         cout <<"City: "<<city<<endl;
// //     }


// //     COL(int id){
// //         cout <<"Id: "<<id<<endl;
// //     }

// //     COL(string name, string state, string city){
// //         cout <<"Name: "<<name<<endl;
// //         cout <<"State: "<<state<<endl;
// //         cout <<"City: "<<city<<endl;
// //     }
// // };

// //3. Operator Overloading

// class Box{
//     public:
//     int value;

//     Box(int value){
//         this->value = value;
//     }

//     //redefining the task of + operator
//     // Box operator +(Box &box){
//     //     return Box(value + box.value);
//     // }

//     // Box operator *(Box &box){
//     //     return Box(value * box.value);
//     // }

//     bool operator ==(Box &box){
//         return value == box.value;
//     }
// };

// int main(){

//     // FunctionOverloadingExample a;
//     // a.welcome("Rakesh");
//     // a.welcome(45);

//     //Constructor Overloading:
//     // COL c1;
//     // COL c2(45);
//     // COL c3("Rakesh", "UP", "Noida");

//     // Box b1(45), b2(56);

//     // cout <<(45 + 45)<<endl; // 90
//     // Box box1 = b1 + b2;
//     // cout <<box1.value<<endl;

//     // Box box2 = b1 * b2;
//     // cout <<box2.value<<endl;

//     // Box result = b1 + b2;


//     Box b1(45), b2(56);

//     if(b1 == b2){
//         cout <<"Equal "<<endl;
//     }else{
//         cout <<"Not Equal "<<endl;
//     }


// }


#include <iostream>
using namespace std;

// class Box {
// public:
//     int length;

//     Box(int l) { length = l; }

//     // Overloading << Operator
//     friend ostream &operator <<(ostream &out, const Box &b) {
//         out << "Box length: " << b.length;
//         return out;
//     }
// };


class Counter{
    public:
    int count;

    Counter(int c){
        count = c;
    }

    //pre-increment:
    Counter operator ++(){
        ++count;
        return *this;
    }

    //post increment:
    Counter operator ++(int){
        Counter temp = *this; //11
        count++;
        return temp;
    }
};


int main() {
    // Box box1(15);
    // cout << box1 << endl;  // Calls operator<<
    // return 0;

    Counter c1(10);
    ++c1; //11
    c1++; //11
    //12
    cout <<c1.count<<endl; //12
}
