// #include <iostream>
// using namespace std;

// //Basic Type to Class Type:

// class Number {
//     int value;
// public:
//     Number(int x) {  // Constructor for conversion
//         value = x;
//     }
//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     int num = 100;
//     Number obj = num;  // Implicit conversion (int → Number)
//     obj.display();

//     int num2 = 200;
//     Number obj2 = num2;
//     obj2.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// //Class Type to Basic Type(Number ---> int)

// class Number {
//     int value;
// public:
//     Number(int x) { value = x; }  // Constructor

//     operator int() { return value; }  // Conversion function
//     operator double() { return value*1.45; }  // Conversion function
// };

// int main() {
//     Number obj = 50; //Type Conversion -> Basic Type(int)---->Class Type(Number)
//     int num = obj;  // Implicit conversion (Number → int)
//     cout << "Converted value: " << num << endl;

//     double value = obj;
//     cout << "Converted value: " << value << endl;
//     return 0;
// }


//Class Type to Another Class Type: using conversion function:
// #include <iostream>
// using namespace std;

// class Square {
//     int side;
// public:
//     Square(int s) { side = s; }
//     int getSide() { return side; }
// };

// class Rectangle {
//     int width, height;
// public:
//     Rectangle(int w, int h) : width(w), height(h) {}

//     operator Square() { // Conversion function
//         return Square(min(width, height));
//     }
// };

// int main() {
//     Rectangle rect(10, 6);
//     Square sq = rect;  // Implicit conversion (Rectangle → Square)
//     cout << "Side of Square: " << sq.getSide() << endl;
//     return 0;
// }

//Class Type to Another Class Type: using constructor function
// #include <iostream>
// using namespace std;

// class Rectangle {
//     int width, height;
// public:
//     Rectangle(int w, int h) : width(w), height(h) {}

//     int getWidth() { return width; }
//     int getHeight() { return height; }
// };

// class Square {
//     int side;
// public:
//     Square(Rectangle r) {  // Conversion constructor
//         side = min(r.getWidth(), r.getHeight());
//     }
//     void display() { cout << "Side of Square: " << side << endl; }
// };

// int main() {
//     Rectangle rect(8, 5);
//     Square sq = rect;  // Implicit conversion (Rectangle → Square)
//     sq.display();
//     return 0;
// }


#include <iostream>
using namespace std;

// class Grade;
class Grade{
    char grade;
    public:
    Grade(char g){
        grade = g;
    }
    char showGrade(){
        return grade; 
    }
};

class Student{
    int marks;
    public:
    Student(int m){
        marks = m;
    }

    operator Grade(){
        //logic to convert grade on the basis of marks
        char g;
        if(marks>=90){
            g = 'A';
        }else if(marks >= 80){
            g = 'B';
        }else if(marks >= 70){
            g = 'C';
        }else if(marks>=60){
            g = 'D';
        }else{
            g = 'F';
        }
        return Grade(g);
    }

};


int main(){

    Student s1(45);
    Grade g = s1;
    cout <<g.showGrade()<<endl;

}
