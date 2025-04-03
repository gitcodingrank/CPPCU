/*
C++ Style Type Casting:
1. static_cast - compile time type conversion
2. dynamic_cast - run time type conversio
3. const_cast - use to remove const qualifier
4. reinterpret_cast - low lever programming/working with binary files
*/

//1. static_cast: compile time type conversion
// #include <iostream>
// #include <vector>
// using namespace std;

// class Animal{
//     public:
//     virtual void sound(){
//         cout <<"Animal sounds"<<endl;
//     }
// };
// class Dog: public Animal{
//     public:
//     void sound(){
//         cout <<"Dog barks"<<endl;
//     }
//     void fetch(){
//         cout<<"Dog is fetching something"<<endl;
//     }
// };

// class Cat: public Animal{
//     public:
//     void sound(){
//         cout <<"Cat meows"<<endl;
//     }
//     void fetch(){
//         cout<<"Cat is fetching something"<<endl;
//     }
// };


// void identifyAnimal(Animal* animal){
//     Dog *dog = dynamic_cast<Dog*>(animal);
//     if(dog){
//         cout <<"This is dog"<<endl;
//         dog->sound();
//         dog->fetch();
//         return;
//     }

//     Cat *cat = dynamic_cast<Cat*>(animal);
//     if(cat){
//         cout <<"This is Cat"<<endl;
//         cat->sound();
//         cat->fetch();
//         return;
//     }
//     cout <<"Unknown Animal"<<endl;

// }

// void modifyConstVariable(const int* num){
//     int *ptr = const_cast<int*>(num);  
//     *ptr = 57; 
// }

// void modifyValue(const int* p) {
//     int* ptr = const_cast<int*>(p);  // Removing const
//     *ptr = 42;  // Modifying value safely
// }

// int main(){


//     //Basic type(Primitive) conversion
//     // cout <<"Enter Character: ";
//     // char ch;
//     // cin >>ch;

//     // // int asciiValue = (int)ch; //c style type casting
//     // int asciiValue = static_cast<int>(ch); //c style type casting
//     // cout <<asciiValue<<endl;

//     // char character = static_cast<char>(asciiValue);
//     // cout <<character<<endl;

//     //Note: for compile time conversion -upcasting

//     // Animal *animal;
//     // Dog *dog = new Dog();
//     // animal = static_cast<Animal*>(dog);
//     // animal->sound();
//     // dog->fetch();


//     // Animal *animal = new Animal();
//     // Dog *dog = static_cast<Dog*>(animal);
//     // dog->fetch();
//     // dog->sound();


//     // Animal *animal = new Dog();
//     // Dog *dog = dynamic_cast<Dog*>(animal);

//     // if(!dog){
//     //     cout <<"It is not valid Dog Object"<<endl;
//     //     return 0;
//     // }else{
//     //     dog->fetch();
//     //     dog->sound();
//     // }

//     // vector<Animal*> animals = {new Dog(), new Cat(), new Animal()};

//     // for(Animal* animal: animals){
//     //     identifyAnimal(animal);
//     // }

//     //const_cast - When we want to remove the const qualifier from any variable decalred as const to modify the value
//     //Note: It can't change the const for truly const type variable.

//     const int num = 45; //truly const variable
//     // num = 57;
//     // int *ptr = const_cast<int*>(&num);
//     // *ptr = 57;
//     // cout <<*ptr<<endl; //57

//     modifyConstVariable(&num);
//     cout <<num<<endl;


// }

// #include <iostream>
// using namespace std;

// class Student{
//     int value;
//     public:
//     Student(int v){
//         this->value = v;
//     }
//     void setValue(int v){
//         this->value = v;
//     }

//     void display() const{
//         cout <<value<<endl;
//     }
// };

// int main(){
//     const Student s1(56);
    
//     Student *ptr = const_cast<Student*>(&s1);
//     ptr->setValue(67);

//     // ptr->display();
//     // s1.display();
// }

// #include <iostream>
// using namespace std;

// int main(){

//  int num = 45;
//  int *ptr = &num;
    
// //  cout <<ptr<<endl;
// cout <<ptr<<endl;
// uintptr_t address = reinterpret_cast<uintptr_t>(ptr);
// cout <<address<<endl;

// int* newPtr = reinterpret_cast<int*>(address);  // Convert back to pointer
//     cout << "Value at new pointer: " << newPtr << endl;  // Should print 42


// }


// #include <iostream>
// #include <fstream>  // For file handling
// using namespace std;

// int main() {
    // int num = 12345;  // Some number to store

    // ofstream outFile("data.bin", ios::binary);  // Open file in binary mode
    // outFile.write(reinterpret_cast<char*>(&num), sizeof(num));  // Convert int* to char*
    // outFile.close();

    // cout << "Number written to file!" << endl;


    // int num;

    // ifstream outFile("data.bin", ios::binary); 
    // outFile.read(reinterpret_cast<char*>(&num), sizeof(num));  
    // outFile.close();

    // cout <<"Numebr is: "<<num<<endl;

//     return 0;
// }


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student {
    public:
    int id;
    char name[20];
    float marks;

    // Constructor to initialize values
    Student(int i = 0, const char* n = "", float m = 0.0) {
        id = i;
        strcpy(name, n);
        marks = m;
    }

    // Function to display student details
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    // Student s(101, "Anand", 88.5);  // Creating an object

    // ofstream outFile("student_class.bin", ios::binary);
    // outFile.write(reinterpret_cast<char*>(&s), sizeof(s));  // Convert object* to char*
    // outFile.close();

    // cout << "Student object written to file!" << endl;

    Student s;  // Creating an object

    ifstream outFile("student_class.bin", ios::binary);
    outFile.read(reinterpret_cast<char*>(&s), sizeof(s));  // Convert object* to char*
    outFile.close();

    s.display();

    return 0;
}
