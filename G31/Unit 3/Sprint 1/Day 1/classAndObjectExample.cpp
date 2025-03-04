/*
Problem Statement: Create a class as Book having following data members and functions.
data members:

bookTitle,
author
numberOfPages
price

function:

void displayDetails(){

}
Note: make sure to create the object using constructor function
*/

#include <iostream>
#include <vector>
using namespace std;

// class Book{
//     public:
//     //data members: states/properties/how it looks
//     string title;
//     string author;
//     int pages;
//     float price;

//     //default contstructor function
//     Book(){

//     } 

//     //parameterized contstructor function
//     Book(string bookTitle, string bookAuthor, int bookPages, float bookPrice){
//         title = bookTitle;
//         author = bookAuthor;
//         pages = bookPages;
//         price = bookPrice;
//     }

//     //methods: 
//     void printDetails(){
//         cout <<"Title: "<<title<<endl;
//         cout <<"Author: "<<author<<endl;
//         cout <<"Price: "<<price<<endl;
//         cout <<"Pages: "<<pages<<endl;
//     }
    
// };


// int main(){

//     Book b1 = Book("The Great Khali", "Mr. Khali", 450, 9999.67);
//     b1.printDetails();

// }

/*
Problem Statement: Create a class as Student having following data members and 
data members:
studentName
studentRollNumber
studentMarks
studentCity

void printStudentAccordingToGivenParameters(string type, void* value){
    //filter students according to given parameters
}

Note:
1. Make sure to use constructor function to create atleast 6 objects
2. add all objects to the array(normal array/vector)

*/



class Student{
    public:
    string studentName;
    int studentRollNumber;
    int studentMarks;
    string studentCity;
    
    Student(string name, int rollNo, int marks, string city){
        studentName = name;
        studentRollNumber = rollNo;
        studentMarks = marks;
        studentCity = city;
    }
    
    void printStudentsDetailsAccordingToGivenParameters(string type, void* value, vector<Student>& students){
        
        //Just Example to understand not entire solution
        if(type=="name"){
            string realValue = *(static_cast<string*>(value));
            cout <<"Name Value is: "<<realValue<<endl;
        }
        else if(type=="rollNo"){
            int realValue = *(static_cast<int*>(value));
            cout <<"Roll Number is: "<<realValue<<endl;
        }

        for(int i=0;i<students.size();i++){
            cout<<students[i].studentName<<endl;
        }
    }
};

Student takeInputForStudent(){
    string name, city;
    int rollNo, marks;
    
    cout <<"Enter Student Name: ";
    getline(cin, name);
    
    cout <<"Enter Student City: ";
    getline(cin, city);
    
    Student newStudent = Student(name, rollNo, marks, city);
    return newStudent;
}
vector<Student> students;

int main(){

Student s1 = Student("Chaman", 45, 99.98, "Delhi");
students.push_back(s1);
string nameValue = "rakesh";
s1.printStudentsDetailsAccordingToGivenParameters("name", &nameValue, students);

}


