#include <iostream>
#include <fstream>
using namespace std;

int main(){

    fstream file("data.txt", ios::in | ios::out); //opened file for reading and writing

    if(!file.is_open()){
        cout <<"File has not opened."<<endl;
        return 0;
    }

    cout <<file.tellg()<<endl; //readin pointer Position: 0
    cout <<file.tellp()<<endl; //Writing Pointer Position: 0

    file <<"Hello";

    file.seekg(0); //updating the reading pointer position
    cout <<file.tellg()<<endl; //readin pointer Position: 0
    file.seekp(6, ios::beg);
    cout <<file.tellp()<<endl; //Writing Pointer Position: 6

    file.close();
}

/*
There are two types of writing and reading pointers:
1. seekp/seekg - modify the writing/reading pointer position
Example: updating the writing pointer
file.seekp(0)  ---> writing pointer position is zero
file.seekp(2, ios::beg)  ---> writing pointer position is 2 from zero
file.seekp(5, ios::cur)  ---> moving the writing pointer position 2 steps ahead from the current position
file.seekp(4, ios::end)  --->
Example: updating the reading pointer
file.seekg(0)  ---> reading pointer position is zero
file.seekg(2, ios::beg)  ---> reading pointer position is 2 from zero
file.seekg(5, ios::cur)  ---> moving the reading pointer position 2 steps ahead from the current position
file.seekg(4, ios::end)  --->

2. tellp/tellg - getting the position of reading and writing pointer
Note: p means put(writing), g means get(reading)
*/