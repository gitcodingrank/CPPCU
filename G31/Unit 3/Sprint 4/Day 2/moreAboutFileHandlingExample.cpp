//File Handling
/*
Student Task: Create a file student.txt and file for the file for adding different students name on different line in the student.txt file.
Note: Make sure you're taking the input dynamically.
*/

#include <iostream>
#include <fstream>

using namespace std;

string addStudent(int rollNumber, string name, string city){

    ofstream file("student.txt", ios::app);
    file <<rollNumber<<","<<name<<","<<city<<"\n";
    file.close();
    return "Student added to the file successfully.";

}

string getStudentByRollNumber(int rollNumber){
    ifstream file("student.txt");
    string line;
    bool found = false;
    while(getline(file, line)){
        // cout <<line<<endl;
        int pos = line.find(",");
        int r = stoi(line.substr(0, pos));
        // cout <<"Roll Number: "<<r<<endl;
        if(r==rollNumber){
            found=true;
            break;
        }
    }
    file.close();
    if(found)
        return "Student Found";
    else
        return "Invalid Roll Number";
}

int main(){

//  while(true){
//     int rollNumber;
//     string name, city;

//     cout <<"Enter Student Roll Number: ";
//     cin >>rollNumber;

//     cin.ignore();
//     cout <<"Enter Student Name: ";
//     getline(cin,name);

//     cout <<"Enter Student City: ";
//     getline(cin,city);

//     cout <<addStudent(rollNumber, name, city)<<endl;
   
//     cout <<"Do you want to add more students(y/n)?: ";
//     char res;
//     cin>>res;
//     if(res=='n' || res == 'N')
//         return 0;
//     }

    cout <<getStudentByRollNumber(45343)<<endl;

}