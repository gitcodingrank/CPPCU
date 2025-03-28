/*
File Handling: Working(reading and writing) with files(text, and binary file)
Stream? it is just flow of data, Like variables and other data structure stream doesn't store the data, it just flows the data

    <ios> - inout output stream
      |
    istream(cin) and ostream(cout, cerr, clog)
    -----------------------------------------
     |                |                    |
     |  <iostream> (cin,cout, cerr, clog)  |
     |                                    |
    ifstream(reading the file)         ofstream(writing the file)
    ------------------------------------------------------------
                     |
                 <fstream>
Why File Handling (Why to store data inside the files)? to persist the data.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){

   //writing the data into the file example:
//    ofstream file("data.txt", ios::app); //opened with writing mode
//     file << "Welcome to File File Handling"<<"\n"; //written one line
//     file <<"Learning Writing"<<"\n";
//     file <<"Learning Writing"<<"\n";
//     file <<"Learning Writing Operation"<<"\n";
//     file <<"Learning Writing Operation"<<"\n";
//    file.close();


    ifstream file("student.txt");
    string data;

    // getline(file, data);
    // cout <<data<<endl;

    // getline(file, data);
    // cout <<data<<endl;

    // getline(file, data);
    // cout <<data<<endl;

    //option 1:
    // while(getline(file,data)){
    //     cout <<data<<endl;
    // }

    //option 1:
    // while(!file.eof()){
    //     getline(file, data);
    //     cout <<data<<endl;
    // }

    // file.close();

}

/*
Student Task 1: Add table of 2 to data.txt file.
Student Task 2: Create student.txt file and add student details like below format:
45343,Rakesh,Noida
Note: Make sure to take input from the console.

Student Task:
Create an Employee Management Application with following requirements - without object oriented programming.

Welcome to Employee Management System!
1. Add Employee [Do it]
2. Get Employee By Id [Do it]
3. Get All Employees [Do it]
4. Update Employee By Id [Leave it]
5. Delete Employee By Id [Leave it]
5. Exit

Enter Your Choice: 1

Enter Employee Id: 4534
Enter Employee Name: Rahul Kumar
Enter Employee City: Noida

Employee Added Successfully!

1. Add Employee
2. Get Employee By Id
3. Get All Employees
4. Update Employee By Id
5. Delete Employee By Id
5. Exit

Enter Your Choice: 2

Enter Employee Id: 4534
------------------------------------------------------------------
Employee Id: 4534, Employee Name: Rahul Kumar, Employee City: Noida
-------------------------------------------------------------------

1. Add Employee
2. Get Employee By Id
3. Get All Employees
4. Update Employee By Id
5. Delete Employee By Id
5. Exit

Enter Your Choice: 2

Enter Employee Id: 453423
------------------------------------------------------------------
INVALID Employee Id: Kindly Enter Correct Employee Id Else Register..
-------------------------------------------------------------------

1. Add Employee
2. Get Employee By Id
3. Get All Employees
4. Update Employee By Id
5. Delete Employee By Id
5. Exit

Enter Your Choice: 5

Do you want to exit(y/n)?: Y
Thank you for using the application.

Note: Keep the employee data in employee.txt file in the below format
4343,Rakesh,Noida

*/