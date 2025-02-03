#include <iostream>
using namespace std;

//function by value
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

//function by reference/address
// void swap(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main(){

   //Pointer: It is a variable which is used to store the address of another variable, or it stores the address where the actual the data is kept inside the memory.

   //Declaration of Pointer:
   //Syntax: 
   //1. data_type* pointerName;
   //2. data_type *pointerName;

    //Example:
    //int num = 45;

    //cout <<num<<endl;
    //How to print the address of above vairbale 'num': &variableName;
    //cout <<&num<<endl;

    //Declaring a pointer:
    // int* ptr = &num;
    // cout <<&num<<endl;
    // cout <<ptr<<endl;

    // //To print the value at certain address using pointer: *dereference operator
    // //Syntax: *pointerName
    // cout <<*ptr<<endl;

    // int a = 45;
    // int b = 50;

    // swap(&a, &b);
    // cout <<"A: "<<a<<" B:"<<b<<endl;


    // int nums[] = {23,56,12,89,44,13,90};
    // // cout <<nums<<endl;

    // int *ptr = nums;
    // cout <<*ptr<<"-----"<<ptr<<endl;
    // cout <<*(ptr+1)<<"-----"<<(ptr+1)<<endl;
    // cout <<*(ptr+2)<<"-----"<<(ptr+2)<<endl;
    // cout <<*(ptr+3)<<"-----"<<(ptr+3)<<endl;
    // cout <<*(ptr+4)<<"-----"<<(ptr+4)<<endl;


    //Example: Print array element using pointer
    int nums[] = {23,56,12,89,44,13,90};

    int* ptr = nums;

    for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
        // cout <<*(ptr+i)<<" ";
        cout <<*ptr++<<" ";
    }

    //Student Task: Create an array of numbers of user's choice, take input for the same, and perform following operation using pointer and also take input using pointer.

    //1. Print the array elements in reverse manner
    //2. Print the miximum element

}