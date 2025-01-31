#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){

    //Strings: It is set of characters(numbers + letters + special symbols + white space) enclosed with double quotation marks(" ").

    //Note: String keeps most important data.

    //Examples:
    // string name = "Champak";
    // string fatherName = "Chaman Lal";
    // string adhaarNumber = "32324331212332";
    // string pancardNumber = "ERWE3423H";
    // string accountNumber = "34234234245123";
    // string password = "Champak@champak123";
    // string email = "champak@gmail.com";
    // string pincode = "201301";
    // string address = "Noida Sector 73, Uttar Pradesh";
    // string msg = "I'm learning about C++ at Chitkara University";
    // string favoriteCharacter = "C";

    //Note: In C++, we can use string using two ways:
    //1. c-style string
    //2. c++-style string

    //There are following common things in the both type of strings:
    //1. They follow 0 based indexing like array, meaning that first haracter inside the string will start with 0 and second with 1 and so on.
    //2. String is by defualt mutable(changable).


    //1. c-style string: null character(\0) terminated string

    //Declaration:
    /*
    Syntax 1:
    char stringName[] = "value";

    Syntax 2:
    char stringName[size] = "value";
    char stringName[size] = {'P','a'}; 
    
    */

   //Examples:
//    char name[] = "Pablo";
//    cout <<name<<endl;

    // char name[6] = {'P', 'a', 'b', 'l', 'o', '\0'};
    // cout <<name<<endl;

    //Accessing element through indexing:
    // cout <<name[0]<<endl;
    // cout <<name[4]<<endl;

    //Mutability: You can also update the characters inside the strings.

    // cout <<name[0]<<endl; //P
    // name[0] = 'T';
    // cout <<name[0]<<endl; //T
    // cout <<name<<endl;

    //Note: As String carries very important data therefore as a developer its our task to make it immutable(unchangable).
    //Solution: using const keyword

    // const char name[6] = {'P', 'a', 'b', 'l', 'o', '\0'};
    // name[0] = 'T'; //replacement/reassignment/modification/updation

    //How to use loop for above kind of string:
    //We've lots of method support in c-style string but for this we need to #include <cstring>

    // cout <<strlen(name)<<endl;
    
    // // for(int i=0;i<strlen(name);i++){
    // //     cout <<name[i]<<" ";
    // // }

    // for(char ele: name){
    //     cout <<ele<<" ";
    // }

    //c++-style string:
    /*
    syntax:
    string stringName = "value";
    */

   //Example: 
    // string str = "Hello World";
    // cout <<str<<endl;

    // str[0] = 'B';
    // cout <<str<<endl;

    // const string str = "Hello World";
    // cout <<str<<endl;

    // str[0] = 'B'; // it is immutable string therefor this operation is not allowed.


    // string name = "Mintu";
    // cout <<name<<endl;

    // //How to find out the length/size of given string: size()/length()
    // // cout <<name.length()<<endl;
    // // cout <<name.size()<<endl;

    // for(int i=0;i<name.size();i++){
    //     cout <<name[i]<<" ";
    // }

    //Take input in the form of string:

    // string msg;
    // cout <<"Enter Your Msg: ";
    // getline(cin, msg);

    // cout <<msg<<endl;

    //Student Task: Create a string as 'sentence' and take input from user and perfrom following operations:
    //1. Find out the length of small case letter without using any inbuilt function.
    //2. Find out the even index letter and print those.

    //There are good two ways for first problem:
    //1. using Ascii value.
    //2. using your approach.

    // string sentense;
    // cout <<"Enter Sentence Here: ";
    // getline(cin, sentense);

    //Problem 1: 
    //Way 1: Ascii appraoch:
    // int lowerCaseLetterCount = 0;
    // for(int i=0;i<sentense.size();i++){

    //     // if(sentense[i] >= 97 && sentense[i] <= 122){
    //     //      lowerCaseLetterCount++;
    //     // }
    //     sentense[i] >= 97 && sentense[i] <= 122 ? lowerCaseLetterCount++:lowerCaseLetterCount+=0;

    // }

    // cout <<"Count of LowerCase in the sentense: "<<lowerCaseLetterCount<<endl;

    //Way 2: Different Approach
    // string lowerCaseLetter = "abcdefghijklmnopqrstuvwxyz";
    // int lowerCaseLetterCount = 0;

    // for(int i=0;i<sentense.size();i++){

    //     for(int j=0;j<lowerCaseLetter.size();j++){
    //         //  if(sentense[i]==lowerCaseLetter[j]){
    //         //     lowerCaseLetterCount++;
    //         //  }
    //          sentense[i]==lowerCaseLetter[j]?lowerCaseLetterCount++:lowerCaseLetterCount+=0;
    //     }
    // }
    // cout <<"Count of LowerCase in the sentense: "<<lowerCaseLetterCount<<endl;


    //Student Task: Given a string your task is to do following thing:
    // const string str = "Mintu";
    // //output: Pintu
    // string name = str;
    // name[0] = 'P';
    // cout <<name<<endl;

    //Explore sum inbuilt methods of string class:
    //append()
    string str = "Hello";
    // str.append(" World");
    // cout<<str;

    //

    


}