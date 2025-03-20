/*
Overloading: it is related to number of parameters or type of parameters.

There are following type of overloading in c++:
1. Function Overloading.
2. Constructor Overloading.
3. Operator Overlaoding.

1. Function Overloading: functions'name are same but number of parametesrs or type of parameters are different.


Example:

*/



//Function Overlaoding
// #include <iostream>
// using namespace std;

// class A{
//     public:
//     void printDetails(string name){
//         cout <<"name"<<endl;
//         cout << name<<endl;
//     }

//     void printDetails(string name, int age){
//         cout <<"name and age"<<endl;
//         cout << name<<endl;
//         cout << age<<endl;
//     }

//     void printDetails(string name, int age, string city){
//         cout <<"name, age, and city"<<endl;
//         cout << name<<endl;
//         cout << age<<endl;
//         cout << city<<endl;
//     }

//     void printDetails(string name, double salary){
//         cout <<"name and salary"<<endl;
//         cout << name<<endl;
//         cout << salary<<endl;
//     }
// };

// int main(){

//     A a;
//     a.printDetails("Chaman");
//     a.printDetails("Chaman", 45565.453);

// }



//Another Example: It is not important to keep the functions inside the class, they can be outside the class as well.

// #include <iostream>
// using namespace std;

// int area(int side){
//     return side * side;
// }

// int area(int length, int breadth){
//     return length * breadth;
// }

// int main(){
//     cout<< area(4)<<endl; //area of square
//     cout <<area(4, 5)<<endl; //area of rectangle
// }

//2. Constructor Overloading: n numbers of paramerterized constructors with different number of parameters or type of parameters


//Constructor Overloading
// #include <iostream>
// using namespace std;

// class A{
//     public:
//     //one default constructor
//     A(){
//         cout <<"Inside Default Constructor"<<endl;
//     }
//     //n number of parameterized constructors
//     A(string name){
//             cout <<"name"<<endl;
//             cout << name<<endl;
//     }
        
//     A(string name, int age){
//             cout <<"name and age"<<endl;
//             cout << name<<endl;
//             cout << age<<endl;
//     }
        
//     A(string name, int age, string city){
//             cout <<"name, age, and city"<<endl;
//             cout << name<<endl;
//             cout << age<<endl;
//             cout << city<<endl;
//     }
        
//     A(string name, double salary){
//             cout <<"name and salary"<<endl;
//             cout << name<<endl;
//             cout << salary<<endl;
//     }
    
// };


// int main(){

//  A a1; //default constructor
//  A a2("Champak"); //1st parameterized constructor called.
//  A a3("Champak", 45, "Noida"); //3rd parameterized constructor called.

// }

//3. Operator Overloading: redefining the task of operators so that they can work with object type as well.



//Operator Overlaoding
// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int value;

//     A(int v){
//         value = v;
//     }

//     A operator +(A& a){
//         return A(value + a.value);
//     }

//     A operator *(A& a){
//         return A(value * a.value);
//     }

//     A operator -(A& a){
//         return A(value - a.value);
//     }
//     bool operator ==(A& a){
//         return value == a.value;
//     }

// };

// int main(){

//     // A a1(40), a2(50);

//     //+ operator:
//     // cout << 45 + 45 <<endl;

//     A a1(40), a2(40);

//     A a3 = a1 + a2; //working fine with objec type due to overlaoding
//     int sum = 45 + 55; //working fine with primitive type due to default behavior
//     cout <<a3.value<<endl;

//     bool test = a1 == a2;
//     cout <<(test?"Equal":"Not Equal")<<endl;
    
// }

//Student Task: Create a student class with members like id, name, and city, and create atleast 2 student object and check the duplicacy ( a student is duplicate if name, id, and city are matching with other student) 


#include <iostream>
using namespace std;

class Student{
    public:
    int studentId;
    string studentName;
    string studentCity;

    Student(int id, string name, string city){
        studentId = id;
        studentName = name;
        studentCity = city;
    }

    bool operator ==(Student& student){
        return this->studentId == student.studentId && this->studentName == student.studentName && this->studentCity == student.studentCity;
    }

};

int main(){

 Student s1(45, "Chaman", "Noida");
 Student s2(45, "Chaman", "Delhi");

 cout << ((s1 == s2) ? "Dulicate Student":"New Student")<<endl;

}
