//More About File Handling:
/*
Student Task:
Create a file named student.txt, and add some student details like(rollNumber, name, city) dynamically.
Note: Make sure to take input for each student from the user.

1. Add Student
2. Get Student By Roll Number
3. Exit

Enter Your Choice: 1
    
Enter Student Roll Number: 45
Enter Student Name: Pankaj Kumar
Enter Student City: Delhi

Student added successfully.

1. Add Student
2. Get Student By Roll Number
3. Exit
Enter Your Choice: 3
Thank you for using.

student.txt file data format:
342323,Pankaj,Noida
342323,Pankaj,Noida
342323,Pankaj,Noida
342323,Pankaj,Noida
*/

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

string addStudent(){

        int rollNumber;
        string name, city;

        cout <<"Enter Student Roll Number: ";
        cin >>rollNumber;

        cin.ignore();
        cout <<"Enter Student Name: ";
        getline(cin,name);

        cout <<"Enter Student City: ";
        getline(cin,city);
            
        ofstream file("student.txt", ios::app); //opened for writing
        file <<rollNumber<<","<<name<<","<<city<<"\n";
        file.close();
        return "Student Added successfully.";
}

void getStudentById(){
        int rollNumber;
        cout <<"Enter Student Roll Number: ";
        cin >>rollNumber;

        ifstream file("student.txt"); //opened for reading
        string line;
        bool found = false;

        while(getline(file, line)){


            //Approach 1:
            stringstream ss(line);
            string r;
            
            string name, city;
            getline(ss, r, ',');
            getline(ss, name, ',');
            getline(ss, city, ',');


            if(stoi(r)==rollNumber){
                found = true;
                cout <<"--------------------------------------------------------"<<endl;
                cout <<"Roll Number: "<<r<<" Name: "<<name<<" City: "<<city<<endl;
                cout <<"--------------------------------------------------------"<<endl;
            }

            //Approach 2:
            // int r;
            // string name, city;
            //data in each line - 45434,Rakesh,Noida
            // int pos1 = line.find(",");
            // int pos2 = line.rfind(",");

            // r = stoi(line.substr(0, pos1));
            
            // if(r==rollNumber){
            //     found = true;
            //     name = line.substr(pos1+1,pos2);
            //     city = line.substr(pos2+1);
    
            //     cout <<"--------------------------------------------------------"<<endl;
            //     cout <<"Roll Number: "<<r<<" Name: "<<name<<" City: "<<city<<endl;
            //     cout <<"--------------------------------------------------------"<<endl;
            // }

        
        }
        if(!found){
            cout <<"--------------------------------------------------------"<<endl;
            cout <<"Invalid Roll Number"<<endl;
            cout <<"--------------------------------------------------------"<<endl;
        }
        file.close();
}

void showMenu(){
        cout <<"1. Add Student"<<endl;
        cout <<"2. Get Student By Id"<<endl;
        cout <<"3. Exit"<<endl;
        cout <<"Enter Your Choice: ";
}

int main(){
    
        bool isAppRunning = true;
    while(isAppRunning){

        showMenu();

        int choice;
        cin >> choice;

        switch(choice){
        case 1:
            cout <<addStudent()<<endl;
            break;
        case 2:
            getStudentById();            
            break;
        case 3:
            cout <<"Do you want to exit(y/n)?: ";
            char res;
            cin >>res;
            if(res=='y' || res=='Y')
                isAppRunning = false;
            cout <<"Thank you for using the applicaiton!";
            break;
        default:
            cout <<"Invalid Choice, Please try again!";
            break;
        }


    }

}