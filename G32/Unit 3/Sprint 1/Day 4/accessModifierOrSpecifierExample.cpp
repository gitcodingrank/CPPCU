//Access Modifier/Specifier: They decide accessibility or visibility of class members.
//Access Modifier/Specifier: 1. public, 2. private, 3. protected.
//Note: if you don't define any access modifier for particular member inside the class then they would be bydefault private.

//public: Accessible everywhere - Members under public block are accessible everywhere, inside the class and outside the class.

//private: Not Accessible everywhere - Members under private block are accessible only within the class not outside the class.

//protected: Not Accessible everywhere leaving child class - Members under protected block are accessible within the class and inside the child class(Inheritance).

//Example:

#include <iostream>
using namespace std;

// class A{
//     private:
//     string name = "Chaman";

//     string getName(){
//         return name;
//     }
//     protected:
//     int age = 45;

//     public:
//     string city = "Noida";

//     // void showDetails(){
//     //     age;
//     //     city;
//     //     name;
//     //     getName();
//     // }
//     // friend void show(A a); //declaration of friend function.
//     friend class Dost; //declaration of friend class
// };

//friend function/class - They can access the private and protected members of the class.

//implementation of friend function.
// void show(A a){
//     cout <<a.name<<endl; //private member
//     cout <<a.age<<endl; //protected member
//     cout <<a.city<<endl; // public member
// }

//friend class body/implementation

// class Dost{

//     public:
//     void getDetails(A a){
//     cout <<a.name<<endl; //private member
//     cout <<a.age<<endl; //protected member
//     cout <<a.city<<endl; // public member
//     }
// };


// class ClassB; //delcared a class ClassB but not given definition/body

// class ClassA{
//     private:
//     string name = "Chaman";

//     public:
//     friend void getData(ClassA a, ClassB b);
// };

// class ClassB{
//     private:
//     int age = 45;

//     public:
//     friend void getData(ClassA a, ClassB b);
// };

// void getData(ClassA a, ClassB b){
//     cout <<a.name<<" "<<b.age<<endl;
// }

//above solution using friend class:

class ClassA{
    private:
    string name = "Chaman";

    public:
    friend class Dost;
};

class ClassB{
    private:
    int age = 45;

    public:
    friend class Dost;
};

class Dost{
    public:
    void getData(ClassA a, ClassB b){
        cout <<a.name<<" "<<b.age<<endl;
    }
};


int main(){

    // A a;
    // cout <<a.city<<endl;
    // cout <<a.age<<endl;

    //If we want to access the private and protected members of the class?
    //Solution? - friend function/class

    //Example: Friend Function:

    // A a;
    // show(a);

    //Example: Friend class
    // A a;
    // Dost d;
    // d.getDetails(a);

    //friend function:
    // ClassA a;
    // ClassB b;
    // getData(a, b);

    //friend class:
    ClassA a;
    ClassB b;
    Dost d;
    d.getData(a, b);

}
