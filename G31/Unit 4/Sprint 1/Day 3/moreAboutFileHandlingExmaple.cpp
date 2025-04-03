//modes - ios::in/out/app/binary/ate
//Errors Handling Methods in File Handling - is_open(), eof(), fail(), bad(), good()
//Reading and Writing Pointer ->
//1. seekp/seekg(modifing the reading and writing pointer position)
//2. tellp/tellg(tell about the reading and writing pointer position)

//If i want to open the same file in both mode reading, and writing using one object.
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    fstream file("data.txt", ios::in | ios::out);

    if(!file.is_open()){
        cout <<"File has not opened for any operation."<<endl;
        return 0;
    }

    //reading and writing pointer position
    cout <<file.tellg()<<endl;
    cout <<file.tellp()<<endl;

    file <<"Hello";

    cout <<file.tellg()<<endl;
    cout <<file.tellp()<<endl;
    file.seekg(2,ios::beg);
    cout <<file.tellg()<<endl;

    string str;
    file >>str;
    cout <<str<<endl;


}