// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){
//     fstream file("example.txt", ios::in | ios::out);  // Open file for both reading and writing
//     if(file.is_open()) {
//         string content;
//         file >> content; //reading---

//         cout << "Content read from file: " << content << endl;
        
//         file.seekp(0, ios::beg);  // Move pointer to the beginning for writing
        
//         file << "Updated content" << endl;
//         file.close();
//     }
// }

/*
seekp - change the pointer position for writing
seekg - change the pointer for reading
tellp - get the current writing pointer position
tellg - get the current reading pointer position
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    // fstream file("example.txt", ios::in | ios::out); //file opened for both reading and writing mode
    // //pointer - 1. reading. 2. writing - update(seekp/g) --getPosition(tellp/g)
    // //get the reading pointer position
    // cout <<file.tellg()<<endl; //0
    // string word;
    // file >> word; 
    // cout <<word<<endl; //Data

    // cout <<file.tellg()<<endl;//0

    // file.seekg(1, ios::beg); //ios::beg/cur/end
    // cout <<file.tellg()<<endl; //2
    // file >>word; 
    // cout <<word<<endl; //ta

    //Error Handling Funciton in files:
    /*
    1. eof()
    2. fail()
    3. bad()
    4. good()
    
    */

    //Example: fail() - input validation

    // int num;
    // cin >>num;

    // if(cin.fail()){
    //     cout <<"Invalid input, kindly enter the valid number"<<endl;
    // }else{

    //     cout <<"Entered Number is: "<<num<<endl;
    // }

    //Example: bad()

    // ifstream file("example.txt");
    // string word;
    // file >>word;
    // cout <<word<<endl;
    // int num;
    // cin >>num;
    
    // if(cin.bad()){
    //     cout <<"Something Went Wrong!"<<endl;
    // }else{
    //     cout <<"Everything is good"<<endl;
    // }

    //good(): Checks if the file stream is in a good state.

}