#include <iostream>
#include <fstream>
using namespace std;

int main(){


    fstream file("data.txt", ios::in | ios::out);

    cout <<file.tellp()<<endl; //0
    file <<"Hello";
    cout <<file.tellp()<<endl; //5

    file.seekp(0, ios::beg);
    cout <<file.tellp()<<endl; //0

    cout <<file.tellg()<<endl; //0
    file.seekg(2, ios::beg);
    cout <<file.tellg()<<endl; //2

    string word;
    file >> word;
    cout <<word; //llo


}

/*
We have two types of pointers for reading and writing in c++ file handling:
1. seekp/seekg - modify the position of reading and writing pointer
Examples:
file.seekp/g(positionToMove, mode)
file.seekp(0, ios::beg); //file.seekp(0); -modify the writing pointer position
file.seekg(0, ios::beg); //file.seekg(0); -modify the reading pointer position

other modes: ios::beg, cur, end

1. tellp/tellg - get the position of reading and writing pointer 

Note: p means put(writing), g means get(reading)


*/
