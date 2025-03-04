#include <iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    string name;
    double marks;

    Student(int r, string n, double m){
        rollNo = r;
        name = n;
        marks = m;
    }
};


void welcome(){
    cout <<"Welcome to Chitkara University"<<endl;
}


// void add(int a, int b){
//     cout<<a+b<<endl;
// }


// int add(int a, int b){
//     return  a+b;
// }


int* createArray(int size){
    int * arr = new int[size];
    for(int i=0;i<size;i++){
        arr[i] = i+1;
    }
    return arr;
}



int main(){

   //Pointer: Its store addresses of another variables.

   //Pointer To Primitive Type of Data.
//    int x = 45;
//    int *ptr = &x;

//    cout <<ptr<<endl;  //address
   
//    //to get the value at address then use: * dereference operator
//    cout <<*ptr<<endl;  //address


//    //Pointer To Object Type of Data.

//    int nums[]  = {1,2,3,4,5,6};
//    int *ptr = nums;

//     cout <<ptr<<endl; //address of first element of the array

//     //to check the element at this address
//     cout <<*ptr<<endl; //1


//     string name = "pablo";

//     // string *ptr = &name;
//     char *ptr = &name[0];

//     cout <<ptr<<endl;
//     cout <<*ptr<<endl; //p

    // Student student = Student(34, "Kishor", 56.45);

    // Student *ptr = &student;

    // // cout <<ptr<<endl; //address
    // cout <<ptr->name<<endl; //address
    // cout <<ptr->rollNo<<endl; //address
    // cout <<ptr->marks<<endl; //address


    //Pointer to Function:
    //Syntax: function_return_Type (*function_ptr_name)(parameters if avaiable -()) = fuctionName;

    // void(*ptr1)() =  welcome;
    // ptr1();

    // void (*ptr2)(int, int) = add;

    // ptr2(45, 45);

    // int (*ptr2)(int, int) = add;

    // cout <<ptr2(45, 45);

    // int* (*ptr3)(int) = createArray;
    // int* arr = ptr3(5);
    // cout <<*arr<<endl;

    //Pointer to Pointer:
    // int x = 45;

    // int *ptr = &x;

    // int** ptr1 = &ptr;

    // cout <<**ptr1<<endl;

}