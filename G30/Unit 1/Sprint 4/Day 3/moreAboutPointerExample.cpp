#include <iostream>
#include <vector>
using namespace std;

// bool isVowel(char c){
//     c = tolower(c);
//     return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
// }

// int* createArray(int size){
//     // int nums[size];
//     int* arr = new int[size];
//     for(int i=0;i<size;i++){
//         arr[i] = i+1;
//     }

//     return arr;
// }


// vector<int> createArray(int size){
//     // int nums[size];
//     vector<int> arr;
//     for(int i=0;i<size;i++){
//         arr.push_back(i+1);
//     }

//     return arr;
// }


vector<int> filterEven(int* arr, int size){
    vector<int> evenNums;

    for(int i=0;i<size;i++){
        if(*(arr + i)%2==0){
            evenNums.push_back(*(arr + i));
        }
    }
    return evenNums;
}



int main(){

    //Pointer: Its a variable which stores address of another variable.

    //Example:
    // int num  = 45;

    // int *ptr = &num;

    // cout <<ptr<<endl; //address
    // cout <<*ptr<<endl; //value at address


    // float nums[] = {34.56 , 23.67, 13.78, 56.23};

    // float* nums_ptr = nums;

    // cout <<*nums_ptr<<endl; 
//    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
//         cout <<*(nums_ptr + i)<<" ";
//    }
//    //34.56 23.67 13.78 56.23 

//    cout <<endl;

//     for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
//         cout <<*(nums_ptr + i)<<" ";
//    }
   //Output?

   /*
   Given Array below, your task is to add 50 value to each index and update the at index as well using pointer
   input: float nums[] = {34.56 , 23.67, 13.78, 56.23};
   output: float nums[] = {84,56 , 73.67, 63.78, 106.23};
   */

//   string name = "Raman";

// //   cout <<name<<endl;

// //   string *ptr = &name;
  
// //   cout <<ptr<<endl;
// //   cout <<*ptr<<endl;


// //  char *ptr = &name[0];
// // //  char chars[] = {'a','p','p','\0'};
// //   cout <<ptr<<endl; 
// //   cout <<*ptr<<endl;
// //   cout <<*(ptr + 1)<<endl;
// //   cout <<*(ptr + 2)<<endl;


// // char names[]  = {'C', 'h', 'a', 'm', 'a', 'n', '\0'};

// // char *ptr = names;

// // cout <<ptr<<"---"<<*ptr<<endl;
// // cout <<(ptr+1)<<"---"<<*(ptr+1)<<endl;
// // cout <<(ptr+2)<<"---"<<*(ptr+2)<<endl;


// //Student Task: Given a string below, your task is to print all the vowels inside the string using pointer:

// // string str = "HEllo";

// // char* ptr = &str[0];

// // for(int i=0;i<str.size();i++){
// //     if(isVowel(*(ptr + i))){
// //         cout <<*(ptr + i)<<" ";
// //     }
// // }

// /*
// Student Task: Create a function which accepts size as integer and return the array having elements 1 to that size.

// */

// /*
// int* createArray(int size){

//     int* arr = new int[size];
//     for(int i=0;i<size;i++){
//         arr[i] = i+1;
//     }

//     return arr;
// }
// */
// // int size = 20;
// // int* ptr = createArray(size);
// // // cout <<ptr<<endl;
// // cout <<*ptr<<endl;
// // cout <<*(ptr + 1)<<endl;

// // for(int i=0;i<size;i++){
// //    cout <<*(ptr + i)<<" "; 
// // }


// // int size = 20;
// // vector<int> arr = createArray(size);
// // int * ptr = &arr[0];

// // for(int i=0;i<size;i++){
// //    cout <<*(ptr + i)<<" "; 
// // }

// /*
// Student: Create a function 'filterEven' which accepts two parameters one is array reference of integer type, and second array size.

// vector<int> filterEven(int* arr, int size){

// }

// */
// int nums[] = {45,23,12,67,45,23,11,22};
// vector<int> evnNums = filterEven(nums, sizeof(nums)/sizeof(nums[0]));

// for(int ele: evnNums){
//     cout <<ele<<" ";
// }


/*
Student Task: Given below string, your task is to perform following task using pointer:
string str = "madam";
1. Reverse the String
2. Check above string is palindrome or not.

*/


}