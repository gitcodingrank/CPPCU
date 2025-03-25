//Type Conversion: The process of converting one data type to the another data type.
//Types of Conversion:
//1. Implicit(Automatically) - by compiler: when happens - small data type is converted to big data type.
//Example: short to int, char to int
//2. Explicit(Force Fully) - by programmer: when happens - big data type is converted to the small data type.
//Exmaple: int to short - data loses chances are there.

//Primitive data Type - Implicit/Explicit Conversion
//Object Type Conversion? - Implicit and Explicit


//Type Conversion between Basic Type(Primitive-int, float, long, double, char,etcs) to Object Type
// #include <iostream>
// using namespace std;

// class Number{
//     public:
//     int value;

//     Number(int v){
//         cout <<"Constructor Called.."<<endl;
//         value = v;
//     }
// };

// int main(){

//     int intValue = 45; //primitive type
//     Number num = intValue; //Automatically converted to the Number object by constructor - Implicit Object Conversion
//     cout <<num.value<<endl;

// }

//Class Type to Basic Type:
// #include <iostream>
// using namespace std;

// class Number {
//     int value;
// public:
//     Number(int x) { value = x; }  // Constructor

//     operator int() { return value; }  // Conversion function
// };

// int main() {
//     Number obj = 50; // primitive(basic) to object
    
//     int num = obj;  // Implicit conversion (Number → int)
//     cout << "Converted value: " << num << endl;
//     return 0;
// }


// class SpecialCharacter{
//     char specialChar;
//     public:
//     SpecialCharacter(char c){
//         specialChar = c;

//     }
//     //need conversion function to convert SpecialCharacterObject to char primitive type.
// };


//Object to Another Object Type - 1. using conversion Function, 2. using constructor:

//1. conversion function:
#include <iostream>
using namespace std;

class Square {
    int side;
public:
    Square(int s) { side = s; }

    int getSide() { return side; }
};

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}

    operator Square() { // Conversion function
        return Square(min(width, height));
    }
};

int main() {
    Rectangle rect(10, 6);
    Square sq = rect;  // Implicit conversion (Rectangle → Square)
    cout << "Side of Square: " << sq.getSide() << endl;
    return 0;
}

/*
Super Beautiful Problem Statment:
Student Class - name, rollNumber, marks
Grade Class - name, rollNumber, grade(decide on the basic marks)

Student st("Pawan", 456, 80);
Grade d = st;
cout <<d.grade<<endl; //B

*/

//2. constructor function:
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    int getWidth() { return width; }
    int getHeight() { return height; }
};

class Square {
    int side;
public:
    Square(Rectangle r) {  // Conversion constructor
        side = min(r.getWidth(), r.getHeight());
    }
    void display() { cout << "Side of Square: " << side << endl; }
};

int main() {
    Rectangle rect(8, 5);
    Square sq = rect;  // Implicit conversion (Rectangle → Square)
    sq.display();
    return 0;
}
