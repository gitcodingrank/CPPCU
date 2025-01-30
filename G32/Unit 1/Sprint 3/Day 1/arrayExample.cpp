#include <iostream>

using namespace std;

int main(){

    //1D Array: it is a data structure which is used to store collection/set of elements in continous memory location, shared as a single variable, and where first element start with index 0 and second with 1 and so on.

    //Declartion of 1D Array:
    //Synta: data_type arrayname[size];

    //int nums[5]; // here, you've declared/created a array as nums of size 5


    //how to access the element of array: using index.
    // cout <<nums[0]<<endl;
    // cout <<nums[1]<<endl;


    //Initilization of 1D Array:
    // nums[0] = 10;
    // nums[1] = 11;
    // nums[2] = 12;
    // nums[3] = 13;
    // nums[4] = 14;

    // //Accessing the element: using indexing.
    // cout <<nums[0]<<endl;
    // cout <<nums[1]<<endl;
    // cout <<nums[2]<<endl;
    // cout <<nums[6]<<endl;


    //Initialization at the time Declaration:
    // int nums[5] = {1,2,3,4,5};
    // int nums[] = {1,2,3,4,5,6,7,8};
    // int nums[5] = {1,2};

    //int numbers[] = {1,2,3,4,5,6,7,8,9,10};

    // cout <<numbers[0]<<" ";
    // cout <<numbers[1]<<" ";
    // cout <<numbers[2]<<" ";
    // cout <<numbers[4]<<" ";

    //array element accessing using loop:


    //How to find  number of element in the array? - using sizeof(arrayName) - size in bytes
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    // // cout <<size;

    // for(int i=0;i<size;i++){
    //     cout <<numbers[i]<<" ";
    // }


    //Input taking for array:
    //Step 1: Take the input for array size.
    //Step 2: for that array size, ask for values.

    //Example:

    //Step 1:
   // int size;
    // cout <<"Enter the size for the array: ";
    // cin>>size;

    // //Step 2:
    // int nums[size];

    // for(int i=0;i<size;i++){
    //     cout <<"Enter Number for index "<<i<<"- ";
    //     cin >>nums[i];
    // }

    // cout <<"Entered Numbers by User: "<<endl;

    // //Printing the data:
    // for(int i=0;i<size;i++){
    //     cout <<nums[i]<<" ";
    // }

    //Student Task 1: Create an array of numbers according to user requirement and take input also from user, and perform following operations:
    //1. Find out the sum of all elements.
    //2. Find out the sum of even and odd numbers.
    //3. Find out the sum of numbers which are divisible by 5.
    //4. Find out the avg of even numbers.

    //Student Task 2: Given an array of numbers, your task is to find out the even numbers and put it inside seperate array.

    int numbers[] = {34,23,12,56,34,23,11,23,78};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int evenCount = 0;
    for(int i=0;i<size;i++){
        if(numbers[i]%2==0)
            evenCount++;
    }

    int evenNums[evenCount];
    int index = 0;
    
    for(int i=0;i<size;i++){
         if(numbers[i]%2==0)
            evenNums[index++] = numbers[i];
    }

    for(int i=0;i<evenCount;i++){
            cout <<evenNums[i]<<" ";
         
    }

}