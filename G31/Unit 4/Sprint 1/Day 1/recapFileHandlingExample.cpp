#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){

    //Writing the data - ofstream
    // ofstream file("data.txt", ios::app); //file has opened in writing mode
    
    // if(file.is_open())
    // cout <<"File is opened.."<<endl;
    // else
    // cout <<"Something went wrong while opening the file."<<endl;

    // //writing some text
    // //file <<"Welcome to File Handling"<<"\n";
    // //CSV FORMAT:
    // //file <<"Name,"<<"Marks,"<<"City"<<"\n";
    // file <<"Bholu,"<<67<<",Delhi"<<"\n";
    // file <<"Rahul,"<<78<<",Gurugram"<<"\n";
    
    // file.close();
    
    // ifstream file(data.txt);

    //Reading the file: ifstream
    ifstream file("data.txt");
    
    // if(file.good())
    //     cout <<"File has opened.."<<endl;
    // else
    //     cout <<"Something Went Wrong While Opening the file"<<endl;

    string str;
    // file >> str;
    // getline(file, str); //line 1
    // cout <<str<<endl;

    // getline(file, str); //line 2
    // cout <<str<<endl;

    // getline(file, str); //line 3
    // cout <<str<<endl;

    // getline(file, str); //line 4
    // cout <<str<<endl;

    // getline(file, str); //line 5
    // cout <<str<<endl;

    // getline(file, str); //line 6
    // cout <<str<<endl;

    //option 1:
    // while(getline(file, str)){
    //     cout <<str<<endl;
    // }

    //option 2:
    // while(!file.eof()){
    //     getline(file, str);
    //     cout <<str<<endl;
    // }


    //Good Example: Retreive only meaningful data.
    //Task: Get the name of student who has rollNumber as 67
    // int index = 0;
    // while(!file.eof()){
    //     index++;
    //     getline(file, str);
    //     if(index>=3){
    //         // cout <<str<<endl;
    //         //logic 1: substring
    //         //-------------------------------------------------------
    //         // int pos1 = str.find(","); //index of first occurance char
    //         // string rollNumber = str.substr(0, pos1);
    //         // int inputRollNumber = 67;
    //         // if(stoi(rollNumber) == inputRollNumber){
    //         //     cout <<"Found at line: "<<index<<endl;
    //         //     int pos2 = str.rfind(","); //give the index of firs occured char from the last.
    //         //     cout <<str.substr(pos1+1, pos2)<<endl;
    //         //     cout <<str.substr(pos2+1)<<endl;
    //         // }
    //         // else
    //         //     cout <<"Invalid Roll Number"<<endl; 
    //         //-------------------------------------------------------
    //         //option 2:
    //         stringstream ss(str);
    //         string rollNumber, name, city; 
    //         getline(ss, rollNumber, ',');
    //         getline(ss, name, ',');
    //         getline(ss, city, ',');

    //         int inputRollNumber = 67;
    //         if(inputRollNumber == stoi(rollNumber)){
    //             cout <<"Roll Number: "<<rollNumber<<endl;
    //             cout <<"Name: "<<name<<endl;
    //             cout <<"City: "<<city<<endl;
    //         }

    //         //-------------------------------------------------------
            
    //     }
    // }

    // file.close();

}
