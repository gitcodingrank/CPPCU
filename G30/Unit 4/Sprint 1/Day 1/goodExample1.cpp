//Good Examples: Text File = Human Readable/Editable
//Student Task 1: Create a file called students.txt and add 10 students dynamically take input from user.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

string addStudentToFile(int id, string name, string city){
    ofstream file("students.txt", ios::app);
    /*
    student file in each line format(csv) - 45,Rakesh,Noida
    */
    file <<id<<","<<name<<","<<city<<"\n";
    file.close();

    if(file.good())
        return "Student has added...";
    else
        return "Something Went Wrong Couldn't add the student.";
}

void getStudentById(int id){
    ifstream file("students.txt");
    //string - "45,Rakesh,Noida"
    string line;
    bool found = false;
    while(getline(file, line)){
        stringstream ss(line); //converted to stream buffer
        string studentId, name, city;

        getline(ss, studentId, ',');
        getline(ss, name, ',');
        getline(ss, city, ',');

        // if(studentId==to_string(id))
        //     cout <<"Student Id: "<<studentId<<" Stundet Name: "<<name<<" Student City: "<<city<<endl;

        if(stoi(studentId)==id){
            found = true;
            cout <<"Student Id: "<<studentId<<" Stundet Name: "<<name<<" Student City: "<<city<<endl;
        }      
    }

    if(!found)
        cout <<"Invalid Student Id"<<endl;

    file.close();

}

void deleteStudentById(int id){
    ifstream file("students.txt");
    
    vector<string>students;
    string line;
    
    while(getline(file, line)){
        students.push_back(line);     
    }
    file.close();

    ofstream addFile("students.txt");

    for(auto &str:students){
        stringstream ss(str);
        string studentId;
        getline(ss, studentId, ',');

        if(stoi(studentId)!=id){
            addFile<<str<<"\n";
        }
    }
    addFile.close();
}


int main(){




    //Writing the student to the file
    // while(true){
    //     int id;
    //     string name, city;
        
    //     cout <<"Enter Student Id: ";
    //     cin >>id;

    //     cin.ignore();

    //     cout <<"Enter Student Name: ";
    //     getline(cin, name);

    //     cout <<"Enter Student City: ";
    //     getline(cin, city);
    //     cout <<addStudentToFile(id, name, city)<<endl;

    //     cout <<"Do you want to add more students(y/n)?: ";
    //     char res;
    //     cin >>res;
    //     if(res=='n' || res=='N'){
    //         return 0;
    //     }
    // }

    //getStudentById(12);
    deleteStudentById(12);

    




}