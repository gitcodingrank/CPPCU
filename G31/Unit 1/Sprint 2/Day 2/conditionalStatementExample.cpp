#include <iostream>

using namespace std;

int main(){

    // cout <<"Welcome to Conditional Statements";
    //if statement:

    //Example:
    int num = 11;

    // if(num%2==0){
    //     cout <<"Even";
    // }

    // if(num%2!=0){
    //     cout <<"Odd";
    // }


    //Nested if-else: if inside another if
    //When one condition is connected to another condition.

    //Example: 

    //user input:
    string username= "admin";
    string password= "12345";

    //without logical - nested if else
    if(username == "admin"){
        if(password=="12345"){
            cout <<"Logged in successfully.";
        }else{
            cout<<"Invalid password";
        }
    }else{
        cout<<"Invalid Username";
    }

    //solution to avoid nesting: logical operator:
    cout <<endl;
    cout <<"----------------------"<<endl;

    if(username=="admin" && password =="12345"){
        cout<<"Logged in successfully";
    }else{
        cout <<"Invalid Credentials";
    }

}