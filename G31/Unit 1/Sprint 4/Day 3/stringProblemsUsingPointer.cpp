#include <iostream>
using namespace std;

int findStringLength(char * str){

    int size = 0;
    while(*str!='\0'){
        size++;
        str++;
    }
    return size;
}

void reverseString(char * str){
    char *end = str;
    while(*end!='\0'){
        end++;
    }
    end--;
    
    while(str < end){
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

bool checkPalindrom(char * str){
    char *end = str;
    while(*end!='\0'){
        end++;
    }
    end--;
    
    while(str < end){
        if(*str != *end){
            return false;
        } 
        end--;
        str++;  
    }
    return true;
}

int main(){

 //write code here
//  string str = "Hello";
 //output: 5
//  findStringLength(&str[0]);

//  cout <<str<<endl; //Hello
//  reverseString(&str[0]);
//  cout <<str<<endl; //olleh


string str = "hello";
cout <<checkPalindrom(&str[0])<<endl;

}