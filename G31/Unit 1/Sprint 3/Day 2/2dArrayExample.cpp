#include <iostream>

using namespace std;


int main(){


    //2D Array: Array inside Array - It is a data structure which is used to store set of element of same type in tabular format(rows and column).

    //Delcaration of 2D Array:
    //Syntax: data_type arrayName[row][column];

    // int nums[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // cout <<nums[0][0]<<endl;
    // cout <<nums[2][1]<<endl;

    //visiting the each and ever elements of 2d array - using loop: 

    // int rows = sizeof(nums)/sizeof(nums[0]);
    // int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    // //outer loop: rows
    // for(int row=0;row<rows;row++){

    //     //inner loop: columns
    //     for(int column=0;column<columns;column++){
    //         cout <<nums[row][column]<<" ";
    //     }
    //     cout <<endl;
    // }

    //Student Task 1:
    /*
    Problem Statement: Given a 2d array of numbers below:
    int nums[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    Your task is to perform following operations:
    1. Find out the sum of all elements.
    2. Find out the sum row wise.
    3. Find out the even sum row wise.
    4. Print "Aviable" if any number in any row is divible by 4 else print "Not Available"
    
    
    */ 

   //Solution:
   int nums[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    // int sum = 0;
    
    // for(int i=0;i<rows;i++){
    //     int rowSum =0;
    //     for(int j=0;j<columns;j++){
    //         sum+=nums[i][j];
    //         rowSum+=nums[i][j];
    //     }
    //     cout <<"Row: "<<i<<" sum is: "<<rowSum<<endl;

    // }
    // cout <<"Total Sum of All the Elements: "<<sum<<endl;

    //Print "Aviable" if any number in any row is divible by 4 else print "Not Available"

    // for(int i=0;i<rows;i++){

    //     bool flag = false;
    //     for(int j=0;j<columns;j++){
    //         if(nums[i][j]%4==0){
    //             flag = true;
    //         }
    //     }
    //     if(flag){
    //         cout <<"Available"<<endl;
    //     }else{
    //         cout <<"Not Avaialble"<<endl;
    //     }
        

    // }



}