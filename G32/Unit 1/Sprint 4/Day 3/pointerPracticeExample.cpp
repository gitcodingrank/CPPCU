#include <iostream>
using namespace std;

int findStringLength(char *ptr){

    int size = 0;
    while(*ptr!='\0'){
        size++;
        ptr++;
    }
    return size;
}


/*
H E L L O \0
|
STR
        END
*/
void reverseString(char *str){

    char *end = str;

    while(*end!='\0'){
        end++;
    }
    end--;
    
    //logic for swaping the character
    while(str<end){

        char temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }


}

bool isPalindrome(char *str){

    char *end = str;
    while(*end!='\0'){
        end++;
    }
    end--;
    
    //logic for swaping the character
    while(str<end){

        if(*str!=*end){
            return false;
        }

        str++;
        end--;
    }
    return true;
}

void copyString(char* source, char* destination){
    while(*source!='\0'){
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

void makeSmallToCapitalAndCapitalToSmall(char *str){
    
}

int main(){

    //1. Given a string below, your task is to create a function which can return a string length using pointer.

    // string name = "hello";
    // findStringLength(&name[0]);

    // cout <<name<<endl; //hello
    // reverseString(&name[0]);
    // cout <<name<<endl; //olleh

    // string name = "madam";
    // cout<<isPalindrome(&name[0])<<endl;

    char str1[] = "Chinki";
    char str2[20];

    copyString(str1, str2);

    cout <<str2<<endl; //Chinki
}