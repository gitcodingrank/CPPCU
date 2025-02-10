#include <iostream>
using namespace std;


/*
Visualization:
  H   E   L   L   O  \0
                     ptr
 1   2   3   4   5   termination from loop
 count - 5
 
 int count = 0;
 while(*ptr!='\0'){
    ptr++;
    count++;
 }

*/

int findStringLength(char *str){

    int count = 0;
    while(*str!='\0'){
        str++;
        count++;
    }
    return count;
}


/*
Visualization:
  H   E   L   L   O  \0
 *str           *end
 O   E   L   L   H  \0
    *str    *end
 O   L   L   E   H  \0
        *str 
        *end
*/

void reverseString(char* str){
    char* end = str;
    while(*end!='\0'){
        end++;
    }
    end--;
    //swap logic:
    while(str <end){

        char temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }

}   

/*
Visualization 
  M  A  D  A  M
*str         *end
 *str == *end -> true
 *str++
 *end--
 M  A  D  A  M
   *str  *end
    *str == *end -> true
    *str++
    *end-- 
*/

bool checkPalindrome(char *str){

    char* end = str;
    while(*end!='\0'){
        end++;
    }
    end--;
    
    while(str <end){

        if(*str != *end){
            return false;
        }
        str++;
        end--;
    }
    return true;
}

void copyStringSourceToDestination(char* source, char *destination){

}
    

int main(){

 //Example: Find out the length of string using pointer:
 string name = "racecar";
//  int size = findStringLength(&name[0]);
//  cout <<size<<endl; //5;

 //Example: Given a string, your task is to reverse the string character in place.
//  cout <<name<<endl; //hello
//  reverseString(&name[0]);
//  cout <<name<<endl; //olleh

 //Exampe: Given a string, Your task is to check it is palindrom or not.
//  cout <<checkPalindrome(&name[0])<<endl;


//Exampe: Given two strings as source and destination, Your task is to copy source strint to destination using pointer.

/*
void copyStringSourceToDestination(char* source, char *destination){

}

*/
char str1[] = "Chaman";
char str2[20];

cout <<str2<<endl;
copyStringSourceToDestination(str1, str2);
cout <<str2<<endl; //Chaman



}