#include <iostream>
#include <vector>
using namespace std;

//normal array with Pointer
// int* createArray(int size){
//     int nums[size];
//     int* arr = nums;
//     for(int i=0;i<size;i++){
//         arr[i] = i+1;
//     } 
//     return arr;
// }

// vector<int> createArray(int size){
//     vector<int> arr;

//     for(int i=0;i<size;i++){
//         arr.push_back(i+1);
//     } 
//     return arr;
// }

// vector<int> filterEvenNumbers(int* arr, int size){
//         vector<int> evenNums;
//         for(int i=0;i<size;i++){
//             if(*(arr+i)%2==0){
//                 evenNums.push_back(*(arr+i));
//             }
//         }
//         return evenNums;
// }

void printElementOfAnyTypeArray(void* arr, int size, char type){
    if(type=='i'){
        //integer array
        int* intArr = (int* )arr;
    }else if(type=='f'){
        float* intArr = (float* )arr;
    }else{
        char* intArr = (char* )arr;
    }
}


int main(){

    //Pointer: Its a variable which store address of other variable.

    // int x = 56;
    // int *x_ptr = &x;

    // cout <<x_ptr<<endl;

    // //dereference operator: * - gives value at particular address.
    // cout <<*x_ptr<<endl;

    //Student Task: Create an array of numbers of user's choice, take input for the array, and perform following operation using pointer.
    //1. Find out the total sum of all the elements
    //2. Print all Element in reverse manner
    //3. Find out the prime number in the array as well.

    // int size;
    // cout <<"Enter the size for the array: ";
    // cin >>size;

    // int nums[size];
    // int * ptr = nums;

    // //to add numbers to above array using pointer
    // for(int i=0;i<size;i++){
    //     cout <<"Enter the number for index "<<i<<": ";
    //     cin >>*(ptr + i);
    // }

    // //To print the number inside array using pointer
    // for(int i=0;i<size;i++){
    //     // cout <<*(ptr+i)<<" ";
    //     cout <<*(ptr + i)<<" ";
    // }
    // // cout <<*ptr<<endl;
    // // cout <<*(ptr+1)<<endl;
    // // cout <<*(ptr+2)<<endl;

    // int sum = 0;
    // //Finding the sum using pointer
    // for(int i=0;i<size;i++){
    //     // cout <<*(ptr + i)<<endl;
    //     sum+= *(ptr + i);
    // }

    // cout <<"Sum is: "<<sum<<endl;

    //Printing the element of the array in reverse using pointer:
    // ptr = nums + size - 1;
    // for(int i=0;i<size;i++){
    //      cout <<*(ptr--)<<" ";
    // }

    // int size = 10;
    // vector<int> nums = createArray(size);
    // int* ptr = &nums[0];

    // cout <<*ptr<<endl;


    /*
    Student Task: Create a function which accept two parameters first int type reference/address of a number array and second its size, and your task is to return vector of even numbers only.
    
    */


   /*
   
   vector<int> filterEvenNumbers(int* arr, int size){
        vector<int> evenNums;
        for(int i=0;i<size;i++){
            if(*(arr+i)%2==0){
                evenNums.push_back(*(arr+i));
            }
        }
        return evenNums;
    }
   
   */

    // int nums[] = {34,1,2,67,45,34};

    // vector<int> eNums = filterEvenNumbers(nums, sizeof(nums)/sizeof(nums[0]));

    // for(int ele: eNums){
    //     cout <<ele<<" ";
    // }

    //Pointers with string:

    // string name = "Chintu";

    // char* ptr = &name[0];

    // cout <<ptr<<endl;
    // cout <<*ptr<<endl;
    // cout <<*(ptr+1)<<endl;
    // // cout <<*(ptr+2)<<endl;

    // char names[] = "Chintu";
    // //char* ptr = names;
    // char* ptr = &names[0];

    // cout <<ptr<<endl;
    // cout <<*ptr<<endl;
    // cout <<*(ptr+1)<<endl;
    // cout <<*(ptr+2)<<endl;

    //Type of Pointers:
    //1. null  Pointer:

    // int *ptr = nullptr;
    // cout <<ptr<<endl;

    //2. void Pointer: it is used when you don't have information about variable type.

    // int num = 10;

    // void* ptr = &num;
    // //to get the value, you need to typecast
    // cout <<ptr<<endl;
    // cout <<*(int*)ptr<<endl;

    //Good Example:
    // int arr1 [] = {1,2,3,4,5,6,7,8,9};
    // float arr2 [] = {1.2,2.56,3.67,4.6,5.5,6.45,7.9,8.0,9.78};
    // char arr3 [] = {'a','p','p','l','e','\0'};

    // printElementOfAnyTypeArray(arr1, sizeof(arr1)/sizeof(arr1[0]), 'i');
    // printElementOfAnyTypeArray(arr2, sizeof(arr2)/sizeof(arr2[0]), 'f');
    // printElementOfAnyTypeArray(arr3, sizeof(arr3)/sizeof(arr3[0]), 'c');

    //3. Dangling Pointer: 
    // int num = 10;
    // int * ptr = &num;

    // delete ptr; //removed from the memory
    // ptr = nullptr; //removed from the memory
    // cout <<ptr<<endl;


}