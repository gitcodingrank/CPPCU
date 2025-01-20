#include <iostream>
#include <typeinfo>

using namespace std;


int main(){

    //Implicit Type Casting: conversion from small to big data type

    //Example 1:
    // short num = 45;
    // int num1 = num;
    // cout <<typeid(num).name()<<endl;
    // cout <<typeid(num1).name();


    
    //Example 2:
    
    // int personCount = 45323;

    // long personCountIncreased = personCount;

    // cout << typeid(personCount).name()<<endl;
    // cout <<typeid(personCountIncreased).name();


    //Explicit Type Casting: forcefully converting big to small.

//Example 1:
    // int num = 45232;

    // short num1 = (short)num;

    // cout <<num <<endl;
    // cout <<num1;

    //Example 2:

    // char c = 'a';
    // int charValue = (char)c;

    // cout<<charValue;

    //function-style type casting:
    //syntax: type (value)

    // int num = int (10.45);
    // cout <<num;

    int age1 = 45;
    int age2 = 56;

    cout << (age1 > age2);
    cout << (age1 == age2);











}