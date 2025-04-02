/*
File Handling - Working with files or Handling the Files(Text, And Binary)
Working with files - Talking about reading and writing the file.
To work with file, we need to include <fstream> library
ostream------inherits------>ofstream(responsible for writing the file)
istream------inherits------>ifstream(responsible for reading the file)
iostream-----inherits----->fstream(responsible for reading and writing)
*/

//Writing the file: Text FIles
#include <iostream>
#include <fstream>

using namespace std;

int main(){

//Writing the file
//  ofstream file("d.txt", ios::app); //opened with writing mode
// //  int i=1;
// //  while(i!=100){
// //     file <<"\nWelcome to File Handling";
// //     i++;
// //  }

// if(file.is_open()){
//     cout <<"FIle is opended..."<<endl;
// }
// file.close();

//Reading the file - ifstream

    // ifstream file("daa.txt");
    // string line;

    // if(file.is_open()){
    //     cout <<"Opened.."<<endl;
    // }

    // if(!file){
    //     cout <<"Something Went Wrong While Opening..."<<endl;
    // }

    // if(!file.good()){
    //     cout <<"Something Went Wrong While Opening..."<<endl;
    // }

    // if(file.fail()){
    //     cout <<"Something Went Wrong While Opening..."<<endl;
    // }

    // file >>line;
    // getline(file, line); 
    // cout <<line<<endl; //line 1

    // getline(file, line); 
    // cout <<line<<endl; //line 2

    // getline(file, line); 
    // cout <<line<<endl; //line 3
    // string line2;

    // getline(file, line2); 
    // cout <<line2<<endl; //line 4


    //using loop 1:
    // while(getline(file, line)){
    //     cout <<line<<endl;
    // }

    //using loop 2:
    // while(!file.eof()){
    //     getline(file, line);
    //     cout <<line<<endl;
    // }

    // file.close();


    

}