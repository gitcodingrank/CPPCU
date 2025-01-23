#include <iostream>

using namespace std;

int main(){

    //Why Loop?
    //If i ask print Hello 10 times.
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;

    //Above code has following problems:
    //1. Lengthy Code: harder to maintain.
    //2. Redundant/Duplicate: Your program has repeated code
    //3. Your compiler will take time to compiler such codes.

    //Loop solves all above problems.

    //Loop: it is used to execture block of code again and again until the condition is true.

    //In c++, we've following types of loop:
    //1. while loop
    //2. do while loop
    //3. for loop
    //4. range(enhance loop)

    //1. while: Fundamental/basic task is to execute block of code until the condtion is true.
    
    /*
    Syntax:
    while(condtion){
        //block of code if the condition is true
    }
    
    */

   //Example: Print Hello 10 times:

//    while(true){
//         cout<<"Hello"<<endl;
//    }

//As a developer, it is important to take care about specific loop iterations/rounds, to take this need to stop the loop at some point.

//to stop, every loop has three important points:
//1. startingPoiint - Initialization:
//2. endingPoint - condition
//3. steps/jumps - updation


//Example: Print "Hello" 10 times:

//startinPoint
// int sp = 1;

// while(sp<=10) //condition
// {
//     cout <<"Hello"<<endl;

//     //steps/jumps:
//     // sp = sp + 1;
//     // sp+=1;
//     sp++;
// }


//Exmaple:

// int sp = 1;

// while(sp<=10) //condition
// {
//     cout <<"Hello "<<sp++<<endl;

//     //steps/jumps:
//     // sp = sp + 1;
//     // sp+=1;
//     // sp++;
// }

//Student Task: You've given an integer number, your task is to reverse it.

// int num = 12345;
//output: 54321

// int lastDigit1 = num%10; //5
// cout <<lastDigit1<<endl; //5
// num = num/10; //1234 //reassignment/replacement


// int lastDigit2 = num%10; //4
// cout <<lastDigit2<<endl; //4
// num = num/10; //123


// int lastDigit3 = num%10; //3
// cout <<lastDigit3<<endl; //3
// num = num/10; //12


// int lastDigit4 = num%10; //4
// cout <<lastDigit4<<endl; //4
// num = num/10; //1


// int lastDigit5 = num%10; //1
// cout <<lastDigit5<<endl; //1
// num = num/10; //0

// int num = 12345;

// while(num!=0){
//     int lastDigit5 = num%10; 
//     cout <<lastDigit5<<" "; 
//     num = num/10; 
// }

/*
Visualization(Dry Run):
Given: num = 12345

Round/Iteration 1: num!=0 -> true
                    -lastDigit ->5
                    -print->5
                    ->num -> 1234
Round/Iteration 2: num!=0 -> true
                    -lastDigit ->4
                    -print->4
                    ->num -> 123
Round/Iteration 3: num!=0 -> true
                    -lastDigit ->3
                    -print->3
                    ->num -> 12
Round/Iteration 4: num!=0 -> true
                    -lastDigit ->2
                    -print->2
                    ->num -> 1
Round/Iteration 5: num!=0 -> true
                    -lastDigit ->1
                    -print->1
                    ->num -> 0
Round/Iteration 6: num!=0 -> false -> come out of the while loop
*/

//do-while loop: Fundamental/basic task is to execute block of code until the condtion is true.

/*
Syntax:
do{
    //block of code
}
while(condition)
*/

//But there is one different between while and do-while
//1. while loop: it checks the condition before execution
//2. do while loop: it doesn't check the condition for first round/iteration, it starts checking condition second iteation/round onwards.

//Example: print 1 to 10 in one line.

// int sp = 1;
// do{
//     cout <<sp<<" ";
//     sp++;
// }
// while(sp<=10);


//difference:
//usng while loop:

// int sp1=11;
// while(sp1<=10){
//     cout<<sp1<<" ";
//     sp1++;
// }

// cout <<"-----------------------"<<endl;

// //usng do-while loop:
// int sp2 = 11;
// do{
//     cout <<sp2<<" ";
//     sp2++;
// }
// while(sp2<=10);


//For Loop: Fundamental/basic task is to execute block of code until the condtion is true.
//It is best among all the loops in terms of following things:

//1. It promotes less/clean code as compare to while and do while loop
//2. When to use: when number of iterations/rounds are known.
//3. It keeps all three points(start, end, steps) about loop at once place so that you can focus on main logic to write inside its body.

/*
Syntax:
for(initialization/startingPoint;endPoint;steps/jumps){
        //block of code.
    }

*/

//Example 1: Print hello 10 times

// for(int sp =1;sp<=10;sp++){
//     cout <<"Hello"<<" ";
// }



}