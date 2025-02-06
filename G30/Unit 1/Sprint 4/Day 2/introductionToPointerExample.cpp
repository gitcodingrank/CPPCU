#include <iostream>
using namespace std;


//function by value
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }


//function by address/reference
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



int main(){

  //Pointer: It is a variable which is used to store the address of another variable, or you can say - it stores the address where the actual data is kept in the memory.

  //Declaration of Pointer:
  /*
  data_type* pointerVariableName;
  or
  data_type *pointerVariableName;
  */

    //Example:
    // int num = 10;

    // cout <<num<<endl;

    //How to print the address of above variable 'num'
    //using & operator: &variableName - address

    //cout <<&num<<endl;

    // int* ptr = &num;

    // cout <<ptr<<endl; //same
    // cout <<&num<<endl; //same

    //How to access the actual data using address which pointer stores.
    //using dereference oprator: *
    //syntax: *pointerName

    // cout <<*ptr<<endl;

    /*
    void swap(int a, int b){

        int temp = a;
        a = b;
        b = temp;
    }

    void swap(int* a, int* b){

        int temp = *a;
        *a = *b;
        *b = temp;

    }

    */

    // int a = 45;
    // int b = 50;

    // swap(&a, &b);
    
    // cout<<"a: "<<a<<" b: "<<b<<endl;

    // int nums[] = {34,56,12,33,90,23};

    // // cout <<nums<<endl;

    // int *ptr = &nums[0];
    //int *ptr = nums;

    //cout <<nums<<endl;
    // cout <<ptr<<"-----"<<*ptr<<endl;
    // cout <<ptr+1<<"-----"<<*(ptr+1)<<endl;
    // cout <<ptr+2<<"-----"<<*(ptr+2)<<endl;
    // cout <<ptr+3<<"-----"<<*(ptr+3)<<endl;
    // cout <<ptr+4<<"-----"<<*(ptr+4)<<endl;

    //Student Task: 
    /*
    Problem Statement: Create an array of numbers of user's choice, take input for the same, and perform following operations:
    1. Find out the sum of all elements.
    2. Find out the minimum element.

    Note: Above all operations are to be perfromed using pointer. 
    */

   int size;
   cout <<"Enter the Size for array: ";
   cin>>size;

   int nums[size];

   int* ptr = nums;

   for(int i=0;i<size;i++){
        cout <<"Enter Number at index "<<i<<": ";
        cin >>*(ptr + i);
   }

    //printing elements usingn pointers.
   for(int i=0;i<size;i++){
        cout <<*(ptr + i)<<" ";
   }

   cout <<endl;
   int sum = 0;
   for(int i=0;i<size;i++){
        sum+=*(ptr + i);
   }
   cout <<"Sum is: "<<sum<<endl;

   cout <<endl;
   int min = *ptr;
   for(int i=0;i<size;i++){
        if(min>*(ptr + i)){
            min = *(ptr + i);
        }
   }
   cout <<"Minimu is: "<<min<<endl;





}