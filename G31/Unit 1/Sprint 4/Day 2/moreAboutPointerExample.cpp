#include <iostream>
#include <vector>
using namespace std;

// int* createArray(int size){
//     int* arr = new int[size];
//     for(int i=0;i<size;i++){
//         arr[i] = i+1;
//     }

//     return arr; 
// }

// vector<int> createArray(int size){
//     vector<int> arr;
//     for(int i=1;i<=size;i++){
//         arr.push_back(i);
//     }
//     return arr;
// }


// vector<int> filterEvenNumbers(int* arr, int size){

//     vector<int> evenNums;
//     for(int i=0;i<size;i++){
//         if(*(arr+i)%2==0){
//             evenNums.push_back(*(arr+i));
//         }
//     }
//     return evenNums;
// }

int main(){

 //Pointer: Its a varibale which stores anothe variable's memory address.

 //Example: Create a function which will accept the size of the number and return array with elements from 1 to that size
 //size = 5;
 //nums = {1,2,3,4,5};

//  vector<int> newArr = createArray(5);
//  cout <<&newArr.at(0)<<endl;
//  cout <<&newArr.at(1)<<endl;
//  cout <<&newArr.at(2)<<endl;

//Student Task: Create a function which accept array's reference/address and its size and return only vector of even number.

// int arr[] = {2,3,1,13,2,6,4,9,87,56};
// int size = sizeof(arr)/sizeof(arr[0]);

// vector<int> evenNums = filterEvenNumbers(arr, size);

// for(int ele: evenNums){
//     cout <<ele<<" ";
// }

//Pointer with string.
// string name = "Pawan";
// char* ptr = &name[0];

// // cout <<&name<<endl;
// cout<<*ptr<<endl;
// cout<<*(ptr+1)<<endl;

// char names[] = "Pawan";
// char* ptr = names;
// cout <<ptr<<endl;
// cout <<*ptr<<endl;
// cout <<*(ptr+1)<<endl;

//Student Task: Given a string below, and your task is to coun the vowel inside it using pointer.
//string str = "hello";


//Type of Pointer:
//1. void pointer: when you don't know about type of variable'data.

int num = 10;
void *ptr = &num;

cout<<*(int*)ptr<<endl;

}