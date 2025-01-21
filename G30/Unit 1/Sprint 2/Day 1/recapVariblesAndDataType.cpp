#include <iostream>
#include <typeinfo>
// #include <string>

using namespace std;

int main(){


    //variables rules:
    //1. starts with letter, underscore, and doller($)
      //int 1age; //invalid
      //int agel //valid

    //2. after first letter, your varible can contain letter, alphabets, underscore, and doller

    //valid varibales
    // int my1stname;
    // int first_name;
    // int first$name;  
    //invalid variables
    // int my first name; //invalid declaration
    // int my-first-name; //invalid declaration
    // int my-first#name; //invalid declaration
    //3. avoiding the c++ reserved keywords/pre-defined words
    // int if; //invalid declaration as if is a keyword and has different funcitionality
    // int If;
    //4. case sensitive: variable as age is different from variable as Age;

    //5. Its is good practice to take descritive/meaningful variable name, below naming conventions are only valid with multi-words varibale name.
    //5.1: comelCaseNamingConvention:
    // int firstName;
    // int myClassInstructorName
    // int employeeName
    // int personName
    // //5.2: snake_case_naming_convention:
    // int first_name;
    // int my_class_instructor_name;
    // int employee_name;
    // int person_name;


    //Declaration or initializaiton:

    // int x, y, z;
    // int x=4, y=6, z=8;


    //DataType: type of data a varible can hold.
    //Primitive Data Type: Store the simple value  or one value at a time.
    //Numeric Data Type[Integer Type]: short < int < long < long long

    // short x = 32767; 
    // int y = 453232;
    // long z = 3422121;
    // long long bigNumber = 342323434232; 

    // cout <<typeid(x).name()<<endl;
    // cout <<typeid(y).name()<<endl;
    // cout <<typeid(z).name()<<endl;
    // cout <<typeid(bigNumber).name()<<endl;


    //Numeric Data Type[Decimal Numbers]: float < <double<long double

    // float percentage = 45.23;
    // double someLongValue = 342323.45;
    // double bigDecimalValue = 434232342323.453232;

    //boolean: bool - true(1) or false(0)

    // bool isMarried = true;
    // bool isFriday = false;

    //To Store String type Value: char, string, byte

    // char c = 'a';
    // string name = "Pablo";


}