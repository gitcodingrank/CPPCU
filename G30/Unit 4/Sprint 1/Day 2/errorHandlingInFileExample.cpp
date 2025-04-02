//Error Handling: 
/*
1. is_open() - it checks file has successfully opened or not.
2. eof() - it checks the pointer is at end of file or not.
3. fail() - it checks validation error with files
4. bad() - it checks about serious and system failure error.
5. good() - it checks the state of the file.
*/


//Exmaple of is_open():
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){

//     //Example for is_open() - it checks file has successfully opened or not.
//     fstream file("d.txt", ios::in | ios::out);

//     if(!file.is_open()){
//         cout <<"Something went wrong while opening the file"<<endl;
//     }

// }

//Exmaple of eof() - end of file:

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){

//     ifstream file("data.txt"); //opened in the reading mode.

//     if(!file.is_open()){
//         cout <<"Something went wrong while opening.."<<endl;
//         return 0;
//     }

//     string str;
//     while(file >> str){ //reading the file word by word(token by token)
//         cout <<str<<endl;
//     }

//     if(file.eof()){
//         cout <<"Pointer is already at end of file, there is nothing to read"<<endl;
//     }else{
//         string str;
//         while(file >> str){ //reading the file word by word(token by token)
//             cout <<str<<endl;
//         }
//     }
// }

//Example of fail: generally is used to check file validation - file is in good state for performing any operation.

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){



    //Example 1:
    // int num;
    // cout <<"Enter Number: ";
    // cin>>num;

    // //input validation for number
    // if(cin.fail()){
    //     cout <<"Invalid Number, Kindly Enter Valid Number"<<endl;
    //     return 0;
    // }

    // cout <<"Entered Number is: "<<num<<endl;


    //Exmaple 2:
//     ofstream file("data.txt", ios::in | ios::out);
//     if(!file.is_open()) return 0;

//     file << "Welcome to India";
//     file.close();

//     file <<"Welcome to C++";
//     if(file.fail()){
//         cout <<"Something went wrong or accidently closed the file"<<endl;
//     }
// }


//Exmaple of bad() - when there is any serious/harware failure error

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){
//     ofstream file("data.txt");
//     file <<"Data has written successfully..";
//     //system failure

//     file.setstate(ios::badbit);

//     if(file.bad()){
//         cout <<"Something went wrong, it may be hardware or system error"<<endl;
//     }
//     file <<"Another Data is written";

// }

//Example of good(): when everything is good or when state of file is good.

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    //Example of good():
    fstream file("data.txt", ios::in | ios::app);
    
    //Writin Operations
    file <<"Line 1 has Written \n";
    file <<"Line 2 has Written \n";

    if(!file.good()){
        return 0;
    }

    //Reading Operations Operations
    file.seekg(0);
    
    string line;
    getline(file, line);
    cout <<line<<endl;

    getline(file, line);
    cout <<line<<endl;

    if(file.good()){
       cout <<"Everything is good"<<endl; 
    }
}
