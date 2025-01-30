#include <iostream>

using namespace std;

int main(){

    //2D Array: It is a data structure which is used to store collections/sets of elements in the tabular format shared as a single variable.

    //Syntax: data_type arrayName[row][column];
 
    //Example:
    // int nums[3][3] = {
    //                 {1,2,3},
    //                 {4,5,6},
    //                 {7,8,9}
    //             };

    //accessing the element from 2d array? - using index

    // cout <<nums[2][1]<<endl; //8
    // cout <<nums[1][2]<<endl; //6

    //Loop with 2d Array: Nested Loop
    //Outer Loop: Rows
    //Inner Loop: Columns

    //Row? -
    // int rows = sizeof(nums)/sizeof(nums[0]); 
    // //cout <<rows<<endl;

    // //Columns?
    // int columns = sizeof(nums[0])/sizeof(nums[0][0]); 
    // // cout<<columns<<endl;

    // //outer loop: rows
    // for(int row=0;row<rows;row++){

    //     //inner loop: columns
    //     for(int column=0;column<columns;column++){
    //             cout <<nums[row][column]<<" ";
    //     }
    //     cout <<endl;
    // }

    /*
    Student Task 1: Given a 2d array of numbers, your task is to perform following operations.columns

    int nums[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                };
    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]); 

    1. find out the sum of all elements
    2. find out the sum of even numbers row wise, if there is no even number row wise then you can print "No Even" else you can print sum of all even.
    
    */

//    int nums[3][3] = {
//                     {1,1,3},
//                     {4,5,6},
//                     {7,8,9}
//                 };
//     int rows = sizeof(nums)/sizeof(nums[0]);
//     int columns = sizeof(nums[0])/sizeof(nums[0][0]);

//     int sum = 0;

//     for(int row=0;row<rows;row++){

//         int evenSum = 0;
//         for(int column=0;column<columns;column++){
//                 sum+=nums[row][column];

//                 // if(nums[row][column]%2==0){
//                 //     evenSum+=nums[row][column];
//                 // }
//                 nums[row][column]%2==0?evenSum+=nums[row][column]:evenSum+=0;

//         }
//         // if(evenSum==0){
//         //     cout <<"No Even";
//         // }else{
//         //     cout <<evenSum;
//         // }
//         evenSum==0?cout <<"No Even":cout <<evenSum;
//         cout <<endl;
//     }

//     cout <<"-----------------------------------"<<endl;
//     cout <<"Sum of All the Elements: "<<sum<<endl;

/*

int nums[3][3] = {
                    {1,1,3},
                    {4,5,6},
                    {7,8,9}
                };

N Traversal of above 2d array:
   7      4     1      5      9      6      3 
[2][0] [1][0] [0][0] [1][1] [2][2] [1][2] [0][2]
*/



}