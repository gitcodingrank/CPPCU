#include <iostream>
#include <fstream>
using namespace std;

int main(){


    // fstream file("example.txt", ios::in | ios::out);  // Open file for both reading and writing

    // if (file.is_open()) {
    //     string content;
    //     file >> content;

    //     cout << "Content read from file: " << content << endl;

    //     file.seekp(0, ios::beg);  // Move pointer to the beginning for writing
    //     file << "Updated content" << endl;
    //     file.close();
    // }else{
    //      cout <<"Something went wrong while opening the file"<<endl;
    // }


    //open():
    ofstream file1;
    file1.open("data.txt", ios::out | ios::binary);

    ifstream file2;
    file2.open("data.txt", ios::in | ios::binary);

    fstream file3;
    file3.open("data.txt", ios::in | ios::out | ios::binary);

}