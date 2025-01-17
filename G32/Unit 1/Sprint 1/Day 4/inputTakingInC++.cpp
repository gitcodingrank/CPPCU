#include <iostream>

using namespace std;

int main(){
    //to show output: cout uses stream insertion operator (<<)
    //to take input: cin uses stream extraction operator (>>)

    //input taking for single value
    // cout <<"Enter Age: ";

    // int age;
    // cin >> age;

    // cout <<"Value of age: " <<age;

    //Multiple value input taking:

    // cout <<"Enter Age and Salary: ";

    // int age;
    // float salary;
    // cin >> age >> salary;

    // cout <<"Age is: " <<age<<" and Salary is: "<<salary;


    //Take input for string:

    string msg;

    cout <<"Enter your msg: ";

    getline(cin, msg);

    cout <<"Your msg is: "<< msg;

}


/*
Student Tasks:
Task 1: Write a program to input your name and age, then display them.
Task 2: Create variables of type int, float, and char. Assign values and display them.
Task 3: Take two integers as input and print their sum.
Task 4: Write a program to calculate the area of a rectangle using inputs for length and width.
Task 5: Input three different data types (int, float, and char) and print them together in one line.
Task 6: Swap two numbers using a temporary variable.
Task 7: Write a program to find the square of an input number.
Task 8: Create a program to input and print a multi-word sentence using getline().

*/