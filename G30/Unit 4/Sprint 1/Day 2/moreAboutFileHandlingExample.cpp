#include <iostream>
#include <fstream>
using namespace std;

int main(){

    //fstream file("example.txt", ios::in | ios::out); 
    // if (file.is_open()) {

    //     string content;
    //     file >> content; //puting the first  token to the content variable
    //     cout << "Content read from file: " << content << endl;
        
    //     file.seekp(0, ios::beg);  // Move pointer to the beginning for writing
    //     file << "Updated content" << endl;
    //     file.close();
    // }

    fstream file1;
    file1.open("data.txt", ios::app | ios::in | ios::binary);

    ofstream file2;
    file2.open("data.txt", ios::out);

}