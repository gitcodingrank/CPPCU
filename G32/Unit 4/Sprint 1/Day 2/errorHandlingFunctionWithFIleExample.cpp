//Note: In c++, File handling when file doesn't exist and file path is not correct then in this it gives error as nothing so as a developer it is important to handle those error so that we can work effectively with files.

//There are following error handling functions:
/*
1. is_open() - it checks file has successfully opened or not
2. eof() - it checks the pointer is at end of the file or not.alignas
3. fail() - it checks for validation purpose before reading and writing the file
4. bad() - it checks any seriouse/hardware failure error
5. good() - it checks if file state is good or not.
*/

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){

//     //Example for is_open()
//     ifstream file("random.txt");

//     if(!file.is_open()){
//         cout <<"FIle couldn't open, Something Went Worng"<<endl;
//         return 0;
//     }
    
//     string str;
//     file >>str;
//     cout <<str<<endl;


// }

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    //Example for eof()
    ifstream file("data.txt");

    if(!file.is_open()) return 0;

    if(file.eof()){
        cout <<"You're already at end of file"<<endl;
        return;
    }

    string word;
    while(file >>word){ //word by word
        cout <<word<<endl;
    }

    //It is will unpredicated behavior - garbage value
    if(file.eof()){
        cout <<"You're already at end of file"<<endl;
        return;
    }
}