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
    Student s(101, "Anand", 88.5);  // Creating an object

    ofstream outFile("student_class.dat", ios::binary);
    outFile.write(reinterpret_cast<char*>(&s), sizeof(s));  // Convert object* to char*
    outFile.close();

    cout << "Student object written to file!" << endl;


    Student s1;

    ifstream inFile("student_class.bin", ios::binary);
    inFile.read(reinterpret_cast<char*>(&s1), sizeof(s1));  // Convert back
    inFile.close();

    cout << "Student object read from file:" << endl;
    s.display();  // Display the read values

    return 0;
}
