#include <iostream>

using namespace std;


int main(){

    //1D Array: It is a data structure which is used to store homogenous type of data in continous memory location where first element of array starts at index 0 and so on.

    //Declaration of array:
    //Syntax: data_type arrayName[size];

    // int nums[5];  //once you've not initialized this array with no values, then by default for integer it would be 0
    // cout <<nums; 

    //accessing the element: indexing.
    // cout <<nums[0]<<endl;
    // cout <<nums[1];

    //Initialization:
    // nums[0] = 45;
    // nums[1] = 50;
    // nums[2] = 70;

    // cout <<nums[0]<<endl;
    // cout <<nums[1]<<endl;
    // cout <<nums[2]<<endl;
    // cout <<nums[3]<<endl;


    //Initialization at the time of declaration.

    // int numbers[] = {1,2,3,4,5,6,7,8,9};
    // cout<<numbers[0]<<endl;
    // cout<<numbers[5]<<endl;
    // cout<<numbers[8]<<endl;

    //element printing using loop:
    //to find out the number of element in the array: sizeof(arrayName): size in bytes.

    //int size = sizeof(numbers)/sizeof(numbers[0])
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    // // cout<<size;

    // for(int i=0;i<size;i++){
    //     cout <<numbers[i]<<" ";
    // }

    //Student Task:

    // int numbers[5] = {1,2};
    //numbers: 1, 2, garbage value,garbage value,garbage value

    //input taking in array: 
    //Step 1: Ask about size to your user.
    //Step 2: According to size, create the array and ask for input.

    // int size;
    // cout <<"What is the size for the array: ";
    // cin>>size;

    // //Array creation of above size.
    // int nums[size];

    // for(int i=0;i<size;i++){
    //     cout <<"Enter the Number for index "<<i<<"- ";
    //     cin>>nums[i];
    // }

    // for(int i=0;i<size;i++){
    //     cout <<nums[i]<<endl;
    // }

    //Student Task 1: Create an array of numbers of user choice and also take the input from user, then find out the sum of all elements, sum of even elements, sum of odd elements, sum of divisible by 5, avg of all elements.
    

    //Student Task 2: Given an array of numbers, your task is to find out the even numbers and put it inside seperate array.
    //int nums[] = {2,3,1,3,4,5,6,78,19,20};
    
    // int nums[] = {2,3,1,3,4,5,6,78,19,20};
    // int size = sizeof(nums)/sizeof(nums[0]);
    // int countEven = 0;

    // for(int i=0;i<size;i++){
    //     if(nums[i]%2==0)
    //         countEven++;
    // }

    // int evenNums[countEven];
    // int index =0;

    
    // for(int i=0;i<size;i++){
    //     if(nums[i]%2==0)
    //         evenNums[index++] = nums[i];
    // }

    // for(int j=0;j<sizeof(evenNums)/sizeof(evenNums[0]);j++){
    //     cout <<evenNums[j]<<" ";
    // }


    //2D Array: It is also data structure which is used to store collections of element of same type in tabular format.
    //Syntax: data_type arrayName[row][column];

    //Declaration of 2d array as nums
    int nums [3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int rows;



}