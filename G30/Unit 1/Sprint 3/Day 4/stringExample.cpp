#include <iostream>
#include <cstring>
// #include <string>

using namespace std;

int main(){

   //Strings: It is collection/set of characters(numbers + letters + special Characters + whitespace) enclosed with double quotation marks(" ").

   //Example:
//    string name = "Pablo";
//    string address = "Noida Sector 73, Uttar Pradesh";
//    string adhaarCardNumber = "88379773232232";
//    string pancardNumber = "ATFPY3421H";
//    string password = "pablo@123";
//    string email = "pable@gmail.com";
//    string bankAccountNumber = "23294929349234";
//    string ifscCode = "SB1N434231";
//    string pincode = "201301";

   //In C++, we can use string in two ways:
   //1. c-style string.
   //2. c++-style string.


   //1. c-style string.

   //Declaration:
//    char name[] = "Pablo";
//    cout <<name<<endl;


    // char name[6] = {'P', 'a', 'b', 'l', 'o', '\0'};
    // cout <<name<<endl;
    // cout <<name[0]<<endl;

    //Some Pointer About C-Style String:
    //1. it is mutable in nature
    //2. it follows 0 based indexing meaning that first character will start with index 0 and so on.

    // cout <<strlen(name)<<endl;

    // for(int i=0;i<strlen(name);i++){
    //     cout <<name[i]<<" ";
    // }

    // for(char ele: name){
    //         cout <<ele<<" ";
    // }


    //c++-style string: to use this string, need to add string library in your program by #include <string>

    //Example:
    // string name = "Pablo";
    // cout <<name<<endl;
    // cout <<name[0]<<endl;
    // cout <<name.length()<<endl;
    // cout <<name.size()<<endl;

    //Note: In C++, Strings are mutable(changable)

    // string str = "Cintu";
    // //Output Mintu
    // cout <<str<<endl;
    // str[0] = 'M'; // replacement/updation/reassignment
    // cout <<str<<endl;

    //Note: Strings keep very important data of your application therefore as a developer its our task to make the string as immutable(unchangable).

    //How to make a string as immutable in c++: - by using const keyword.

    // const string str = "Cintu";
    // str[0] = 'M'; //can't reassign/change/update the value

    //Take user input in the string.

    // string msg;
    // cout <<"Enter Your Msg here: ";
    // getline(cin, msg);

    // cout<<"Your msg is: "<<msg<<endl;

    //Student Task 1: Create a string as sentence, where you can take the input for sentence from the user and perform following task.

    //1. find out the count of lowerCaseLetter without using any inbuilt function.
    //2. find out the count of upperCaseLetter without using any inbuilt function.

    //Student Task 2: given a string in smallCase, your task is to convert all the characters inside the string into upperCase.
    //input - string str = "hello";
    //output - "HELLO"

    //Student Task 3: Given a string, your task is to find out the all substring without using any inbuilt method support.

    /*
    Substrings: small small portion of your original string in the continous manner.
    string name = "chitkara"
    Output, c, ch, chi, chit, chitk, chitka, chitkar, chitkara, h, hi, hit, hitk, hitka, hitkar, hitkara, i, it, itk, itka, itkar, itkara, t, tk, tka, tkar, tkara, k, ka, kar, kara, a, ar, ara, r, ra, a
    
    */

//    string str = "hello";
//    str.append(" World!");
//    cout <<str<<endl;

//    string str1 = "hello";
//    string str2 = "hello";
//    cout <<str1.compare(str2)<<endl;

// string str = "hello";
// str.insert(str.begin()+2, 'H');
// cout <<str<<endl;

// cout <<str.find("sdfas");





}