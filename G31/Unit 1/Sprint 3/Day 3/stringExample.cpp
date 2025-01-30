#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){

    //Strings: it is collection/set of characters(numbers, letters, special symbols, and whitespace) enclosed in double quotation(" ") marks.

    //Note: in real life application, string is very useful for storing most essential data.

    //Examples:
    /*
    string name = "chaman lal"
    string adharNumber = "34232323243232"
    string accountNumber = "5634523424223"
    string password = "chamanLal@123"
    string address = "Sector 73, Noida"
    string fatherName= "Munna Chauhan"
    string ifsc= "SBI00329"
    string pincode= "201301"
    
    */

   //Note: In c++, we've two ways of using string.
   //1. c-style string
   //2. c++-style string

   //1. c-style string:
   //syntax: char stringName[] = "value";

    //Way 1:
//    char name[] = "Pablo";
//    cout <<name<<endl;

   //Way 2:
//    char name[] = {'P', 'a', 'b','l','o','\0'};
//    cout <<name<<endl;

 //Way 3:
//    char name[6] = {'P', 'a', 'b','l','o','\0'};
//    cout <<name<<endl;

//    //Method Supports:
//    cout <<strlen(name)<<endl;


//c++ style string:
//Syntax: string stringName = "value";

//Example: 
// string name = "Pablo";
// cout <<name<<endl;

//Important Pointers about C++ Style String:
//1. It follows 0 based indexing meaning that first character of string will start with 0 index and second with 1 and so on.

//2. In C++, By Default your string is mutable like array.

// string name = "Pablo";
// // cout <<name[0]<<endl;
// cout <<"Before Updating/Replacing: "<<name<<endl;

// name[0] = 'T'; //replacement/updation/reassginment

// cout <<"After Updating/Replacing: "<<name<<endl;

//How to make your string as immutable(unchangable)

//const string name = "Pablo";
//name[0] = 'T';// unchangable

//Student Task 1: Create a string and take the input from the user and perform following task.

//Hint: use size() or length() to find out the length of string.

//1. Count and print the number of Capital letter in the string
//2. Count and print the number of Small letter in the string


// string msg;
// cout <<"Enter the Your Msg here: ";
// getline(cin, msg);

// int countCapital = 0, countSmall = 0;

//Without Function Support: 1. Ascii Value, 2. Think Different Solution

//1. Ascii Value

// for(int i=0;i<msg.size();i++){

//         if(msg[i] >=65 && msg[i] <= 90){
//             countCapital++;
//         }else if(msg[i] >=97 && msg[i] <= 122){
//             countSmall++;
//         }else{
//             cout <<"Ignored Character "<<msg[i]<<endl;
//         }
// }

// cout <<"Number of Small Case Letter: "<<countSmall<<endl;
// cout <<"Number of Capital Case Letter: "<<countCapital<<endl;

//2. Think Different Solution

// string smallCase = "abcdefghijklmnopqrstuvwxyz";
// string capitalCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// for(int i=0;i<msg.size();i++){

//     //couting the small case:
//     for(int j=0;j<smallCase.size();j++){
//         if(msg[i]==smallCase[j]){
//             countSmall++;
//             break;
//         }
//     }

//     //couting the small case:
//     for(int k=0;k<capitalCase.size();k++){
//         if(msg[i]==capitalCase[k]){
//             countCapital++;
//         }
//     }
// }

// cout <<"Number of Small Case Letter: "<<countSmall<<endl;
// cout <<"Number of Capital Case Letter: "<<countCapital<<endl;

//Student 2: Given an immutable string, your task is to replace the first character without using name method.

//input: const string name = "Pablo";
//output: Tablo
// const string name = "Pablo";

// string newName = name;
// newName[0] = 'T';

// cout <<newName;


/*
Student Task 3: Given a string as str, your task is to find out the all substring
Example
string str = "chitkara"

*/


}