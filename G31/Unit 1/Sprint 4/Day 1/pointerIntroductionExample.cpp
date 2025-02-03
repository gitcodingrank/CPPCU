#include <iostream>
using namespace std;

// void swap(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main(){

//Pointer: It is a variable which is used to store the address of another variable or it stores the address where the actual data is kept in the memory.

//Syntax:
//data_type* pointerName;
//or
//data_type *pointerName;

//Example:
// int num = 45;
// cout <<num<<endl;
//How to access/know the address of above variable 'num': using &variableName

//Pointer Declaration:
// int* ptr = &num; 

// cout <<"&num: "<<&num<<endl;
// cout <<"ptr: "<<ptr<<endl;

// int a = 45;
// int b = 60;

// swap(a,b);
// cout <<"a: "<<a<<" b: "<<b<<endl;


// int x = 20;
// int* ptr = &x;

// cout <<ptr<<endl;

// //dereference operator(*)
// cout <<*ptr<<endl;

// int nums[] = {23,45,11,67,89,34};


// int *ptr = nums;
//cout <<nums<<endl;
// cout <<ptr<<"-----"<<*ptr<<endl;
// cout <<(ptr+1)<<"-----"<<*(ptr+1)<<endl;
// cout <<(ptr+2)<<"-----"<<*(ptr+2)<<endl;
// cout <<(ptr+3)<<"-----"<<*(ptr+3)<<endl;
// cout <<(ptr+4)<<"-----"<<*(ptr+4)<<endl;
// cout <<(ptr+5)<<"-----"<<*(ptr+5)<<endl;

//Example: Print array element using pointer.
// for(int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
//     // cout <<*(ptr+i)<<" ";
//     cout <<*ptr<<" ";
//     ptr++;
// }

//Student Task 1: Create an array of numbers of user's choice, take input for the same, and perform below operations using pointer.
//1. Print all the elements in reverse manner
//2. Print the maximum element
//3. Print the minimum element

//Input Taking
int size;
cout <<"Enter the size for the array: ";
cin >>size;

int nums[size];

int* ptr = nums;

//for taking the value at index
for(int i=0;i<size;i++){
    cout <<"Enter The Value at index "<<i<<": ";
    cin >>*(ptr + i);
}

for(int ele: nums){
    cout <<ele<<" ";
}

//Maximum Element:
int max = *ptr;

for(int i=1;i<size;i++){
    if(max < *(ptr + i)){
        max = *(ptr + i);
    }
}

cout <<"Maximum Element: "<<max<<endl; 





}