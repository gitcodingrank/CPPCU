//C++ Type Conversion:
/*
1. static_cast: compile time type conversion
2. dynamic_cast: run time type conversion
3. const_cast: remove the const qualifier to modify the data
4. reinterpret_cast: low level programming/binary files
*/


//1. static_cast: compile time type conversion

// #include <iostream>
// #include <vector>
// using namespace std;

// class Animal{
//     public:
//     virtual void sound(){cout <<"Animal sounds"<<endl;};
// };
// class Dog: public Animal{
//     public:
//     void sound(){cout <<"Dog barks"<<endl;};
//     void fetch(){cout <<"Dog is fetching something"<<endl;};
// };
// class Cat: public Animal{
//     public:
//     void sound(){cout <<"Cat meows"<<endl;};
//     void fetch(){cout <<"Cat is fetching something"<<endl;};
// };

// void identifyAnimal(Animal *animal){
//     Dog *dog = dynamic_cast<Dog*>(animal);
//     if(dog){
//         cout <<"This is Dog"<<endl;
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

// int main(){

//     //basic(primitive) type conversion example
//     // char ch;
//     // cout <<"Enter Character: ";
//     // cin >>ch;

//     // //find the ascii value of character:
//     // // int asciiValue = (int)ch; //c-style casting
//     // // int asciiValue = int(ch); //function style casting
//     // int asciiValue = static_cast<int>(ch); //c++ style casting
//     // cout <<asciiValue<<endl;

//     // Animal *animal;
//     // Dog *dog = new Dog();
//     // animal = static_cast<Animal*>(dog);
//     // //animal->sound();
//     // // animal->fetch();
//     // dog->fetch();
//     // dog->sound();

//     // Animal *animal = new Dog();
//     // Dog *dog = dynamic_cast<Dog*>(animal);

//     // if(!dog){
//     //     cout <<"This is not Dog Object"<<endl;
//     //     return 0;
//     // }

//     // dog->fetch();
//     // dog->sound();

//     //Note: static_cast gives undefined behavior at run time.

//     vector<Animal*> animals = {new Dog(), new Cat(), new Animal()};

//     for(Animal* animal: animals){
//         identifyAnimal(animal);
//     }

// }


// #include <iostream>
// using namespace std;

// // void modifyValue(const int* p){
// //     int *ptr = const_cast<int*>(p);
// //     *ptr  = 56;
// // }

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
//         cout <<"Value is: "<<value<<endl;
//     }
// };

// int main(){

//     //const_cast: to remove the const_qualifier from the variable declared using const keyword to modify.
//     //Note: it doesn't work for normal truly const variable but still you can do, see the blow examples:

//     // int num = 45; //truly const variable

//     // // int *ptr = const_cast<int*>(&num);
//     // // *ptr = 56;
//     // modifyValue(&num);

//     // cout <<num<<endl;

//     const Student s(45);
//     s.display();

//     Student *str = const_cast<Student*>(&s);
//     str->setValue(78);

//     s.display();


    

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 42;
//     int* p = &a;

//     uintptr_t address = reinterpret_cast<uintptr_t>(p);  // Convert pointer to integer
//     cout << "Pointer as Integer: " << address << endl;

//     int* newPtr = reinterpret_cast<int*>(address);  // Convert back to pointer
//     cout << "Value at new pointer: " << *newPtr << endl;  // Should print 42

//     return 0;
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


    // int num;  // Some number to store

    // ifstream outFile("data.bin", ios::binary);  // Open file in binary mode
    // outFile.read(reinterpret_cast<char*>(&num), sizeof(num));  // Convert int* to char*
    // outFile.close();

    // cout << "Number is:"<<num<< endl;
//     return 0;
// }


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student {
public:
    int id;
    char name[20];  //c style
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

