#include <iostream>

using namespace std;

int main(){

    //2D Array: It is a data structure which is used to store collection/set of elements of same type in the tabular format(rows, and columns).

    //Declaration of 2D Array:
    //Syntax: data_type arrayName[row][column];

    //Example:
    // int nums[3][3] = {
    //                     {1,2,3},
    //                     {4,5,6},
    //                     {7,8,9}
    //                 };
    
    //accessing the elemen from 2d array: using index:
    // cout <<nums[1][1]<<endl;//5
    // cout <<nums[2][2]<<endl;//9

    //Loop: Nested Loop:
    //Outer Loop: rows
    //Inner Loop: columns

    //rows? - 
    // int rows = sizeof(nums)/sizeof(nums[0]);
    // int columns = sizeof(nums[0])/sizeof(nums[0][0]);
    // // cout <<rows<<endl;
    // // cout <<columns<<endl;

    // //outer loop: rows
    // for(int i=0;i<rows;i++){

    //     //inner loop: columns
    //     for(int j=0;j<columns;j++){
    //         cout <<nums[i][j]<<" ";
    //     }
    //     cout <<endl;
    // }

    /*
    Student Task 1: Given a 2d array of numbers, your task is to perform following operations
     int nums[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                    };
    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);
    1. find out the sum of all elements.
    2. find out the sum row wise and print it also.
    3. find out the sum of even numbers row wise if there is no even numbers in the particular row then print as No Even if yes then print their sum. 

    */

   //Solution:

    // int nums[3][3] = {
    //                     {1,1,3},
    //                     {4,5,6},
    //                     {7,8,9}
    //                 };
    // int rows = sizeof(nums)/sizeof(nums[0]);
    // int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    // int sum = 0;

    // for(int i=0;i<rows;i++){

    //     int evenSumRowWise = 0;

    //     for(int j=0;j<columns;j++){
    //         sum+=nums[i][j];
            
    //         // if(nums[i][j]%2==0){
    //         //     evenSumRowWise+=nums[i][j];
    //         // }
    //         nums[i][j]%2==0?evenSumRowWise+=nums[i][j]:evenSumRowWise+=0;
    //     }
    //     // if(evenSumRowWise==0){
    //     //     cout <<"No Even"<<endl;
    //     // }else{
    //     //     cout <<"Even Sum for Row "<<i+1<<": "<<evenSumRowWise<<endl;
    //     // }
    //     evenSumRowWise==0?cout<<"No Even":cout<<evenSumRowWise;
    //     cout <<endl;
    // }

    // cout <<"-------------------------------"<<endl;
    // cout <<"All Elements Sum: "<<sum<<endl;



    /*
    
    {
        {1,1,3},
        {4,5,6},
        {7,8,9}
    };
    
    */

}