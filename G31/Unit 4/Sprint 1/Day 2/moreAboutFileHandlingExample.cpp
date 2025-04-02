#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void deleteStudentById(int id){
    ifstream file("data.txt"); //opened in reading mode
    
    vector<string> students;
    string line;
    while(getline(file, line)){
        students.push_back(line);
    }
    file.close();

    //logic for deletion:
    ofstream writeFile("data.txt");
    bool found = false;
    for(auto &student: students){
        //string - string - "45,Rakesh,Noida"
        stringstream ss(student);
        string studentId, name, city;
        getline(ss, studentId, ',');
        getline(ss, name, ',');
        getline(ss, city, ',');

        if(stoi(studentId)!=id){
            writeFile <<student<<"\n";
            //cout <<"Student Id: "<<studentId<<" Student Name: "<<name<<" Student City: "<<city<<endl;
        }else{
            found = true;
        }
    }
    if(!found)
        cout <<"Invalid Student Id"<<endl;
    else
        cout <<"Student with Id "<<id<<" has deleted successfully"<<endl;

    writeFile.close();
}

void udpateStudentById(int studentId, string studentName, string studentCity){
    ifstream file("data.txt"); //opened in reading mode
    
    vector<string> students;
    string line;
    while(getline(file, line)){
        students.push_back(line);
    }
    file.close();

    //logic for deletion:
    ofstream writeFile("data.txt");
    bool found = false;

    for(auto &student: students){
        //string - string - "45,Rakesh,Noida"
        stringstream ss(student);
        string id, name, city;
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, city, ',');
        
        if(stoi(id)==studentId){
            found = true;
            writeFile<<id<<","<<studentName<<","<<studentCity<<"\n";
        }else{
            writeFile<<student<<"\n";
        }
    }

    if(found){
        cout <<"Student with Id "<<studentId<<" has updated successfully"<<endl;
    }else{
        cout <<"Can't update as this is invalid student id"<<endl;
    }

    writeFile.close();
}

int main(){

    //deleteStudentById(56);
    udpateStudentById(456, "Damru", "Chandigarh");

}