#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;


void addStudent(){
    int id;
    string name, city;
    
    cout <<"Enter Unique Student Id: ";
    cin>>id;
     
    cin.ignore();
    cout <<"Enter Student Name: ";
    getline(cin, name);

    cout <<"Enter Student City: ";
    getline(cin, city);

    //opened the file with writing mode
    ofstream file("student.txt", ios::app);
    
    if(!file.is_open()){
        cout <<"Something went wrong while opening the file"<<endl;
        return;
    }
    file <<id<<","<<name<<","<<city<<"\n";
    file.close();
    cout <<"Student has added successfully.."<<endl;
}

void getStudentById(){
    int id;
    cout <<"Enter Student Id: ";
    cin>>id;

    ifstream file("student.txt");
    string line;
    while(getline(file, line)){
        stringstream ss(line);
        string studentId, studentName, studentCity;
        getline(ss, studentId, ',');
        
        if(stoi(studentId) == id){
            getline(ss, studentName, ',');
            getline(ss, studentCity, ',');
            cout <<"============================================================================================="<<endl;
            cout <<"Student Id: "<<studentId<<" Student Name: "<<studentName<<" Student City: "<<studentCity<<endl;
            cout <<"============================================================================================="<<endl;
            return;
        }
    }
    cout <<"============================================================================================="<<endl;
    cout <<"Invalid Student Id, Please try again!"<<endl;
    cout <<"============================================================================================="<<endl;
    file.close();
}

void updateStudentById(){

    int id;
    string name, city;
    
    cout <<"Enter Student Id: ";
    cin>>id;

    vector<string> students;

    ifstream file("student.txt");

    string line;
    while(getline(file, line)){
        students.push_back(line);
    }
    file.close();

    //["34,Rakesh,Noida", "56,Deepak,Delhi"]

    ofstream addFile("student.txt");
    bool found = false;

    for(auto &student: students){
        //34,Rakesh,Noida
        stringstream ss(student);
        string studentId;
        getline(ss, studentId, ',');
        if(stoi(studentId)==id){
            found = true;
            cin.ignore();
            cout <<"Enter Student Name: ";
            getline(cin, name);
        
            cout <<"Enter Student City: ";
            getline(cin, city);
            addFile <<id<<","<<name<<","<<city<<"\n";
        }else{
            addFile<<student<<"\n";
        }
    }
    if(found)
        cout <<"Student with Id "<<id<<" has updated successfully.."<<endl;
    else
        cout <<"Invalid Student Id, Please try again!"<<endl;
    
    addFile.close();

}

void deleteStudentById(){

    int id;
    cout <<"Enter Student Id: ";
    cin>>id;

    vector<string> students;

    ifstream file("student.txt");

    string line;
    while(getline(file, line)){
        students.push_back(line);
    }
    file.close();

    //["34,Rakesh,Noida", "56,Deepak,Delhi"]

    ofstream addFile("student.txt");
    bool found = false;

    for(auto &student: students){
        //34,Rakesh,Noida
        stringstream ss(student);
        string studentId;
        getline(ss, studentId, ',');
        
        if(stoi(studentId)!=id){
            addFile <<student<<"\n";
        }else{
            found = true;
        }
    }
    if(found)
        cout <<"Student with Id "<<id<<" has deleted successfully.."<<endl;
    else
        cout <<"Invalid Student Id, Please try again!"<<endl;
    
    addFile.close();
}

int main(){

    bool isRunning = true;
    while(isRunning){
         cout <<"1. Add Student"<<endl;
         cout <<"2. Get Student By Id"<<endl;
         cout <<"3. Update Student By Id"<<endl;
         cout <<"4. Delete Student By Id"<<endl;
         cout <<"5. Exit"<<endl;
         cout <<"Enter Your Choice: ";
         int choice;
         cin>>choice;

         switch (choice)
         {
         case 1:
            addStudent();
            break;
        case 2:
            getStudentById();
            break;
        case 3:
            updateStudentById();
            break;
        case 4:
            deleteStudentById();
            break;
        case 5:
            cout <<"Do  you want to exit(y/n)?: ";
            char res;
            cin >>res;
            if(res=='y' || res=='Y'){
                isRunning = false;
                cout <<"Thank you for using application"<<endl;
            }
            break;
         default:
            cout <<"Invalid Input, Please try again!"<<endl;
            break;
         }
    }

}
