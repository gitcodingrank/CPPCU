#include <iostream>

using namespace std;

int main(){

    /*
    1D Array: it is a data structure which is used to store collection/set of element of same type in continous memory location where first element starts with 0 index and second with 1 and so on.

    Note: in c++ array, size is being defined for the array at compile time.
    */

   //Declaration of 1D array:
   //Syntax: data_type arrayName[size];

//    int nums[5];

   //Initialization of 1D Array: using index
//    nums[0] = 10;
//    nums[1] = 11;
//    nums[2] = 12;   

   //Accessing the element: using index
//    cout <<nums[0]<<endl;
//    cout <<nums[2]<<endl;
//    cout <<nums[3]<<endl; //garbage value.


//Initialization at the time Declaration:
// int numbers[] = {1,2,3,4,5,6,7,8,9,10};
// int numbers[5] = {1,2};

//int numbers[] = {1,2,3,4,5,6,7,8,9,10};

//accessing the element from above array: using index.
// cout <<numbers[0]<<endl;
// cout <<numbers[1]<<endl;
// cout <<numbers[2]<<endl;
// cout <<numbers[3]<<endl;
// cout <<numbers[4]<<endl;

//For printing/visiting each and every element for the array: loop is the best choice.
//loop: 3 points - startingPoint[Known], endPoint[Unknown - using sizeof()], step[Known]

//How can we know the size of array(number of element in the arra)?
//sizeof(arrayName) -> Size in bytes.

// int size = sizeof(numbers)/sizeof(numbers[0]);
// // cout <<sizeof(numbers)/sizeof(numbers[0]);

// for(int i=0;i<size;i++){
//     cout <<numbers[i]<<" ";
// }

//Input taking in the array.
//Step 1: Decide the size of array.
//Step 2: Take input for each element according to give size.

//Example:

//Step 1:
// int size;
// cout <<"Enter the Size for the array: ";
// cin>>size;

// int nums[size];

// //Step 2:
// for(int i=0;i<size;i++){
//     cout <<"Enter the Element for index "<<i<<"- ";
//     cin>>nums[i];
// }

// cout <<"Elements inside the array: "<<endl;
// //Access the element:
// int sum =0;
// int evenSum = 0;
// int oddSum = 0;
// for(int i=0;i<size;i++){
//     //cout <<nums[i]<<" ";
//     sum+=nums[i];
//     if(nums[i]%2==0){
//         evenSum+=nums[i];
//     }else{
//         oddSum+=nums[i];
//     }
// }

// cout <<"Sum Of All Elements: "<<sum<<endl;
// cout <<"Even Sum: "<<evenSum<<endl;
// cout <<"Even Sum: "<<oddSum<<endl;
// cout <<"Avg is: "<<sum/size<<endl;

/*
Student Task 1: Create an array of numbers according to user size requirement, and take the input for same, and perform following operations:
1. Find out the sum of all the element
2. Find out sum of all even numbers
3. Find out sum of all odd numbers
4. Find out avg of all numbers


Student Task 2: Given an array of numbers below, your task is to find out the even numbers and put those numbers in seperate array.

input: int numbers = {45,23,12,8,33,22,90,10}
output: {12,8,22,90,10}
*/

// int numbers[] = {45,23,12,8,33,22,90,10};

// int size = sizeof(numbers)/sizeof(numbers[0]);

// int evenCount = 0;
// for(int i=0;i<size;i++){
//     if(numbers[i]%2==0){
//         evenCount++;
//     }
// }

// int evenNums[evenCount];
// int index =0;

// for(int i=0;i<size;i++){
//     if(numbers[i]%2==0){
//        evenNums[index++] = numbers[i];
//     }
// }

// for(int i=0;i<evenCount;i++){
//     cout <<evenNums[i]<<" ";
// }









}