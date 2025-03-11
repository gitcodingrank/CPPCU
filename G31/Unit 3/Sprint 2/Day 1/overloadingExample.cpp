// //Overloading: In C++, Its a feature which supports following types of overloading:
// //1. Function Overloading
// //2. Constructor Overloading
// //3. Operator Overloading

// //Note: Overlaoding is related to number of parameters, and type of parameter.

// //1. Function Overloading: In this case, functions names are same and number of parameters, and type of parameter are different.

// //2. Constructor Overloading: number of parameters, and type of parameter

// //3. Operator Overloading: There are following operators in c++:
// //+, -, *, /, % -> inbuilt functionality - default functionality with primitive data
// //Redefining the newTask to the operator 

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
// //     void welcome(double salary){
// //         cout <<"Salary: "<<salary<<endl;
// //     };
// //     void welcome(char favoriteLetter){
// //         cout <<"Favorite Letter: "<<favoriteLetter<<endl;
// //     };
// // };

// // class COL{
// //     public:
// //     //DEFAULT CONSTRUCTOR
// //     COL(){
// //         cout <<"Inside Default Constructor"<<endl;
// //     }

// //     //PARAMETERIZED CONSTRUCTORS
// //     COL(string name){
// //         cout <<"Name: "<<name<<endl;
// //     }

// //     COL(string name, int age){
// //         cout <<"Name: "<<name<<endl;
// //         cout <<"Age: "<<age<<endl;
// //     }

// //     COL(double salary){
// //         printf("%f", salary);
// //     }


// // };


// //Operator Overloading Example:
// class Box{
//     public:
//     int length;

//     Box(int l){
//         this->length = l;
//     }

//     // Box operator +(Box &box){
//     //     return Box(length + box.length);
//     // }

//     bool operator ==(Box &box){
//         return length == box.length;
//     }

// };

// int main(){

//     // FunctionOverloadingExample a;
//     // a.welcome("Chaman");
//     // a.welcome("Chaman", 45);
//     // a.welcome(450000.67);

//     //Constructor Overloading Example:
//     // COL c1;
//     // COL c2("Rakesh");
//     // COL c3("Rakesh", 45);
//     // COL c4(455534.34232);

//     //Operator Overlaoding:
//     // int sum1 = 4+4;
//     // string str = to_string("Hello") + to_string("World!");
//     // cout <<sum1<<endl;


//     Box b1(45), b2(45);
    
//     // Box box = b1 + b2;
//     // int sum = 45 + 67;
//     // cout <<box.length<<endl;
//     // cout <<sum<<endl;

//     if(b1 == b2){
//         cout <<"Equal"<<endl;
//     }else{
//         cout <<"Not Equal"<<endl;
//     }


// }


#include <iostream>
using namespace std;

class Box {
public:
    int length;

    Box(int l) { length = l; }

    // Overloading << Operator
    friend ostream &operator<<(ostream &out, const Box &b) {
        out << "Box length: " << b.length;
        return out;
    }
};


class Student{
    public:
    int studentId;
    string studentName;

    Student(int studentId, string studentName){
        this->studentId = studentId;
        this->studentName = studentName;
    }

    friend ostream &operator<<(ostream &out, const Student &b) {
        out << "Student Name: " << b.studentName<<endl;
        out << "Student Id: " << b.studentId<<endl;
        return out;
    }
};

int main() {
    // Box box1(15);

    // cout << box1 << endl;  // Calls operator<<
    // return 0;

    Student s1(45, "Rakesh"), s2(56,"Pawan");

    cout <<s1<<endl;
    cout <<"-----------------------"<<endl;
    cout <<s1<<endl;
}
