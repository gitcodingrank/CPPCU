#include <iostream>
using namespace std;

//Declation of function
/*
return_type functionName(parameters){
    //specific code related to one task.
}
*/

//Declaration and Given its definition as well.
// void welcome(){
//     cout <<"Welcome to Function in C++ Programming";
// }

// void playMusic(){
//     cout <<"XYZ music has started playing....";
// }

// void pauseMusic(){
//     cout <<"XYZ music has stopped playing....";
// }

// int add(int a, int b){
//     return a + b;
// }

// bool isPrime(int num){
//     //logic for prime
//     int count =0;
//     for(int i=1;i<=num;i++){
//         num%i==0?(count++):count+=0;
//     }
//     return count==2?true:false;
// }


//Declared a function as 'add' - this is the example of prototype function
int add(int a, int b);

int main(){


  //Functions: It is a block of code related to specific functionality/task.

  //Note: Function is useless if you don't all it for using.
  //syntax: functionName();

//   welcome();
//   cout <<endl;
//   playMusic();
//   cout <<endl;
//   pauseMusic();
//   cout <<endl;
//   playMusic();

//Parameters and Arguments:
//Function Parameters: These are just a function variables that we define at time time function declaration, such variables are only useful within function.

/*
int add(int a, int b){
    return a + b;
}
//in above example a, and b are functions variables/parameters
*/

//Function Arguments: These are actual values, we pass to the function parameters/variables at time of calling the functions 

/*
add(30, 20);
//in above example 30, and 20 are actual/original values passing to the function parameters where 30 will be for a and 20 will be for b.


*/

// cout <<add(20, 30)<<endl;
// cout <<add(30, 50)<<endl;

//Problem: Find out the prime number between 1 and 30 where both 1 and 30 are inclusive.

// for(int i=1;i<=30;i++){
//     if(isPrime(i)){
//         cout <<i<<" is Prime Number"<<endl;
//     }
// }


/*
Student Task: 
Create an application which is responsible for below mathematical calculations:
//1. Addition -> Enter Numbers for Addition - print the result, then again ask for other operation
//2. Finding the Square of Any Number
//3. checkEven
//4. Find out the small character length in the string
//5. Find Factorila of a Number
//6. Exit

*/

// cout <<add(4,5)<<endl;
  

}

//Given the definition to the above declared function
// int add(int a, int b){
//     return a + b;
// }